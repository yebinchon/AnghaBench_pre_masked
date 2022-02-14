
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subvendor; } ;
struct snd_ice1712 {int i2c; TYPE_1__ eeprom; struct ews_spec* spec; } ;
struct ews_spec {int * i2cdevs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_2, unsigned char VAR_3)
{
 struct ews_spec *VAR_4 = VAR_2->spec;
 unsigned char VAR_5[2];

 FUNC_0(VAR_2->i2c);
 switch (VAR_2->eeprom.subvendor) {
 case 131:
 case 130:
 case 129:
 case 128:
  if (FUNC_2(VAR_4->i2cdevs[VAR_1], &VAR_3, 1)
      != 1)
   goto _error;
  break;
 case 132:
  if (FUNC_1(VAR_4->i2cdevs[VAR_0], VAR_5, 2)
      != 2)
   goto _error;
  if (VAR_3 != VAR_5[1]) {
   VAR_5[1] = VAR_3;
   if (FUNC_2(VAR_4->i2cdevs[VAR_0],
           VAR_5, 2) != 2)
    goto _error;
  }
  break;
 }
 _error:
 FUNC_3(VAR_2->i2c);
}
