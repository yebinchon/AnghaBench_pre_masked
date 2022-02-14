
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ control; } ;
struct snd_seq_event {TYPE_2__ data; } ;
struct snd_midi_event {int * buf; } ;



__attribute__((used)) static void FUNC_0(struct snd_midi_event *VAR_0, struct snd_seq_event *VAR_1)
{
 VAR_1->data.control.value = VAR_0->buf[1];
}
