
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isvirtual; int virtual; void* input_mpu; void* output_mpu; } ;
struct TYPE_6__ {TYPE_1__ midi; } ;
struct TYPE_7__ {TYPE_2__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;


 void* VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2 (snd_wavefront_card_t *VAR_1)

{
 unsigned long VAR_2;

 FUNC_0 (&VAR_1->wavefront.midi.virtual, VAR_2);
 VAR_1->wavefront.midi.isvirtual = 1;
 VAR_1->wavefront.midi.output_mpu = VAR_0;
 VAR_1->wavefront.midi.input_mpu = VAR_0;
 FUNC_1 (&VAR_1->wavefront.midi.virtual, VAR_2);
}
