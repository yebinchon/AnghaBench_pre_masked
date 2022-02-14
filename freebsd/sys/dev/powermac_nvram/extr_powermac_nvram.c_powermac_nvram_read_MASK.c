
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct powermac_nvram_softc {int sc_rpos; scalar_t__ sc_data; } ;
struct cdev {struct powermac_nvram_softc* si_drv1; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (void*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct powermac_nvram_softc *VAR_6 = VAR_0->si_drv1;

 VAR_3 = 0;
 while (VAR_1->uio_resid > 0) {
  VAR_5 = sizeof(VAR_6->sc_data) - VAR_6->sc_rpos;
  if (VAR_5 > 0) {
   VAR_4 = FUNC_0(VAR_1->uio_resid, VAR_5);
   VAR_3 = FUNC_1((void *)(VAR_6->sc_data + VAR_6->sc_rpos),
       VAR_4, VAR_1);
   if (VAR_3 != 0)
    break;
   VAR_6->sc_rpos += VAR_4;
  } else {
   break;
  }
 }
 return VAR_3;
}
