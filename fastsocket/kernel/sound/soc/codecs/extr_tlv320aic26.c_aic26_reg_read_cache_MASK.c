
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(struct snd_soc_codec *VAR_1,
      unsigned int VAR_2)
{
 u16 *VAR_3 = VAR_1->reg_cache;

 if (VAR_2 >= VAR_0) {
  FUNC_0(1);
  return 0;
 }

 return VAR_3[VAR_2];
}
