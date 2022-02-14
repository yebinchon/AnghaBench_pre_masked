
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_2->codec;
 u16 VAR_5 = FUNC_0(VAR_4, VAR_0) & ~VAR_1;

 if (VAR_3)
  FUNC_1(VAR_4, VAR_0, VAR_5 | VAR_1);
 else
  FUNC_1(VAR_4, VAR_0, VAR_5);

 return 0;
}
