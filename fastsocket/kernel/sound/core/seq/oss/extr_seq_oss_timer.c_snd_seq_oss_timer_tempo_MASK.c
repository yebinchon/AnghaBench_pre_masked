
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_timer {int oss_tempo; int tempo; int dp; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_oss_timer*) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(struct seq_oss_timer *VAR_3, int VAR_4)
{
 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;
 else if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;
 VAR_3->oss_tempo = VAR_4;
 FUNC_0(VAR_3);
 if (VAR_3->running)
  FUNC_1(VAR_3->dp, VAR_2, VAR_3->tempo);
 return 0;
}
