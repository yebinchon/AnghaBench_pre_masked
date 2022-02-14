
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
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_codec *VAR_6, int VAR_7,
    int VAR_8)
{
 u8 VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_6, VAR_5);

 if (VAR_7 == VAR_0)
  VAR_10 = VAR_1 | VAR_2;
 else
  VAR_10 = VAR_3 | VAR_4;

 if (VAR_8)
  VAR_9 |= VAR_10;
 else
  VAR_9 &= ~VAR_10;

 FUNC_1(VAR_6, VAR_5, VAR_9);
}
