
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocs_softc {int sim_lock; int hw; } ;
struct TYPE_2__ {int vec; struct ocs_softc* softc; } ;
typedef TYPE_1__ ocs_intr_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 ocs_intr_ctx_t *VAR_2 = VAR_1;
 struct ocs_softc *VAR_3 = VAR_2->softc;

 FUNC_0(&VAR_3->sim_lock);
  FUNC_2(&VAR_3->hw, VAR_2->vec, VAR_0);
 FUNC_1(&VAR_3->sim_lock);
}
