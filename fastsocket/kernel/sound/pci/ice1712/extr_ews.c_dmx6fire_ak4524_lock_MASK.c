
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; scalar_t__* private_value; } ;
struct snd_ak4xxx_private {unsigned char cs_mask; unsigned char cs_addr; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_6, int VAR_7)
{
 struct snd_ak4xxx_private *VAR_8 = (void *)VAR_6->private_value[0];
 struct snd_ice1712 *VAR_9 = VAR_6->private_data[0];
 unsigned char VAR_10;
 FUNC_0(VAR_9);
 VAR_10 = VAR_8->cs_mask = VAR_8->cs_addr = (1 << VAR_7) & VAR_0;
 VAR_10 |= VAR_3 |
  VAR_2 |
  VAR_1;
 FUNC_1(VAR_9, VAR_4,
     VAR_9->gpio.direction | VAR_10);
 FUNC_1(VAR_9, VAR_5, ~VAR_10);
}
