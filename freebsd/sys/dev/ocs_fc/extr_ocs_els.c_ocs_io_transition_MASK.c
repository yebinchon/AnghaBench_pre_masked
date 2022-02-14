
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ocs_sm_function_t ;
typedef int ocs_node_t ;
struct TYPE_3__ {int els_sm; int * node; } ;
typedef TYPE_1__ ocs_io_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void*) ;

__attribute__((used)) static void
FUNC_3(ocs_io_t *VAR_0, ocs_sm_function_t VAR_1, void *VAR_2)
{

 ocs_node_t *VAR_3 = VAR_0->node;
 FUNC_0(VAR_3);
  FUNC_2(&VAR_0->els_sm, VAR_1, VAR_2);
 FUNC_1(VAR_3);
}
