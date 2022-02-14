
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_softc {TYPE_1__* ciss_cfg; } ;
struct TYPE_2__ {int active_method; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ciss_softc*,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct ciss_softc *VAR_2)
{
    int VAR_3;

    FUNC_2(1);




    if (!(VAR_2->ciss_cfg->active_method & VAR_0)) {
 FUNC_1(VAR_2, "waiting for adapter to come ready...\n");
 for (VAR_3 = 0; !(VAR_2->ciss_cfg->active_method & VAR_0); VAR_3++) {
     FUNC_0(1000000);
     if (VAR_3 > 30) {
  FUNC_1(VAR_2, "timed out waiting for adapter to come ready\n");
  return(VAR_1);
     }
 }
    }
    return(0);
}
