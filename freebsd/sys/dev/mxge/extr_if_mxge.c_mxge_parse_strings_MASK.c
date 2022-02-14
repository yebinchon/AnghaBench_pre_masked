
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* eeprom_strings; int dev; int serial_number_string; int product_code_string; int * mac_addr; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(mxge_softc_t *VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4, VAR_5;
 char *VAR_6;

 VAR_2 = VAR_1->eeprom_strings;
 VAR_4 = 0;
 VAR_5 = 0;
 while (*VAR_2 != '\0') {
  if (FUNC_2(VAR_2, "MAC=", 4) == 0) {
   VAR_2 += 4;
   for (VAR_3 = 0;;) {
    VAR_1->mac_addr[VAR_3] = FUNC_3(VAR_2, &VAR_6, 16);
    if (VAR_6 - VAR_2 != 2)
     goto abort;
    VAR_2 = VAR_6;
    if (++VAR_3 == 6)
     break;
    if (*VAR_2++ != ':')
     goto abort;
   }
   VAR_4 = 1;
  } else if (FUNC_2(VAR_2, "PC=", 3) == 0) {
   VAR_2 += 3;
   FUNC_1(VAR_1->product_code_string, VAR_2,
       sizeof(VAR_1->product_code_string));
  } else if (!VAR_5 && (FUNC_2(VAR_2, "SN=", 3) == 0)) {
   VAR_2 += 3;
   FUNC_1(VAR_1->serial_number_string, VAR_2,
       sizeof(VAR_1->serial_number_string));
  } else if (FUNC_2(VAR_2, "SN2=", 4) == 0) {

   VAR_2 += 4;
   VAR_5 = 1;
   FUNC_1(VAR_1->serial_number_string, VAR_2,
       sizeof(VAR_1->serial_number_string));
  }
  while (*VAR_2++ != '\0') {}
 }

 if (VAR_4)
  return 0;

 abort:
 FUNC_0(VAR_1->dev, "failed to parse eeprom_strings\n");

 return VAR_0;
}
