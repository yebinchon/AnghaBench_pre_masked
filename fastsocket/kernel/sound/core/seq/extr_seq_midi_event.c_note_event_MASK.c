
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int note; int velocity; } ;
struct TYPE_3__ {TYPE_2__ note; } ;
struct snd_seq_event {TYPE_1__ data; } ;
struct snd_midi_event {int* buf; } ;



__attribute__((used)) static void FUNC_0(struct snd_midi_event *VAR_0, struct snd_seq_event *VAR_1)
{
 VAR_1->data.note.channel = VAR_0->buf[0] & 0x0f;
 VAR_1->data.note.note = VAR_0->buf[1];
 VAR_1->data.note.velocity = VAR_0->buf[2];
}
