
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_readq {unsigned long input_time; int midi_sleep; scalar_t__ tail; scalar_t__ head; scalar_t__ qlen; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct seq_oss_readq *VAR_0)
{
 if (VAR_0->qlen) {
  VAR_0->qlen = 0;
  VAR_0->head = VAR_0->tail = 0;
 }

 if (FUNC_0(&VAR_0->midi_sleep))
  FUNC_1(&VAR_0->midi_sleep);
 VAR_0->input_time = (unsigned long)-1;
}
