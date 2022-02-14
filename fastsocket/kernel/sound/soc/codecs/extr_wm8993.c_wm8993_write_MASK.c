
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct snd_soc_codec {unsigned int* reg_cache; int (* hw_write ) (int ,unsigned int*,int) ;int control_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,unsigned int*,int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4)
{
 u16 *VAR_5 = VAR_2->reg_cache;
 u8 VAR_6[3];
 int VAR_7;

 FUNC_0(VAR_3 > VAR_1);





 VAR_6[0] = VAR_3;
 VAR_6[1] = VAR_4 >> 8;
 VAR_6[2] = VAR_4 & 0x00ff;

 if (!FUNC_2(VAR_3))
  VAR_5[VAR_3] = VAR_4;

 VAR_7 = VAR_2->hw_write(VAR_2->control_data, VAR_6, 3);

 if (VAR_7 == 3)
  return 0;
 if (VAR_7 < 0)
  return VAR_7;
 return -VAR_0;
}
