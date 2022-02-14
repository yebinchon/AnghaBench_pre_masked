
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int ,int ) ;
 char* VAR_1 ;
 int FUNC_3 (char*,char const*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, int *VAR_5, int VAR_6, uint32_t VAR_7)
{
 long long VAR_8;
 int VAR_9;
 char *VAR_10;

 while (1) {
  VAR_8 = 0;
  FUNC_3("Supply a decimal value for \"%s\" [%d] ", VAR_4, VAR_6);
  FUNC_1(VAR_3);
  if (FUNC_2(VAR_1, VAR_0, VAR_2) == ((void*)0))
   FUNC_0(1);
  VAR_1[FUNC_4(VAR_1)-1] = 0;

  if (!*VAR_1)
   return 0;

  VAR_10 = VAR_1;
  while ((VAR_9 = *VAR_10) && (VAR_9 == ' ' || VAR_9 == '\t')) VAR_10++;
  if (!VAR_9)
   return 0;
  while ((VAR_9 = *VAR_10++)) {
   if (VAR_9 <= '9' && VAR_9 >= '0') {
    if (VAR_8 <= VAR_7 || VAR_7 == 0)
     VAR_8 = VAR_8 * 10 + VAR_9 - '0';
   } else
    break;
  }
  if (VAR_9 == ' ' || VAR_9 == '\t')
   while ((VAR_9 = *VAR_10) && (VAR_9 == ' ' || VAR_9 == '\t')) VAR_10++;
  if (!VAR_9) {
   if (VAR_7 > 0 && VAR_8 > VAR_7) {
    VAR_8 = VAR_7;
    FUNC_3("%s exceeds maximum value allowed for "
      "this field. The value has been reduced "
      "to %lld\n", VAR_1, VAR_8);
   }
   *VAR_5 = VAR_8;
   return 1;
  } else
   FUNC_3("%s is an invalid decimal number.  Try again.\n",
    VAR_1);
 }
}
