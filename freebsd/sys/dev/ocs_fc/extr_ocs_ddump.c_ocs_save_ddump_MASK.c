
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int ddump_saved; } ;
typedef TYPE_1__ ocs_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int32_t
FUNC_5(ocs_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (FUNC_3(&VAR_0->ddump_saved) > 0) {
  FUNC_1(VAR_0, "Saved ddump already exists\n");
  return 1;
 }

 if (!FUNC_4(&VAR_0->ddump_saved)) {
  FUNC_2(VAR_0, "Saved ddump not allocated\n");
  return -1;
 }

 FUNC_1(VAR_0, "Saving ddump\n");
 FUNC_0(VAR_0, &VAR_0->ddump_saved, VAR_1, VAR_2);
 FUNC_1(VAR_0, "Saved ddump: %d bytes written\n", FUNC_3(&VAR_0->ddump_saved));
 return 0;
}
