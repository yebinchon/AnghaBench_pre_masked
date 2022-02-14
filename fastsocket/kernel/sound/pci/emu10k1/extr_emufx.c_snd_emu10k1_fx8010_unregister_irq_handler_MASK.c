
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_irq {struct snd_emu10k1_fx8010_irq* next; } ;
struct TYPE_2__ {int irq_lock; struct snd_emu10k1_fx8010_irq* irq_handlers; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; int * dsp_interrupt; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1_fx8010_irq*) ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_emu10k1 *VAR_1,
           struct snd_emu10k1_fx8010_irq *VAR_2)
{
 struct snd_emu10k1_fx8010_irq *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_1->fx8010.irq_lock, VAR_4);
 if ((VAR_3 = VAR_1->fx8010.irq_handlers) == VAR_2) {
  VAR_1->fx8010.irq_handlers = VAR_3->next;
  if (VAR_1->fx8010.irq_handlers == ((void*)0)) {
   FUNC_1(VAR_1, VAR_0);
   VAR_1->dsp_interrupt = ((void*)0);
  }
 } else {
  while (VAR_3 && VAR_3->next != VAR_2)
   VAR_3 = VAR_3->next;
  if (VAR_3)
   VAR_3->next = VAR_3->next->next;
 }
 FUNC_3(&VAR_1->fx8010.irq_lock, VAR_4);
 FUNC_0(VAR_2);
 return 0;
}
