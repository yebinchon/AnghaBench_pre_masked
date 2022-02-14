
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int dummy; } ;
struct snd_ac97 {int num; struct snd_cs46xx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_cs46xx*,unsigned short,unsigned short,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_2,
       unsigned short VAR_3,
       unsigned short VAR_4)
{
 struct snd_cs46xx *VAR_5 = VAR_2->private_data;
 int VAR_6 = VAR_2->num;

 if (FUNC_0(VAR_6 != VAR_0 &&
         VAR_6 != VAR_1))
  return;

 FUNC_1(VAR_5, VAR_3, VAR_4, VAR_6);
}
