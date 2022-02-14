
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct cfi_softc {int sc_regions; scalar_t__ sc_wrbufsz; int sc_writing; int * sc_wrbuf; void* sc_wrbufcpy; scalar_t__ sc_width; scalar_t__ sc_wrofs; TYPE_1__* sc_region; } ;
struct TYPE_2__ {scalar_t__ r_blocks; scalar_t__ r_blksz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct cfi_softc*,scalar_t__) ;
 void* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (void*,int *,scalar_t__) ;

int
FUNC_3(struct cfi_softc *VAR_3, u_int VAR_4)
{
 union {
  uint8_t *x8;
  uint16_t *x16;
  uint32_t *x32;
 } VAR_5;
 u_int VAR_6, VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_6 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3->sc_regions; VAR_9++) {
  VAR_7 = VAR_3->sc_region[VAR_9].r_blocks * VAR_3->sc_region[VAR_9].r_blksz;
  if (VAR_4 < VAR_6 + VAR_7)
   break;
  VAR_6 += VAR_7;
 }
 if (VAR_9 == VAR_3->sc_regions)
  return (VAR_0);

 VAR_3->sc_wrbufsz = VAR_3->sc_region[VAR_9].r_blksz;
 VAR_3->sc_wrbuf = FUNC_1(VAR_3->sc_wrbufsz, VAR_1, VAR_2);
 VAR_3->sc_wrofs = VAR_4 - (VAR_4 - VAR_6) % VAR_3->sc_wrbufsz;


 VAR_5.x8 = VAR_3->sc_wrbuf;
 for (VAR_9 = 0; VAR_9 < VAR_3->sc_wrbufsz; VAR_9 += VAR_3->sc_width) {
  VAR_8 = FUNC_0(VAR_3, VAR_3->sc_wrofs + VAR_9);
  switch (VAR_3->sc_width) {
  case 1:
   *(VAR_5.x8)++ = VAR_8;
   break;
  case 2:
   *(VAR_5.x16)++ = VAR_8;
   break;
  case 4:
   *(VAR_5.x32)++ = VAR_8;
   break;
  }
 }
 VAR_3->sc_wrbufcpy = FUNC_1(VAR_3->sc_wrbufsz, VAR_1, VAR_2);
 FUNC_2(VAR_3->sc_wrbufcpy, VAR_3->sc_wrbuf, VAR_3->sc_wrbufsz);
 VAR_3->sc_writing = 1;
 return (0);
}
