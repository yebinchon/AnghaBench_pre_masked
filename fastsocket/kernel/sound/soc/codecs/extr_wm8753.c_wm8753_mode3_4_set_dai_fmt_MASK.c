
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_soc_dai*,unsigned int) ;
 int FUNC_1 (struct snd_soc_dai*,unsigned int) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 scalar_t__ FUNC_3 (struct snd_soc_dai*,unsigned int) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_2,
  unsigned int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_2->codec;
 u16 VAR_5;


 VAR_5 = FUNC_2(VAR_4, VAR_1) & 0xfffb;
 FUNC_4(VAR_4, VAR_1, VAR_5 | 0x4);

 if (FUNC_0(VAR_2, VAR_3) < 0)
  return -VAR_0;
 if (FUNC_3(VAR_2, VAR_3) < 0)
  return -VAR_0;
 return FUNC_1(VAR_2, VAR_3);
}
