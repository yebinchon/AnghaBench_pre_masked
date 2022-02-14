
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_irq {unsigned char gpr_running; struct snd_emu10k1_fx8010_irq* next; void* private_data; int * handler; } ;
struct TYPE_2__ {int irq_lock; struct snd_emu10k1_fx8010_irq* irq_handlers; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; int dsp_interrupt; } ;
typedef int snd_fx8010_irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_emu10k1_fx8010_irq* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_emu10k1 *VAR_4,
         snd_fx8010_irq_handler_t *VAR_5,
         unsigned char VAR_6,
         void *VAR_7,
         struct snd_emu10k1_fx8010_irq **VAR_8)
{
 struct snd_emu10k1_fx8010_irq *VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;
 VAR_9->handler = VAR_5;
 VAR_9->gpr_running = VAR_6;
 VAR_9->private_data = VAR_7;
 VAR_9->next = ((void*)0);
 FUNC_2(&VAR_4->fx8010.irq_lock, VAR_10);
 if (VAR_4->fx8010.irq_handlers == ((void*)0)) {
  VAR_4->fx8010.irq_handlers = VAR_9;
  VAR_4->dsp_interrupt = VAR_3;
  FUNC_1(VAR_4, VAR_2);
 } else {
  VAR_9->next = VAR_4->fx8010.irq_handlers;
  VAR_4->fx8010.irq_handlers = VAR_9;
 }
 FUNC_3(&VAR_4->fx8010.irq_lock, VAR_10);
 if (VAR_8)
  *VAR_8 = VAR_9;
 return 0;
}
