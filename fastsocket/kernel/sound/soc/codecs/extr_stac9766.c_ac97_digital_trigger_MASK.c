
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;

 unsigned short FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
    int VAR_2, struct snd_soc_dai *VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_3->codec;
 unsigned short VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 &= !0x04;
  FUNC_1(VAR_4, VAR_0, VAR_5);
  break;
 }
 return 0;
}
