
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct uio {scalar_t__ uio_offset; scalar_t__ uio_resid; } ;
struct cfi_softc {scalar_t__ sc_size; scalar_t__ sc_wrofs; scalar_t__ sc_wrbufsz; scalar_t__ sc_wrbuf; scalar_t__ sc_writing; } ;
struct cdev {struct cfi_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct cfi_softc*) ;
 int FUNC_2 (struct cfi_softc*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_1, struct uio *VAR_2, int VAR_3)
{
 struct cfi_softc *VAR_4;
 u_int VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_1->si_drv1;

 VAR_7 = (VAR_2->uio_offset > VAR_4->sc_size) ? VAR_0 : 0;
 while (VAR_7 == 0 && VAR_2->uio_resid > 0 &&
     VAR_2->uio_offset < VAR_4->sc_size) {
  VAR_5 = VAR_2->uio_offset;





  if (VAR_4->sc_writing) {
   VAR_6 = VAR_4->sc_wrofs + VAR_4->sc_wrbufsz;
   if (VAR_5 < VAR_4->sc_wrofs || VAR_5 >= VAR_6)
    FUNC_1(VAR_4);
  }


  if (!VAR_4->sc_writing) {
   VAR_7 = FUNC_2(VAR_4, VAR_2->uio_offset);
   if (VAR_7)
    break;
  }

  VAR_6 = VAR_4->sc_wrofs + VAR_4->sc_wrbufsz;
  VAR_7 = FUNC_3(VAR_4->sc_wrbuf + VAR_5 - VAR_4->sc_wrofs,
      FUNC_0(VAR_6 - VAR_5, VAR_2->uio_resid), VAR_2);
 }
 return (VAR_7);
}
