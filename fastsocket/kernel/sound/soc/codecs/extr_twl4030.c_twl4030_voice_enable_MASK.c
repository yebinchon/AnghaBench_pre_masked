
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_codec *VAR_5, int VAR_6,
    int VAR_7)
{
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_5, VAR_4);

 if (VAR_6 == VAR_0)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2 | VAR_3;

 if (VAR_7)
  VAR_8 |= VAR_9;
 else
  VAR_8 &= ~VAR_9;

 FUNC_1(VAR_5, VAR_4, VAR_8);
}
