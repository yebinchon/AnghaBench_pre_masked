
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct powermac_nvram_softc {int sc_wpos; scalar_t__ sc_data; } ;
struct cdev {struct powermac_nvram_softc* si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (void*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_1, struct uio *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct powermac_nvram_softc *VAR_7 = VAR_1->si_drv1;

 if (VAR_7->sc_wpos >= sizeof(VAR_7->sc_data))
  return VAR_0;

 VAR_4 = 0;
 while (VAR_2->uio_resid > 0) {
  VAR_6 = sizeof(VAR_7->sc_data) - VAR_7->sc_wpos;
  if (VAR_6 > 0) {
   VAR_5 = FUNC_0(VAR_2->uio_resid, VAR_6);
   VAR_4 = FUNC_1((void *)(VAR_7->sc_data + VAR_7->sc_wpos),
       VAR_5, VAR_2);
   if (VAR_4 != 0)
    break;
   VAR_7->sc_wpos += VAR_5;
  } else {
   break;
  }
 }
 return VAR_4;
}
