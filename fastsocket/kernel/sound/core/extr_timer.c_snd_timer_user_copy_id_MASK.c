
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_id {int card; int subdevice; int device; int dev_sclass; int dev_class; } ;
struct snd_timer {int tmr_subdevice; int tmr_device; TYPE_1__* card; int tmr_class; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_timer_id *VAR_1, struct snd_timer *VAR_2)
{
 VAR_1->dev_class = VAR_2->tmr_class;
 VAR_1->dev_sclass = VAR_0;
 VAR_1->card = VAR_2->card ? VAR_2->card->number : -1;
 VAR_1->device = VAR_2->tmr_device;
 VAR_1->subdevice = VAR_2->tmr_subdevice;
}
