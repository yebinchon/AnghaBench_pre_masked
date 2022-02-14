
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_codec {unsigned int* reg_cache; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct snd_soc_codec *VAR_3,
 unsigned int VAR_4)
{
 u8 *VAR_5 = VAR_3->reg_cache;

 if ((VAR_4 < VAR_0) || (VAR_4 > VAR_1))
  return -VAR_2;

 return VAR_5[VAR_4 - VAR_0];
}
