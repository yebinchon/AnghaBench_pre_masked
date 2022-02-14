
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int* reg_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct snd_soc_codec *VAR_2,
 u16 VAR_3, unsigned int VAR_4)
{
 u16 *VAR_5 = VAR_2->reg_cache;

 if (VAR_3 >= VAR_0)
  return;
 if ((VAR_3 >= 0x10) && (VAR_5[VAR_3] != VAR_4))
  FUNC_0(VAR_3 - 0x10, &VAR_1);
 VAR_5[VAR_3] = VAR_4;
}
