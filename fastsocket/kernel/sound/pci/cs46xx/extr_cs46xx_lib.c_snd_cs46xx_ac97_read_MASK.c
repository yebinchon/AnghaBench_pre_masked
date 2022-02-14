
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int dummy; } ;
struct snd_ac97 {int num; struct snd_cs46xx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned short FUNC_1 (struct snd_cs46xx*,unsigned short,int) ;

__attribute__((used)) static unsigned short FUNC_2(struct snd_ac97 * VAR_2,
         unsigned short VAR_3)
{
 struct snd_cs46xx *VAR_4 = VAR_2->private_data;
 unsigned short VAR_5;
 int VAR_6 = VAR_2->num;

 if (FUNC_0(VAR_6 != VAR_0 &&
         VAR_6 != VAR_1))
  return 0xffff;

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_6);

 return VAR_5;
}
