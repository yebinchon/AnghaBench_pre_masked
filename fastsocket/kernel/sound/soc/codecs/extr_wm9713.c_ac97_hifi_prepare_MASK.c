
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_soc_codec*,int) ;
 int FUNC_1 (struct snd_soc_codec*,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_codec *VAR_6 = VAR_5->codec;
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 int VAR_8;
 u16 VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_0, VAR_9 | 0x1);

 if (VAR_4->stream == VAR_3)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 return FUNC_1(VAR_6, VAR_8, VAR_7->rate);
}
