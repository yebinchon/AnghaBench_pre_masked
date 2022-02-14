
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; int (* hw_write ) (int ,unsigned int*,int) ;int control_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,unsigned int) ;
 int FUNC_1 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 u16 *VAR_4 = VAR_1->reg_cache;
 u8 VAR_5[3];

 VAR_5[0] = VAR_2;
 VAR_5[1] = (VAR_3 >> 8) & 0xff;
 VAR_5[2] = VAR_3 & 0xff;

 if (!FUNC_0(VAR_1, VAR_2))
  VAR_4[VAR_2] = VAR_3;

 if (VAR_1->hw_write(VAR_1->control_data, VAR_5, 3) == 3)
  return 0;
 else
  return -VAR_0;
}
