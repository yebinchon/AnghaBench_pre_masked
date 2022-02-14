
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int (* hw_write ) (int ,int*,int) ;int control_data; int active; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,int*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct snd_soc_codec*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_codec *VAR_3, unsigned int VAR_4,
 unsigned int VAR_5)
{
 u8 VAR_6[3];






 VAR_6[0] = VAR_4;
 VAR_6[1] = (VAR_5 & 0xff00) >> 8;
 VAR_6[2] = VAR_5 & 0x00ff;

 FUNC_5(VAR_3, VAR_4, VAR_5);




 if (!VAR_3->active && (VAR_4 >= VAR_1))
  return 0;
 FUNC_3("uda1380: hw write %x val %x\n", VAR_4, VAR_5);
 if (VAR_3->hw_write(VAR_3->control_data, VAR_6, 3) == 3) {
  unsigned int VAR_7;
  FUNC_2(VAR_3->control_data, VAR_6, 1);
  FUNC_1(VAR_3->control_data, VAR_6, 2);
  VAR_7 = (VAR_6[0]<<8) | VAR_6[1];
  if (VAR_7 != VAR_5) {
   FUNC_3("uda1380: READ BACK VAL %x\n",
     (VAR_6[0]<<8) | VAR_6[1]);
   return -VAR_0;
  }
  if (VAR_4 >= 0x10)
   FUNC_0(VAR_4 - 0x10, &VAR_2);
  return 0;
 } else
  return -VAR_0;
}
