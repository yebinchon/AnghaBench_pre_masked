
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_i2c_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct snd_ice1712 *VAR_6 = VAR_3->private_data;
 unsigned char VAR_7 = 0;
 if (VAR_4)
  VAR_7 |= VAR_0;
 if (VAR_5)
  VAR_7 |= VAR_1;
 FUNC_0(VAR_6, VAR_2, VAR_7);
 FUNC_1(5);
}
