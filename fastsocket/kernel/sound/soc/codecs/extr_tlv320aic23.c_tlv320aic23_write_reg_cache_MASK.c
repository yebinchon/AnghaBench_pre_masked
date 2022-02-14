
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct snd_soc_codec {int * reg_cache; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct snd_soc_codec *VAR_1,
            u8 VAR_2, u16 VAR_3)
{
 u16 *VAR_4 = VAR_1->reg_cache;
 if (VAR_2 >= FUNC_0(VAR_0))
  return;
 VAR_4[VAR_2] = VAR_3;
}
