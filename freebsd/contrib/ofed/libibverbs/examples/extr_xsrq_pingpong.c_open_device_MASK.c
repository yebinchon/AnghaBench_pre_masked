
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_device {int dummy; } ;
struct TYPE_2__ {int context; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ibv_device**) ;
 struct ibv_device** FUNC_2 (int *) ;
 char* FUNC_3 (struct ibv_device*) ;
 int FUNC_4 (struct ibv_device*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_2)
{
 struct ibv_device **VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(((void*)0));
 if (!VAR_3) {
  FUNC_0(VAR_1, "Failed to get IB devices list");
  return -1;
 }

 if (VAR_2) {
  for (; VAR_3[VAR_4]; ++VAR_4) {
   if (!FUNC_5(FUNC_3(VAR_3[VAR_4]), VAR_2))
    break;
  }
 }
 if (!VAR_3[VAR_4]) {
  FUNC_0(VAR_1, "IB device %s not found\n",
   VAR_2 ? VAR_2 : "");
  return -1;
 }

 VAR_0.context = FUNC_4(VAR_3[VAR_4]);
 if (!VAR_0.context) {
  FUNC_0(VAR_1, "Couldn't get context for %s\n",
   FUNC_3(VAR_3[VAR_4]));
  return -1;
 }

 FUNC_1(VAR_3);
 return 0;
}
