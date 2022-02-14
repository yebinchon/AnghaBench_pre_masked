
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int capture; struct snd_pcm_substream* substream; } ;
struct snd_trident {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_trident_voice* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_trident_voice* FUNC_3 (struct snd_trident*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5)
{
 struct snd_trident *VAR_6 = FUNC_2(VAR_5);
 struct snd_trident_voice *VAR_7;
 struct snd_pcm_runtime *VAR_8 = VAR_5->runtime;

 VAR_7 = FUNC_3(VAR_6, VAR_2, 0, 0);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_7->capture = 1;
 VAR_7->substream = VAR_5;
 VAR_8->private_data = VAR_7;
 VAR_8->private_free = VAR_4;
 VAR_8->hw = VAR_3;
 FUNC_1(VAR_5);
 FUNC_0(VAR_8, VAR_1, 0, 64*1024);
 return 0;
}
