
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_gus_voice {int number; int client; scalar_t__ midi; int use; } ;
struct TYPE_2__ {scalar_t__ pcm_alloc_voices; scalar_t__ pcm_channels; struct snd_gus_voice* voices; } ;
struct snd_gus_card {int voice_alloc; TYPE_1__ gf1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,struct snd_gus_voice*,int,int,int) ;
 int FUNC_1 (struct snd_gus_card*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct snd_gus_voice *FUNC_4(struct snd_gus_card * VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct snd_gus_voice *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(&VAR_1->voice_alloc, VAR_6);
 if (VAR_2 == VAR_0) {
  if (VAR_1->gf1.pcm_alloc_voices >= VAR_1->gf1.pcm_channels) {
   FUNC_3(&VAR_1->voice_alloc, VAR_6);
   return ((void*)0);
  }
 }
 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  VAR_5 = &VAR_1->gf1.voices[VAR_7];
  if (!VAR_5->use) {
   FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
   FUNC_3(&VAR_1->voice_alloc, VAR_6);
   return VAR_5;
  }
 }
 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  VAR_5 = &VAR_1->gf1.voices[VAR_7];
  if (VAR_5->midi && !VAR_5->client) {
   FUNC_1(VAR_1, VAR_5->number, VAR_5->number);
   FUNC_0(VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
   FUNC_3(&VAR_1->voice_alloc, VAR_6);
   return VAR_5;
  }
 }
 FUNC_3(&VAR_1->voice_alloc, VAR_6);
 return ((void*)0);
}
