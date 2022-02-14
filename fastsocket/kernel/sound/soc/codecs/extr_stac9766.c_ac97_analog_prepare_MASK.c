
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned short rate; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned short FUNC_0 (struct snd_soc_codec*,unsigned short) ;
 int FUNC_1 (struct snd_soc_codec*,unsigned short,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
          struct snd_soc_dai *VAR_5)
{
 struct snd_soc_codec *VAR_6 = VAR_5->codec;
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 unsigned short VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_0);

 VAR_9 |= 0x1;

 FUNC_1(VAR_6, VAR_0, VAR_9);

 if (VAR_4->stream == VAR_3)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 return FUNC_1(VAR_6, VAR_8, VAR_7->rate);
}
