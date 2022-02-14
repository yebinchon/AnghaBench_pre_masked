
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_gus_voice {int use; int pcm; int synth; int client; int port; int midi; } ;
struct TYPE_2__ {int pcm_alloc_voices; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;






__attribute__((used)) static void FUNC_0(struct snd_gus_card * VAR_0,
        struct snd_gus_voice * VAR_1,
        int VAR_2, int VAR_3, int VAR_4)
{
 VAR_1->use = 1;
 switch (VAR_2) {
 case 129:
  VAR_0->gf1.pcm_alloc_voices++;
  VAR_1->pcm = 1;
  break;
 case 128:
  VAR_1->synth = 1;
  VAR_1->client = VAR_3;
  VAR_1->port = VAR_4;
  break;
 case 130:
  VAR_1->midi = 1;
  VAR_1->client = VAR_3;
  VAR_1->port = VAR_4;
  break;
 }
}
