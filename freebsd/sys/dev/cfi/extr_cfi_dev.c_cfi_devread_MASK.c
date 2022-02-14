
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
typedef int u_int ;
struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; } ;
struct cfi_softc {scalar_t__ sc_size; int sc_width; scalar_t__ sc_writing; } ;
struct cdev {struct cfi_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct cfi_softc*) ;
 void* FUNC_2 (struct cfi_softc*,int) ;
 int FUNC_3 (void**,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, struct uio *VAR_2, int VAR_3)
{
 union {
  uint8_t x8[4];
  uint16_t x16[2];
  uint32_t x32[1];
 } VAR_4;
 struct cfi_softc *VAR_5;
 u_int VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_5 = VAR_1->si_drv1;

 VAR_8 = (VAR_5->sc_writing) ? FUNC_1(VAR_5) : 0;
 if (!VAR_8)
  VAR_8 = (VAR_2->uio_offset > VAR_5->sc_size) ? VAR_0 : 0;

 while (VAR_8 == 0 && VAR_2->uio_resid > 0 &&
     VAR_2->uio_offset < VAR_5->sc_size) {
  VAR_6 = VAR_2->uio_offset;
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  switch (VAR_5->sc_width) {
  case 1:
   VAR_4.x8[0] = VAR_7;
   break;
  case 2:
   VAR_4.x16[0] = VAR_7;
   break;
  case 4:
   VAR_4.x32[0] = VAR_7;
   break;
  }
  VAR_6 &= VAR_5->sc_width - 1;
  VAR_8 = FUNC_3(VAR_4.x8 + VAR_6,
      FUNC_0(VAR_2->uio_resid, VAR_5->sc_width - VAR_6), VAR_2);
 }
 return (VAR_8);
}
