
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (struct snd_soc_codec*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0,
  int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_0->codec;
 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
