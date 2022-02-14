
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct snd_soc_codec {size_t* reg_cache; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct snd_soc_codec *VAR_1,
      u8 VAR_2, u8 VAR_3)
{
 u8 *VAR_4 = VAR_1->reg_cache;
 if (VAR_2 >= VAR_0)
  return;
 VAR_4[VAR_2] = VAR_3;
}
