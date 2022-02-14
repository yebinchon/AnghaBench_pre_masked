
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ocs; } ;
typedef TYPE_2__ ocs_xport_t ;
struct TYPE_9__ {int hw; TYPE_1__* xport; scalar_t__ enable_ini; scalar_t__ config_tgt; } ;
typedef TYPE_3__ ocs_t ;
typedef int int32_t ;
struct TYPE_7__ {int stats_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;

int32_t
FUNC_5(ocs_xport_t *VAR_0)
{
 ocs_t *VAR_1 = VAR_0->ocs;


 if (VAR_1->config_tgt)
  FUNC_3(VAR_1);

 if (VAR_1->enable_ini) {
  FUNC_2(VAR_1);


  if (FUNC_4(&VAR_1->xport->stats_timer))
   FUNC_0(&VAR_1->xport->stats_timer);
 }

 FUNC_1(&VAR_1->hw);

 return 0;
}
