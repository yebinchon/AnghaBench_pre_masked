
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct milenage_parameters {int ki; int opc; } ;


 int VAR_0 ;
 struct milenage_parameters* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*,int,char*,...) ;
 scalar_t__ FUNC_4 (int,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,int *,int) ;

__attribute__((used)) static int FUNC_8(char *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 struct milenage_parameters *VAR_9;

 VAR_2[0] = '\0';

 VAR_6 = FUNC_5(VAR_1, ' ');
 if (!VAR_6)
  return -1;
 *VAR_6++ = '\0';

 VAR_8 = VAR_2 + VAR_3;
 VAR_7 = VAR_2;
 VAR_5 = FUNC_3(VAR_7, VAR_8 - VAR_7, "GSM-AUTH-RESP %s", VAR_1);
 if (FUNC_4(VAR_8 - VAR_7, VAR_5))
  return -1;
 VAR_7 += VAR_5;

 VAR_9 = FUNC_0(VAR_1);
 if (VAR_9) {
  u8 VAR_10[16], VAR_11[4], VAR_12[8];
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (FUNC_2(VAR_6, VAR_10, 16) != 0)
    return -1;
   FUNC_1(VAR_9->opc, VAR_9->ki, VAR_10, VAR_11, VAR_12);
   *VAR_7++ = VAR_4 == 0 ? ' ' : ':';
   VAR_7 += FUNC_7(VAR_7, VAR_8 - VAR_7, VAR_12, 8);
   *VAR_7++ = ':';
   VAR_7 += FUNC_7(VAR_7, VAR_8 - VAR_7, VAR_11, 4);
   VAR_6 += 16 * 2;
   if (*VAR_6 != ':')
    break;
   VAR_6++;
  }
  *VAR_7 = '\0';
  return 0;
 }

 FUNC_6("No GSM triplets found for %s\n", VAR_1);
 VAR_5 = FUNC_3(VAR_7, VAR_8 - VAR_7, " FAILURE");
 if (FUNC_4(VAR_8 - VAR_7, VAR_5))
  return -1;
 VAR_7 += VAR_5;

 return 0;
}
