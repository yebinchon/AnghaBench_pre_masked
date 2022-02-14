
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_soc_codec*) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_codec *VAR_2)
{
 FUNC_4(VAR_2, VAR_1,
      FUNC_0(VAR_1));

 FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_0));

 FUNC_3(VAR_2, "Headphone Jack");
 FUNC_3(VAR_2, "Line In");
 FUNC_3(VAR_2, "Line Out");
 FUNC_3(VAR_2, "Mic Jack");

 FUNC_1(VAR_2);
 FUNC_5(VAR_2);

 return 0;
}
