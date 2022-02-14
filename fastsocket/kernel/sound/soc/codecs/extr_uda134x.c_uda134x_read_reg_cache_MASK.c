
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_codec {unsigned int* reg_cache; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct snd_soc_codec *VAR_1,
 unsigned int VAR_2)
{
 u8 *VAR_3 = VAR_1->reg_cache;

 if (VAR_2 >= VAR_0)
  return -1;
 return VAR_3[VAR_2];
}
