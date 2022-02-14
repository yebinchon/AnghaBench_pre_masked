
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_seq_port_subscribe {int dummy; } ;
struct snd_rawmidi_runtime {struct seq_midisynth* private_data; int event; } ;
struct snd_rawmidi_params {int avail_min; int buffer_size; } ;
struct TYPE_5__ {TYPE_2__* input; } ;
struct seq_midisynth {TYPE_1__ input_rfile; int parser; int subdevice; int device; int card; } ;
typedef int params ;
struct TYPE_6__ {struct snd_rawmidi_runtime* runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_rawmidi_params*,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,struct snd_rawmidi_params*) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(void *VAR_3, struct snd_seq_port_subscribe *VAR_4)
{
 int VAR_5;
 struct seq_midisynth *VAR_6 = VAR_3;
 struct snd_rawmidi_runtime *VAR_7;
 struct snd_rawmidi_params VAR_8;


 if ((VAR_5 = FUNC_4(VAR_6->card, VAR_6->device,
        VAR_6->subdevice,
        VAR_0,
        &VAR_6->input_rfile)) < 0) {
  FUNC_2("midi input open failed!!!\n");
  return VAR_5;
 }
 VAR_7 = VAR_6->input_rfile.input->runtime;
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.avail_min = 1;
 VAR_8.buffer_size = VAR_1;
 if ((VAR_5 = FUNC_3(VAR_6->input_rfile.input, &VAR_8)) < 0) {
  FUNC_6(&VAR_6->input_rfile);
  return VAR_5;
 }
 FUNC_1(VAR_6->parser);
 VAR_7->event = VAR_2;
 VAR_7->private_data = VAR_6;
 FUNC_5(VAR_6->input_rfile.input, ((void*)0), 0);
 return 0;
}
