
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_priv {scalar_t__ codec_powered; } ;
struct snd_soc_codec {struct twl4030_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_codec*,int) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_codec *VAR_5)
{
 struct twl4030_priv *VAR_6 = VAR_5->private_data;
 u8 VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 if (VAR_6->codec_powered)
  return;


 FUNC_0(VAR_5, 1);


 VAR_7 = FUNC_2(VAR_5, VAR_2);
 FUNC_3(VAR_5, VAR_2,
  VAR_7 | VAR_0);


 do {

  FUNC_5(2000);
  FUNC_1(VAR_1, &VAR_9,
        VAR_2);
 } while ((VAR_10++ < 100) &&
   ((VAR_9 & VAR_0) ==
    VAR_0));


 FUNC_4(VAR_5, VAR_2, VAR_9);


 VAR_8 = FUNC_2(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_3,
  VAR_8 | VAR_4);


 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_5, 1);
}
