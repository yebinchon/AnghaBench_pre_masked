
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_timer {scalar_t__ running; int dp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

int
FUNC_1(struct seq_oss_timer *VAR_1)
{
 if (! VAR_1->running)
  return 0;
 FUNC_0(VAR_1->dp, VAR_0, 0);
 VAR_1->running = 0;
 return 0;
}
