
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_event {scalar_t__ type; int flags; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct TYPE_2__ {struct snd_rawmidi_substream* output; } ;
struct seq_midisynth {int * parser; TYPE_1__ output_rfile; } ;
typedef int snd_seq_dump_func_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned char*,int,struct snd_seq_event*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct snd_seq_event*,int ,struct snd_rawmidi_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_seq_event *VAR_6, int VAR_7,
         void *VAR_8, int VAR_9, int VAR_10)
{
 struct seq_midisynth *VAR_11 = VAR_8;
 unsigned char VAR_12[10];
 struct snd_rawmidi_substream *VAR_13;
 int VAR_14;

 if (FUNC_1(!VAR_11))
  return -VAR_0;
 VAR_13 = VAR_11->output_rfile.output;
 if (VAR_13 == ((void*)0))
  return -VAR_2;
 if (VAR_6->type == VAR_5) {
  if ((VAR_6->flags & VAR_3) != VAR_4) {

   FUNC_4("seq_midi: invalid sysex event flags = 0x%x\n", VAR_6->flags);
   return 0;
  }
  FUNC_5(VAR_6, (snd_seq_dump_func_t)FUNC_0, VAR_13);
  FUNC_3(VAR_11->parser);
 } else {
  if (VAR_11->parser == ((void*)0))
   return -VAR_1;
  VAR_14 = FUNC_2(VAR_11->parser, VAR_12, sizeof(VAR_12), VAR_6);
  if (VAR_14 < 0)
   return 0;
  if (FUNC_0(VAR_13, VAR_12, VAR_14) < 0)
   FUNC_3(VAR_11->parser);
 }
 return 0;
}
