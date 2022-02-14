
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int client; } ;
struct TYPE_3__ {int port; } ;
struct snd_seq_event {scalar_t__ type; TYPE_2__ dest; TYPE_1__ source; } ;
struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {scalar_t__ avail; struct seq_midisynth* private_data; } ;
struct seq_midisynth {int seq_client; int seq_port; int * parser; } ;
typedef int ev ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 long FUNC_1 (int *,char*,long,struct snd_seq_event*) ;
 long FUNC_2 (struct snd_rawmidi_substream*,char*,int) ;
 int FUNC_3 (int ,struct snd_seq_event*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_2)
{
 struct snd_rawmidi_runtime *VAR_3;
 struct seq_midisynth *VAR_4;
 struct snd_seq_event VAR_5;
 char VAR_6[16], *VAR_7;
 long VAR_8, VAR_9;

 if (VAR_2 == ((void*)0))
  return;
 VAR_3 = VAR_2->runtime;
 VAR_4 = VAR_3->private_data;
 if (VAR_4 == ((void*)0))
  return;
 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 while (VAR_3->avail > 0) {
  VAR_8 = FUNC_2(VAR_2, VAR_6, sizeof(VAR_6));
  if (VAR_8 <= 0)
   continue;
  if (VAR_4->parser == ((void*)0))
   continue;
  VAR_7 = VAR_6;
  while (VAR_8 > 0) {
   VAR_9 = FUNC_1(VAR_4->parser, VAR_7, VAR_8, &VAR_5);
   if (VAR_9 < 0)
    break;
   VAR_7 += VAR_9;
   VAR_8 -= VAR_9;
   if (VAR_5.type != VAR_1) {
    VAR_5.source.port = VAR_4->seq_port;
    VAR_5.dest.client = VAR_0;
    FUNC_3(VAR_4->seq_client, &VAR_5, 1, 0);

    FUNC_0(&VAR_5, 0, sizeof(VAR_5));
   }
  }
 }
}
