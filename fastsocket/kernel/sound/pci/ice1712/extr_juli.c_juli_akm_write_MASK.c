
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_1, int VAR_2,
      unsigned char VAR_3, unsigned char VAR_4)
{
 struct snd_ice1712 *VAR_5 = VAR_1->private_data[0];

 if (FUNC_0(VAR_2))
  return;
 FUNC_1(VAR_5, VAR_0, VAR_3, VAR_4);
}
