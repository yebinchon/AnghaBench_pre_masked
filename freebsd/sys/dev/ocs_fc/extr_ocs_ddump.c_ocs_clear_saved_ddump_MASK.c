
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ddump_saved; } ;
typedef TYPE_1__ ocs_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int32_t
FUNC_3(ocs_t *VAR_0)
{

 if (FUNC_1(&VAR_0->ddump_saved)) {
  FUNC_0(VAR_0, "saved ddump cleared\n");
  FUNC_2(&VAR_0->ddump_saved);
  return 0;
 } else {
  FUNC_0(VAR_0, "no saved ddump found\n");
  return 1;
 }
}
