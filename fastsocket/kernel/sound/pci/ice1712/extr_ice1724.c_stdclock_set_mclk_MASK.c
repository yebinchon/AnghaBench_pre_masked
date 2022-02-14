
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* data; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_4,
           unsigned int VAR_5)
{
 unsigned char VAR_6, VAR_7;

 if (VAR_4->eeprom.data[VAR_1] & VAR_2) {
  VAR_6 = VAR_7 = FUNC_1(FUNC_0(VAR_4, VAR_0));
  if (VAR_5 > 96000)
   VAR_6 |= VAR_3;
  else
   VAR_6 &= ~VAR_3;
  if (VAR_6 != VAR_7) {
   FUNC_2(VAR_6, FUNC_0(VAR_4, VAR_0));

   return 1;
  }
 }

 return 0;
}
