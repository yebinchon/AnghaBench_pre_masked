
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; unsigned int reg_cache_size; unsigned int (* hw_read ) (struct snd_soc_codec*,unsigned int) ;} ;


 scalar_t__ FUNC_0 (struct snd_soc_codec*,unsigned int) ;
 unsigned int FUNC_1 (struct snd_soc_codec*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_soc_codec *VAR_0,
          unsigned int VAR_1)
{
 u16 *VAR_2 = VAR_0->reg_cache;

 if (VAR_1 >= VAR_0->reg_cache_size ||
     FUNC_0(VAR_0, VAR_1))
  return VAR_0->hw_read(VAR_0, VAR_1);
 else
  return VAR_2[VAR_1];
}
