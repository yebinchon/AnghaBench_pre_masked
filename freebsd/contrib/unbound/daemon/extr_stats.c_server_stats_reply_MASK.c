
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct worker {TYPE_2__* daemon; } ;
struct ub_stats_info {int dummy; } ;
typedef int s ;
struct TYPE_4__ {TYPE_1__** workers; } ;
struct TYPE_3__ {int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct worker*,struct ub_stats_info*,int) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct worker* VAR_1, int VAR_2)
{
 struct ub_stats_info VAR_3;
 FUNC_1(VAR_1, &VAR_3, VAR_2);
 FUNC_3(VAR_0, "write stats replymsg");
 if(!FUNC_2(VAR_1->daemon->workers[0]->cmd,
  (uint8_t*)&VAR_3, sizeof(VAR_3), 0))
  FUNC_0("could not write stat values over cmd channel");
}
