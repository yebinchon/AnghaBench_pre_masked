
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_codec *VAR_3)
{
 int VAR_4;


 FUNC_3(VAR_3, "VOUTLHP");
 FUNC_3(VAR_3, "VOUTRHP");


 FUNC_3(VAR_3, "VINL");
 FUNC_3(VAR_3, "VINR");


 VAR_4 = FUNC_1(VAR_3, VAR_2,
    FUNC_0(VAR_2));
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_4(VAR_3, VAR_1,
      FUNC_0(VAR_1));


 FUNC_2(VAR_3, VAR_0, FUNC_0(VAR_0));

 FUNC_5(VAR_3);
 return 0;
}
