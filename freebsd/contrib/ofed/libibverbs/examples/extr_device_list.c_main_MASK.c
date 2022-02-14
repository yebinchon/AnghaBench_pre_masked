
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_device**) ;
 int FUNC_2 (struct ibv_device*) ;
 struct ibv_device** FUNC_3 (int*) ;
 char* FUNC_4 (struct ibv_device*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,...) ;

int FUNC_7(int VAR_0, char *VAR_1[])
{
 struct ibv_device **VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_3(&VAR_3);
 if (!VAR_2) {
  FUNC_5("Failed to get IB devices list");
  return 1;
 }

 FUNC_6("    %-16s\t   node GUID\n", "device");
 FUNC_6("    %-16s\t----------------\n", "------");

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  FUNC_6("    %-16s\t%016llx\n",
         FUNC_4(VAR_2[VAR_4]),
         (unsigned long long) FUNC_0(FUNC_2(VAR_2[VAR_4])));
 }

 FUNC_1(VAR_2);

 return 0;
}
