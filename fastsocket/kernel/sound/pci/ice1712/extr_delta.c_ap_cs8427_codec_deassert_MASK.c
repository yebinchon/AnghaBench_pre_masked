
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
 int VAR_3 ;





 unsigned char VAR_4 ;
 int FUNC_0 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_5, unsigned char VAR_6)
{
 switch (VAR_5->eeprom.subvendor) {
 case 131:
 case 130:
  VAR_6 &= ~VAR_0;
  VAR_6 |= VAR_1;
  break;
 case 132:
 case 129:
  VAR_6 |= VAR_2;
  break;
 case 128:
  VAR_6 |= VAR_4;
  break;
 }
 FUNC_0(VAR_5, VAR_3, VAR_6);
}
