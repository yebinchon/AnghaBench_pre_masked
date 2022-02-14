
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int device; struct snd_card* card; } ;
struct snd_card {size_t number; } ;
struct seq_midisynth_client {int* ports_per_device; scalar_t__ num_ports; int seq_client; struct seq_midisynth_client** ports; } ;
struct seq_midisynth {int* ports_per_device; scalar_t__ num_ports; int seq_client; struct seq_midisynth** ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_midisynth_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct seq_midisynth_client*) ;
 struct seq_midisynth_client** VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct snd_seq_device *VAR_3)
{
 struct seq_midisynth_client *VAR_4;
 struct seq_midisynth *VAR_5;
 struct snd_card *VAR_6 = VAR_3->card;
 int VAR_7 = VAR_3->device, VAR_8, VAR_9;

 FUNC_1(&VAR_1);
 VAR_4 = VAR_2[VAR_6->number];
 if (VAR_4 == ((void*)0) || VAR_4->ports[VAR_7] == ((void*)0)) {
  FUNC_2(&VAR_1);
  return -VAR_0;
 }
 VAR_9 = VAR_4->ports_per_device[VAR_7];
 VAR_4->ports_per_device[VAR_7] = 0;
 VAR_5 = VAR_4->ports[VAR_7];
 VAR_4->ports[VAR_7] = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  FUNC_4(&VAR_5[VAR_8]);
 FUNC_0(VAR_5);
 VAR_4->num_ports--;
 if (VAR_4->num_ports <= 0) {
  FUNC_3(VAR_4->seq_client);
  VAR_2[VAR_6->number] = ((void*)0);
  FUNC_0(VAR_4);
 }
 FUNC_2(&VAR_1);
 return 0;
}
