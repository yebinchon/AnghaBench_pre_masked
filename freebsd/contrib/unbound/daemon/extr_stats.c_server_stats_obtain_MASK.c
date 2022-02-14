
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct worker {int cmd; } ;
struct ub_stats_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ub_stats_info*,int *,size_t) ;
 int FUNC_3 (struct worker*,struct ub_stats_info*,int) ;
 int FUNC_4 (int ,int **,scalar_t__*,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct worker*,int ) ;

void FUNC_7(struct worker* VAR_3, struct worker* VAR_4,
 struct ub_stats_info* VAR_5, int VAR_6)
{
 uint8_t *VAR_7 = ((void*)0);
 uint32_t VAR_8 = 0;
 if(VAR_3 == VAR_4) {

  FUNC_3(VAR_3, VAR_5, VAR_6);
  return;
 }

 FUNC_5(VAR_0, "write stats cmd");
 if(VAR_6)
  FUNC_6(VAR_4, VAR_1);
 else FUNC_6(VAR_4, VAR_2);
 FUNC_5(VAR_0, "wait for stats reply");
 if(!FUNC_4(VAR_3->cmd, &VAR_7, &VAR_8, 0))
  FUNC_0("failed to read stats over cmd channel");
 if(VAR_8 != (uint32_t)sizeof(*VAR_5))
  FUNC_0("stats on cmd channel wrong length %d %d",
   (int)VAR_8, (int)sizeof(*VAR_5));
 FUNC_2(VAR_5, VAR_7, (size_t)VAR_8);
 FUNC_1(VAR_7);
}
