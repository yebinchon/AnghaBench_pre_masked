
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int * reg_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_codec *VAR_2)
{
 u8 *VAR_3 = VAR_2->reg_cache;
 int VAR_4;


 FUNC_0(VAR_2, 0);


 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++)
  FUNC_1(VAR_2, VAR_4, VAR_3[VAR_4]);

}
