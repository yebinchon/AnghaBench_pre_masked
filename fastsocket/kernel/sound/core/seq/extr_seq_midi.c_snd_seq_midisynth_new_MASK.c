
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct seq_midisynth {int device; int subdevice; struct snd_card* card; int parser; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct seq_midisynth *VAR_2,
     struct snd_card *VAR_3,
     int VAR_4,
     int VAR_5)
{
 if (FUNC_0(VAR_1, &VAR_2->parser) < 0)
  return -VAR_0;
 VAR_2->card = VAR_3;
 VAR_2->device = VAR_4;
 VAR_2->subdevice = VAR_5;
 return 0;
}
