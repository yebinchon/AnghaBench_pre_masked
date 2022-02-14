
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int total ;
struct ub_stats_info {double mesh_time_median; } ;
struct daemon_remote {TYPE_2__* worker; } ;
struct daemon {int num; TYPE_1__* cfg; int * workers; } ;
struct TYPE_6__ {struct daemon* daemon; } ;
struct TYPE_5__ {scalar_t__ stat_extended; } ;
typedef int RES ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ub_stats_info*,int ,int) ;
 int FUNC_2 (int *,struct ub_stats_info*) ;
 int FUNC_3 (int *,struct ub_stats_info*) ;
 int FUNC_4 (int *,TYPE_2__*,struct daemon*,struct ub_stats_info*) ;
 int FUNC_5 (int *,char*,struct ub_stats_info*) ;
 int FUNC_6 (int *,int,struct ub_stats_info*) ;
 int FUNC_7 (int *,TYPE_2__*,int) ;
 int FUNC_8 (struct ub_stats_info*,struct ub_stats_info*) ;
 int FUNC_9 (TYPE_2__*,int ,struct ub_stats_info*,int) ;

__attribute__((used)) static void
FUNC_10(RES* VAR_0, struct daemon_remote* VAR_1, int VAR_2)
{
 struct daemon* VAR_3 = VAR_1->worker->daemon;
 struct ub_stats_info VAR_4;
 struct ub_stats_info VAR_5;
 int VAR_6;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_0(VAR_3->num > 0);

 for(VAR_6=0; VAR_6<VAR_3->num; VAR_6++) {
  FUNC_9(VAR_1->worker, VAR_3->workers[VAR_6], &VAR_5, VAR_2);
  if(!FUNC_6(VAR_0, VAR_6, &VAR_5))
   return;
  if(VAR_6 == 0)
   VAR_4 = VAR_5;
  else FUNC_8(&VAR_4, &VAR_5);
 }

 VAR_4.mesh_time_median /= (double)VAR_3->num;
 if(!FUNC_5(VAR_0, "total", &VAR_4))
  return;
 if(!FUNC_7(VAR_0, VAR_1->worker, VAR_2))
  return;
 if(VAR_3->cfg->stat_extended) {
  if(!FUNC_4(VAR_0, VAR_1->worker, VAR_3, &VAR_4))
   return;
  if(!FUNC_3(VAR_0, &VAR_4))
   return;
  if(!FUNC_2(VAR_0, &VAR_4))
   return;
 }
}
