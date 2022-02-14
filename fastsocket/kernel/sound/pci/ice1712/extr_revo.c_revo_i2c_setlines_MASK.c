
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_i2c_bus *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_ice1712 *VAR_5 = VAR_2->private_data;
 unsigned int VAR_6 = 0;

 if (VAR_3)
  VAR_6 |= VAR_0;
 if (VAR_4)
  VAR_6 |= VAR_1;
 FUNC_0(VAR_5,
        VAR_1 |
        VAR_0, VAR_6);
 FUNC_1(5);
}
