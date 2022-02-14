
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {struct snd_trident_voice* extra; struct snd_pcm_substream* substream; } ;
struct snd_trident {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_trident_voice* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_trident_voice* FUNC_3 (struct snd_trident*,int ,int ,int ) ;
 int FUNC_4 (struct snd_trident*,struct snd_trident_voice*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
           struct snd_pcm_hw_params *VAR_3)
{
 struct snd_trident *VAR_4 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;
 struct snd_trident_voice *VAR_6 = VAR_5->private_data;
 struct snd_trident_voice *VAR_7 = VAR_6->extra;



 if (FUNC_0(VAR_3) / 2 != FUNC_1(VAR_3)) {
  if (VAR_7 == ((void*)0)) {
   VAR_7 = FUNC_3(VAR_4, VAR_1, 0, 0);
   if (VAR_7 == ((void*)0))
    return -VAR_0;
   VAR_6->extra = VAR_7;
   VAR_7->substream = VAR_2;
  }
 } else {
  if (VAR_7 != ((void*)0)) {
   FUNC_4(VAR_4, VAR_7);
   VAR_6->extra = VAR_7 = ((void*)0);
  }
 }

 return 0;
}
