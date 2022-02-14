
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned short rate; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short FUNC_0 (struct snd_soc_codec*,unsigned short) ;
 int FUNC_1 (struct snd_soc_codec*,unsigned short,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_4->codec;
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 unsigned short VAR_7, VAR_8;

 FUNC_1(VAR_5, VAR_2, 0x2002);

 VAR_8 = FUNC_0(VAR_5, VAR_0);
 VAR_8 |= 0x5;

 FUNC_1(VAR_5, VAR_0, VAR_8);

 VAR_7 = VAR_1;

 return FUNC_1(VAR_5, VAR_7, VAR_6->rate);
}
