
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_6, int VAR_7)
{
 struct snd_ice1712 *VAR_8 = VAR_6->private_data[0];
 unsigned char VAR_9;
 FUNC_0(VAR_8);
 VAR_9 = VAR_3 |
  VAR_2 |
  VAR_0 |
  VAR_1;
 FUNC_1(VAR_8, VAR_4,
     VAR_8->gpio.direction | VAR_9);
 FUNC_1(VAR_8, VAR_5, ~VAR_9);
}
