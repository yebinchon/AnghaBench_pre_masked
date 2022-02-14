
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ expires; } ;
struct TYPE_7__ {int virtual; TYPE_5__ timer; } ;
typedef TYPE_2__ snd_wavefront_midi_t ;
struct TYPE_6__ {TYPE_2__ midi; } ;
struct TYPE_8__ {TYPE_1__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 snd_wavefront_card_t *VAR_2 = (snd_wavefront_card_t *)VAR_1;
 snd_wavefront_midi_t *VAR_3 = &VAR_2->wavefront.midi;
 unsigned long VAR_4;

 FUNC_2 (&VAR_3->virtual, VAR_4);
 VAR_3->timer.expires = 1 + VAR_0;
 FUNC_0(&VAR_3->timer);
 FUNC_3 (&VAR_3->virtual, VAR_4);
 FUNC_1(VAR_2);
}
