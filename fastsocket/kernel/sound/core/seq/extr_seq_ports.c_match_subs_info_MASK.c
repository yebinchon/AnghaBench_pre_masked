
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_port_subscribe {scalar_t__ flags; scalar_t__ queue; int dest; int sender; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_port_subscribe *VAR_0,
      struct snd_seq_port_subscribe *VAR_1)
{
 if (FUNC_0(&VAR_0->sender, &VAR_1->sender) &&
     FUNC_0(&VAR_0->dest, &VAR_1->dest)) {
  if (VAR_0->flags && VAR_0->flags == VAR_1->flags)
   return VAR_0->queue == VAR_1->queue;
  else if (! VAR_0->flags)
   return 1;
 }
 return 0;
}
