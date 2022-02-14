
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_virmidi_dev {int port; int client; int seq_mode; } ;
struct snd_virmidi {struct snd_virmidi_dev* rdev; int event; int port; int client; int seq_mode; int parser; struct snd_rawmidi_substream* substream; } ;
struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; TYPE_1__* rmidi; } ;
struct snd_rawmidi_runtime {struct snd_virmidi* private_data; } ;
struct TYPE_2__ {struct snd_virmidi_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_virmidi*) ;
 struct snd_virmidi* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct snd_virmidi*,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_3)
{
 struct snd_virmidi_dev *VAR_4 = VAR_3->rmidi->private_data;
 struct snd_rawmidi_runtime *VAR_5 = VAR_3->runtime;
 struct snd_virmidi *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_6->substream = VAR_3;
 if (FUNC_2(VAR_2, &VAR_6->parser) < 0) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }
 VAR_6->seq_mode = VAR_4->seq_mode;
 VAR_6->client = VAR_4->client;
 VAR_6->port = VAR_4->port;
 FUNC_3(VAR_6, &VAR_6->event);
 VAR_6->rdev = VAR_4;
 VAR_5->private_data = VAR_6;
 return 0;
}
