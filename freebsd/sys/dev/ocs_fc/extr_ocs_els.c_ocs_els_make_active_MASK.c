
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int active_ios_lock; int ocs; int els_io_active_list; int els_io_pend_list; } ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_7__ {int els_active; scalar_t__ els_pend; TYPE_1__* node; } ;
typedef TYPE_2__ ocs_io_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(ocs_io_t *VAR_0)
{
 ocs_node_t *VAR_1 = VAR_0->node;


 FUNC_2(&VAR_1->active_ios_lock);
  if (VAR_0->els_pend) {
   if (VAR_0->els_active) {
    FUNC_3(VAR_1->ocs, "assertion failed: both els->els_pend and els->active set\n");
    FUNC_4(&VAR_1->active_ios_lock);
    return;
   } else {


    FUNC_1(&VAR_1->els_io_pend_list, VAR_0);
    VAR_0->els_pend = 0;


    FUNC_0(&VAR_1->els_io_active_list, VAR_0);
    VAR_0->els_active = 1;
   }
  } else {

   if (!VAR_0->els_active) {
    FUNC_3(VAR_1->ocs, "assertion failed: niether els->els_pend nor els->active set\n");
   }
  }
 FUNC_4(&VAR_1->active_ios_lock);
}
