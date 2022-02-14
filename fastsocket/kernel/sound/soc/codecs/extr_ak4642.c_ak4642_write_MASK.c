
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_codec {int (* hw_write ) (int ,unsigned int*,int) ;int control_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3)
{
 u8 VAR_4[2];





 VAR_4[0] = VAR_2 & 0xff;
 VAR_4[1] = VAR_3 & 0xff;

 if (VAR_1->hw_write(VAR_1->control_data, VAR_4, 2) == 2) {
  FUNC_0(VAR_1, VAR_2, VAR_3);
  return 0;
 } else
  return -VAR_0;
}
