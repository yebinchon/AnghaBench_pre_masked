
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int reg_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct snd_soc_codec *VAR_2)
{
 FUNC_1(VAR_2, VAR_0, 0);

 FUNC_0(VAR_2->reg_cache, VAR_1,
        sizeof(VAR_2->reg_cache));
}
