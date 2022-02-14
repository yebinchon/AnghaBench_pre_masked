
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_id {int device; scalar_t__ subdevice; int card; int dev_sclass; int dev_class; } ;
struct snd_timer {int hw; int private_free; struct snd_gus_card* private_data; int name; } ;
struct TYPE_3__ {struct snd_timer* timer2; struct snd_timer* timer1; int interrupt_handler_timer2; int interrupt_handler_timer1; } ;
struct snd_gus_card {TYPE_1__ gf1; TYPE_2__* card; int timer_dev; } ;
struct TYPE_4__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char*,struct snd_timer_id*,struct snd_timer**) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct snd_gus_card * VAR_8)
{
 struct snd_timer *VAR_9;
 struct snd_timer_id VAR_10;

 if (VAR_8->gf1.timer1 != ((void*)0) || VAR_8->gf1.timer2 != ((void*)0))
  return;

 VAR_8->gf1.interrupt_handler_timer1 = VAR_2;
 VAR_8->gf1.interrupt_handler_timer2 = VAR_3;

 VAR_10.dev_class = VAR_0;
 VAR_10.dev_sclass = VAR_1;
 VAR_10.card = VAR_8->card->number;
 VAR_10.device = VAR_8->timer_dev;
 VAR_10.subdevice = 0;

 if (FUNC_0(VAR_8->card, "GF1 timer", &VAR_10, &VAR_9) >= 0) {
  FUNC_1(VAR_9->name, "GF1 timer #1");
  VAR_9->private_data = VAR_8;
  VAR_9->private_free = VAR_5;
  VAR_9->hw = VAR_4;
 }
 VAR_8->gf1.timer1 = VAR_9;

 VAR_10.device++;

 if (FUNC_0(VAR_8->card, "GF1 timer", &VAR_10, &VAR_9) >= 0) {
  FUNC_1(VAR_9->name, "GF1 timer #2");
  VAR_9->private_data = VAR_8;
  VAR_9->private_free = VAR_7;
  VAR_9->hw = VAR_6;
 }
 VAR_8->gf1.timer2 = VAR_9;
}
