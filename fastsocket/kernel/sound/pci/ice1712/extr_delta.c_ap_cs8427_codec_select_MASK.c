
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;





 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_11)
{
 unsigned char VAR_12;
 VAR_12 = FUNC_0(VAR_11, VAR_6);
 switch (VAR_11->eeprom.subvendor) {
 case 131:
 case 130:
  VAR_12 &= ~VAR_1;
  VAR_12 |= VAR_0 | VAR_2;
  break;
 case 132:
 case 129:
  VAR_12 |= VAR_3 | VAR_4;
  VAR_12 &= ~VAR_5;
  break;
 case 128:
  VAR_12 |= VAR_7 | VAR_8 | VAR_9;
  VAR_12 &= ~VAR_10;
  break;
 }
 FUNC_1(VAR_11, VAR_6, VAR_12);
 FUNC_2(5);
 return VAR_12;
}
