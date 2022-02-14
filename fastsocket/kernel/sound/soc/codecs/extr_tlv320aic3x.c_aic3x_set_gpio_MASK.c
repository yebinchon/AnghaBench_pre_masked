
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int) ;
 int FUNC_1 (struct snd_soc_codec*,int,int) ;

void FUNC_2(struct snd_soc_codec *VAR_2, int VAR_3, int VAR_4)
{
 u8 VAR_5 = VAR_3 ? VAR_1 : VAR_0;
 u8 VAR_6 = VAR_3 ? 3: 0;
 u8 VAR_7 = FUNC_0(VAR_2, VAR_5) & ~(1 << VAR_6);
 FUNC_1(VAR_2, VAR_5, VAR_7 | (!!VAR_4 << VAR_6));
}
