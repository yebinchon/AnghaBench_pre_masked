
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct powermac_nvram_softc {int sc_isopen; scalar_t__ sc_wpos; scalar_t__ sc_rpos; } ;
struct cdev {struct powermac_nvram_softc* si_drv1; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct cdev *VAR_1, int VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct powermac_nvram_softc *VAR_5 = VAR_1->si_drv1;

 if (VAR_5->sc_isopen)
  return VAR_0;
 VAR_5->sc_isopen = 1;
 VAR_5->sc_rpos = VAR_5->sc_wpos = 0;
 return 0;
}
