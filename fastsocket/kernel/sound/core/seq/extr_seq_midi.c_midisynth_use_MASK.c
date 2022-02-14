
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_port_subscribe {int dummy; } ;
struct snd_rawmidi_params {int avail_min; int no_active_sensing; int buffer_size; } ;
struct TYPE_3__ {int output; } ;
struct seq_midisynth {int parser; TYPE_1__ output_rfile; int subdevice; int device; int card; } ;
typedef int params ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_params*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,struct snd_rawmidi_params*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, struct snd_seq_port_subscribe *VAR_3)
{
 int VAR_4;
 struct seq_midisynth *VAR_5 = VAR_2;
 struct snd_rawmidi_params VAR_6;


 if ((VAR_4 = FUNC_3(VAR_5->card, VAR_5->device,
        VAR_5->subdevice,
        VAR_0,
        &VAR_5->output_rfile)) < 0) {
  FUNC_2("midi output open failed!!!\n");
  return VAR_4;
 }
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.avail_min = 1;
 VAR_6.buffer_size = VAR_1;
 VAR_6.no_active_sensing = 1;
 if ((VAR_4 = FUNC_5(VAR_5->output_rfile.output, &VAR_6)) < 0) {
  FUNC_4(&VAR_5->output_rfile);
  return VAR_4;
 }
 FUNC_1(VAR_5->parser);
 return 0;
}
