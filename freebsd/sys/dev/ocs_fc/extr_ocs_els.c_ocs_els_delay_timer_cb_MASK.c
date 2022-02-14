
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_node_t ;
struct TYPE_4__ {int delay_timer; int ocs; int * node; } ;
typedef TYPE_1__ ocs_io_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,void (*) (void*),TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 ocs_io_t *VAR_2 = VAR_1;
 ocs_node_t *VAR_3 = VAR_2->node;
 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_2, VAR_0, ((void*)0));
  FUNC_2(VAR_3);
 } else {
  FUNC_3(VAR_2->ocs, &VAR_2->delay_timer, FUNC_4, VAR_2, 1);
 }
}
