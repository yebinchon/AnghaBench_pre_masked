
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int active_ios_lock; scalar_t__ els_pend; int els_io_pend_list; scalar_t__ els_active; int els_io_active_list; int io_alloc_enabled; struct TYPE_11__* ocs; struct TYPE_11__* node; } ;
typedef TYPE_1__ ocs_t ;
typedef TYPE_1__ ocs_node_t ;
typedef TYPE_1__ ocs_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
 ocs_io_t *VAR_3 = (ocs_io_t *)VAR_2;
 ocs_t *VAR_4;
 ocs_node_t *VAR_5;
 int VAR_6 = VAR_0;

 FUNC_0(VAR_3);
 FUNC_0(VAR_3->node);
 FUNC_0(VAR_3->node->ocs);
 VAR_4 = VAR_3->node->ocs;

 VAR_5 = VAR_3->node;
 VAR_4 = VAR_5->ocs;

 FUNC_4(&VAR_5->active_ios_lock);
  if (VAR_3->els_active) {

   FUNC_3(&VAR_5->els_io_active_list, VAR_3);



   VAR_6 = (!VAR_5->io_alloc_enabled) && FUNC_2(&VAR_5->els_io_active_list);
   VAR_3->els_active = 0;
  } else if (VAR_3->els_pend) {




   FUNC_3(&VAR_5->els_io_pend_list, VAR_3);
   VAR_3->els_pend = 0;
  } else {
   FUNC_5(VAR_4, "assertion failed: niether els->els_pend nor els->active set\n");
   FUNC_8(&VAR_5->active_ios_lock);
   return;
  }

 FUNC_8(&VAR_5->active_ios_lock);

 FUNC_1(VAR_4, VAR_3);

 if (VAR_6) {
  FUNC_6(VAR_5, VAR_1, ((void*)0));
 }

 FUNC_7(VAR_4);
}
