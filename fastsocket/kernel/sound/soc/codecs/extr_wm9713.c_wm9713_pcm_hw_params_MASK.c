
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
    struct snd_pcm_hw_params *VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_3->codec;
 u16 VAR_5 = FUNC_0(VAR_4, VAR_0) & 0xfff3;

 switch (FUNC_2(VAR_2)) {
 case 131:
  break;
 case 130:
  VAR_5 |= 0x0004;
  break;
 case 129:
  VAR_5 |= 0x0008;
  break;
 case 128:
  VAR_5 |= 0x000c;
  break;
 }


 FUNC_1(VAR_4, VAR_0, VAR_5);
 return 0;
}
