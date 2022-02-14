
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct milenage_parameters {int sqn; int ki; int opc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct milenage_parameters*) ;
 struct milenage_parameters* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int*,int*,int*) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static int FUNC_7(char *VAR_4, char *VAR_5, size_t VAR_6)
{
 char *VAR_7, *VAR_8;
 u8 VAR_9[VAR_0], VAR_10[VAR_1], VAR_11[6];
 struct milenage_parameters *VAR_12;

 VAR_5[0] = '\0';



 VAR_7 = FUNC_6(VAR_4, ' ');
 if (VAR_7 == ((void*)0))
  return -1;
 *VAR_7++ = '\0';

 VAR_8 = FUNC_6(VAR_7, ' ');
 if (VAR_8 == ((void*)0))
  return -1;
 *VAR_8++ = '\0';

 if (VAR_3) {
  FUNC_5("AKA-AUTS: IMSI=%s AUTS=%s RAND=%s\n",
         VAR_4, VAR_7, VAR_8);
 }
 if (FUNC_2(VAR_7, VAR_9, VAR_0) ||
     FUNC_2(VAR_8, VAR_10, VAR_1)) {
  FUNC_5("Could not parse AUTS/RAND\n");
  return -1;
 }

 VAR_12 = FUNC_1(VAR_4);
 if (VAR_12 == ((void*)0)) {
  FUNC_5("Unknown IMSI: %s\n", VAR_4);
  return -1;
 }

 if (FUNC_4(VAR_12->opc, VAR_12->ki, VAR_10, VAR_9, VAR_11)) {
  FUNC_5("AKA-AUTS: Incorrect MAC-S\n");
 } else {
  FUNC_3(VAR_12->sqn, VAR_11, 6);
  if (VAR_3) {
   FUNC_5("AKA-AUTS: Re-synchronized: "
          "SQN=%02x%02x%02x%02x%02x%02x\n",
          VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3], VAR_11[4], VAR_11[5]);
  }



  VAR_2 = 1;
 }

 return 0;
}
