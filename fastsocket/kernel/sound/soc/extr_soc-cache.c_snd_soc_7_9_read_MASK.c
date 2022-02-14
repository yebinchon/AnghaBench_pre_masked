
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; unsigned int reg_cache_size; } ;



__attribute__((used)) static unsigned int FUNC_0(struct snd_soc_codec *VAR_0,
         unsigned int VAR_1)
{
 u16 *VAR_2 = VAR_0->reg_cache;
 if (VAR_1 >= VAR_0->reg_cache_size)
  return -1;
 return VAR_2[VAR_1];
}
