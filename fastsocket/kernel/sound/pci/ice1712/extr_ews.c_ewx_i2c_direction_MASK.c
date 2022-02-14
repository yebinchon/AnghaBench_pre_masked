
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;
struct snd_i2c_bus {struct snd_ice1712* private_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct snd_i2c_bus *VAR_4, int VAR_5, int VAR_6)
{
 struct snd_ice1712 *VAR_7 = VAR_4->private_data;
 unsigned char VAR_8 = 0;

 if (VAR_5)
  VAR_8 |= VAR_0;
 if (VAR_6)
  VAR_8 |= VAR_1;
 VAR_7->gpio.direction &= ~(VAR_0|VAR_1);
 VAR_7->gpio.direction |= VAR_8;
 FUNC_0(VAR_7, VAR_2, VAR_7->gpio.direction);
 FUNC_0(VAR_7, VAR_3, ~VAR_8);
}
