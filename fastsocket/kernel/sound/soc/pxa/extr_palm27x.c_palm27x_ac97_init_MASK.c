
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,char*) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_soc_codec*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,char*,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_codec *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_5(VAR_7, VAR_6,
    FUNC_0(VAR_6));
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_7, VAR_1, FUNC_0(VAR_1));
 if (VAR_8)
  return VAR_8;


 if (FUNC_1())
  FUNC_3(VAR_7, "MIC1");
 FUNC_3(VAR_7, "HPOUTL");
 FUNC_3(VAR_7, "HPOUTR");
 FUNC_3(VAR_7, "LOUT2");
 FUNC_3(VAR_7, "ROUT2");


 FUNC_4(VAR_7, "OUT3");
 FUNC_4(VAR_7, "MONOOUT");
 FUNC_4(VAR_7, "LINEINL");
 FUNC_4(VAR_7, "LINEINR");
 FUNC_4(VAR_7, "PCBEEP");
 FUNC_4(VAR_7, "PHONE");
 FUNC_4(VAR_7, "MIC2");

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_9(&VAR_5, "Headphone Jack",
    VAR_0, &VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_8(&VAR_2, FUNC_0(VAR_4),
    VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(&VAR_2, FUNC_0(VAR_3),
    VAR_3);

 return VAR_8;
}
