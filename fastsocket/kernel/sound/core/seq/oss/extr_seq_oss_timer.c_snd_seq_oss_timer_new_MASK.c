
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_timer {int oss_tempo; int oss_timebase; scalar_t__ running; scalar_t__ realtime; scalar_t__ cur_tick; struct seq_oss_devinfo* dp; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_oss_timer*) ;
 struct seq_oss_timer* FUNC_1 (int,int ) ;

struct seq_oss_timer *
FUNC_2(struct seq_oss_devinfo *VAR_1)
{
 struct seq_oss_timer *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->dp = VAR_1;
 VAR_2->cur_tick = 0;
 VAR_2->realtime = 0;
 VAR_2->running = 0;
 VAR_2->oss_tempo = 60;
 VAR_2->oss_timebase = 100;
 FUNC_0(VAR_2);

 return VAR_2;
}
