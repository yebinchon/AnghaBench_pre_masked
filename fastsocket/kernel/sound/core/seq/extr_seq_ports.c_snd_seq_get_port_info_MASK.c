
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_port_info {int time_queue; int flags; int write_use; int read_use; int synth_voices; int midi_voices; int midi_channels; int type; int capability; int name; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;
struct snd_seq_client_port {int time_queue; scalar_t__ time_real; scalar_t__ timestamping; TYPE_2__ c_dest; TYPE_1__ c_src; int synth_voices; int midi_voices; int midi_channels; int type; int capability; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct snd_seq_client_port * VAR_3,
     struct snd_seq_port_info * VAR_4)
{
 if (FUNC_0(!VAR_3 || !VAR_4))
  return -VAR_0;


 FUNC_1(VAR_4->name, VAR_3->name, sizeof(VAR_4->name));


 VAR_4->capability = VAR_3->capability;


 VAR_4->type = VAR_3->type;


 VAR_4->midi_channels = VAR_3->midi_channels;
 VAR_4->midi_voices = VAR_3->midi_voices;
 VAR_4->synth_voices = VAR_3->synth_voices;


 VAR_4->read_use = VAR_3->c_src.count;
 VAR_4->write_use = VAR_3->c_dest.count;


 VAR_4->flags = 0;
 if (VAR_3->timestamping) {
  VAR_4->flags |= VAR_1;
  if (VAR_3->time_real)
   VAR_4->flags |= VAR_2;
  VAR_4->time_queue = VAR_3->time_queue;
 }

 return 0;
}
