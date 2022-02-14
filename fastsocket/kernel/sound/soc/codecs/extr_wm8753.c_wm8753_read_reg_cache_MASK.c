
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct snd_soc_codec *VAR_1,
 unsigned int VAR_2)
{
 u16 *VAR_3 = VAR_1->reg_cache;
 if (VAR_2 < 1 || VAR_2 >= (FUNC_0(VAR_0) + 1))
  return -1;
 return VAR_3[VAR_2 - 1];
}
