
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ channel; } ;
struct TYPE_5__ {scalar_t__ channel; scalar_t__ run; } ;
struct emu_pcm_info {int lock; TYPE_3__ rch_efx; TYPE_2__ rch_adc; TYPE_1__* pch; int card; } ;
struct TYPE_4__ {int run; int timer; scalar_t__ channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(void *VAR_6, uint32_t VAR_7)
{
 struct emu_pcm_info *VAR_8 = (struct emu_pcm_info *)VAR_6;
 uint32_t VAR_9;
 int VAR_10;

 VAR_9 = 0;

 FUNC_2(VAR_8->lock);

 if (VAR_7 & VAR_4) {
  VAR_9 |= VAR_4;
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   if (VAR_8->pch[VAR_10].channel) {
    if (VAR_8->pch[VAR_10].run == 1) {
     FUNC_3(VAR_8->lock);
     FUNC_0(VAR_8->pch[VAR_10].channel);
     FUNC_2(VAR_8->lock);
    } else
     FUNC_1(VAR_8->card, VAR_8->pch[VAR_10].timer, 0);
   }

  if ((VAR_8->rch_adc.channel) && (VAR_8->rch_adc.run)) {
   FUNC_3(VAR_8->lock);
   FUNC_0(VAR_8->rch_adc.channel);
   FUNC_2(VAR_8->lock);
  }




 }


 if (VAR_7 & (VAR_0 | VAR_1)) {
  VAR_9 |= VAR_7 & (VAR_0 | VAR_1);
  if (VAR_8->rch_adc.channel) {
   FUNC_3(VAR_8->lock);
   FUNC_0(VAR_8->rch_adc.channel);
   FUNC_2(VAR_8->lock);
  }
 }

 if (VAR_7 & (VAR_2 | VAR_3)) {
  VAR_9 |= VAR_7 & (VAR_2 | VAR_3);
  if (VAR_8->rch_efx.channel) {
   FUNC_3(VAR_8->lock);
   FUNC_0(VAR_8->rch_efx.channel);
   FUNC_2(VAR_8->lock);
  }
 }
 FUNC_3(VAR_8->lock);

 return (VAR_9);
}
