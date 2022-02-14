
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_7 = VAR_6 = FUNC_0(VAR_4);
 if (VAR_5)
  if (VAR_4->eeprom.subvendor != VAR_2 &&
      VAR_4->eeprom.subvendor != VAR_3)
   VAR_6 |= VAR_0;
  else
   VAR_6 |= VAR_1;
 else
  if (VAR_4->eeprom.subvendor != VAR_2 &&
      VAR_4->eeprom.subvendor != VAR_3)
   VAR_6 &= ~VAR_0;
  else
   VAR_6 &= ~VAR_1;
 if (VAR_6 != VAR_7) {
  FUNC_1(VAR_4, VAR_6);
  return 1;
 }
 return 0;
}
