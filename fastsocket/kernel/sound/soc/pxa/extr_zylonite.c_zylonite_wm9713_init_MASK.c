
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int * dai; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_codec*,char*) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_soc_codec*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_codec *VAR_4)
{
 if (VAR_1)
  FUNC_2(&VAR_4->dai[0], 0, FUNC_1(VAR_2), 0);

 FUNC_5(VAR_4, VAR_3,
      FUNC_0(VAR_3));

 FUNC_3(VAR_4, VAR_0, FUNC_0(VAR_0));


 FUNC_4(VAR_4, "Headphone");
 FUNC_4(VAR_4, "Headset Earpiece");

 FUNC_6(VAR_4);
 return 0;
}
