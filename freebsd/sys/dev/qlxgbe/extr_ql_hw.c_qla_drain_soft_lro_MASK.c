
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lro_entry {int dummy; } ;
struct lro_ctrl {int lro_active; } ;
struct TYPE_6__ {int num_sds_rings; TYPE_1__* sds; } ;
typedef TYPE_2__ qla_hw_t ;
struct TYPE_7__ {TYPE_2__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_5__ {struct lro_ctrl lro; } ;


 int FUNC_0 (int *) ;
 struct lro_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct lro_ctrl*,struct lro_entry*) ;
 int FUNC_4 (struct lro_ctrl*) ;

__attribute__((used)) static void
FUNC_5(qla_host_t *VAR_1)
{
        int VAR_2;
        qla_hw_t *VAR_3 = &VAR_1->hw;
        struct lro_ctrl *VAR_4;

        for (VAR_2 = 0; VAR_2 < VAR_3->num_sds_rings; VAR_2++) {
                VAR_4 = &VAR_3->sds[VAR_2].lro;




                struct lro_entry *VAR_5;

  while ((!FUNC_0(&VAR_4->lro_active))) {
   VAR_5 = FUNC_1(&VAR_4->lro_active);
   FUNC_2(&VAR_4->lro_active, VAR_0);
   FUNC_3(VAR_4, VAR_5);
  }

 }

 return;
}
