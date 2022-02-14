
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dai; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct snd_soc_codec*,int *,int) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,int *) ;
 int FUNC_5 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_codec *VAR_4)
{
 int VAR_5;




 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
  FUNC_4(VAR_4, &VAR_3[VAR_5]);






 FUNC_2(VAR_4, VAR_2, FUNC_0(VAR_2));




 FUNC_3(VAR_4, "Int Mic");
 FUNC_3(VAR_4, "Ext Spk");
 FUNC_5(VAR_4);




 FUNC_1(VAR_4->dai, VAR_0,
           VAR_1 | 4);

 return 0;
}
