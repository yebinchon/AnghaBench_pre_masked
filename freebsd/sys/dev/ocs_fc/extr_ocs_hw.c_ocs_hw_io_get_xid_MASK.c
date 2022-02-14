
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_8__ {int indicator; } ;
typedef TYPE_2__ ocs_hw_io_t ;
typedef int int32_t ;


 int FUNC_0 (int *,char*,TYPE_1__*,TYPE_2__*) ;

int32_t
FUNC_1(ocs_hw_t *VAR_0, ocs_hw_io_t *VAR_1)
{
 if (!VAR_0 || !VAR_1) {
  FUNC_0(VAR_0 ? VAR_0->os : ((void*)0),
       "bad parameter hw=%p io=%p\n", VAR_0, VAR_1);
  return -1;
 }

 return VAR_1->indicator;
}
