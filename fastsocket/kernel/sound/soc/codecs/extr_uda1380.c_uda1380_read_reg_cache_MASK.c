
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct snd_soc_codec *VAR_2,
 unsigned int VAR_3)
{
 u16 *VAR_4 = VAR_2->reg_cache;
 if (VAR_3 == VAR_1)
  return 0;
 if (VAR_3 >= VAR_0)
  return -1;
 return VAR_4[VAR_3];
}
