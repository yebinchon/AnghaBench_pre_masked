
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller_data {int npss; int * power_state; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct nvme_controller_data *VAR_0)
{
 int VAR_1;

 FUNC_1("\nPower States Supported: %d\n\n", VAR_0->npss + 1);
 FUNC_1(" #   Max pwr  Enter Lat  Exit Lat RT RL WT WL Idle Pwr  Act Pwr Workloadd\n");
 FUNC_1("--  --------  --------- --------- -- -- -- -- -------- -------- --\n");
 for (VAR_1 = 0; VAR_1 <= VAR_0->npss; VAR_1++)
  FUNC_0(VAR_1, &VAR_0->power_state[VAR_1]);
}
