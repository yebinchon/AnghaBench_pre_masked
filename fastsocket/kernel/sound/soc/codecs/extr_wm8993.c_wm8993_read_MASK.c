
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct snd_soc_codec*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_soc_codec *VAR_1,
    unsigned int VAR_2)
{
 u16 *VAR_3 = VAR_1->reg_cache;

 FUNC_0(VAR_2 > VAR_0);

 if (FUNC_2(VAR_2))
  return FUNC_1(VAR_1, VAR_2);
 else
  return VAR_3[VAR_2];
}
