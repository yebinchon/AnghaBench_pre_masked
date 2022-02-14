
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ interrupts_are_midi; } ;
struct TYPE_6__ {TYPE_1__ wavefront; } ;
typedef TYPE_2__ snd_wavefront_card_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 snd_wavefront_card_t *VAR_4;

 VAR_4 = (snd_wavefront_card_t *) VAR_3;

 if (VAR_4 == ((void*)0))
  return VAR_1;

 if (VAR_4->wavefront.interrupts_are_midi) {
  FUNC_1 (VAR_4);
 } else {
  FUNC_0 (VAR_4);
 }
 return VAR_0;
}
