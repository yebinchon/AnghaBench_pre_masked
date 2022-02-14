
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_irq {scalar_t__ gpr_running; int private_data; int (* handler ) (struct snd_emu10k1*,int ) ;struct snd_emu10k1_fx8010_irq* next; } ;
struct TYPE_2__ {struct snd_emu10k1_fx8010_irq* irq_handlers; } ;
struct snd_emu10k1 {scalar_t__ gpr_base; TYPE_1__ fx8010; } ;


 int FUNC_0 (struct snd_emu10k1*,scalar_t__,int ) ;
 int FUNC_1 (struct snd_emu10k1*,scalar_t__,int ,int) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_emu10k1 *VAR_0)
{
 struct snd_emu10k1_fx8010_irq *VAR_1, *VAR_2;

 VAR_1 = VAR_0->fx8010.irq_handlers;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  if (FUNC_0(VAR_0, VAR_0->gpr_base + VAR_1->gpr_running, 0) & 0xffff0000) {
   if (VAR_1->handler)
    VAR_1->handler(VAR_0, VAR_1->private_data);
   FUNC_1(VAR_0, VAR_0->gpr_base + VAR_1->gpr_running, 0, 1);
  }
  VAR_1 = VAR_2;
 }
}
