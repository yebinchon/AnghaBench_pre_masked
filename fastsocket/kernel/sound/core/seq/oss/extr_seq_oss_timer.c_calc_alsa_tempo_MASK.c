
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_timer {int tempo; int oss_tempo; int oss_timebase; int ppq; } ;



__attribute__((used)) static void
FUNC_0(struct seq_oss_timer *VAR_0)
{
 VAR_0->tempo = (60 * 1000000) / VAR_0->oss_tempo;
 VAR_0->ppq = VAR_0->oss_timebase;
}
