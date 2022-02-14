
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EFT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const**,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (char const**) ;
 scalar_t__ FUNC_3 (char const) ;
 char* FUNC_4 (char const*,char const) ;

__attribute__((used)) static EFT
FUNC_5(const char **VAR_4, EFT VAR_5)
{
 int VAR_6;
 const char *VAR_7;

 if (VAR_5 == VAR_3) {
  (*VAR_4)++;
  return FUNC_2(VAR_4);
 } else if (VAR_5 == VAR_1) {
  (*VAR_4)++;
  return FUNC_1(VAR_4);
 }

 VAR_7 = *VAR_4;
 VAR_6 = 0;
 while (!VAR_6) {
  VAR_7 = FUNC_4(VAR_7, '%');
  if (VAR_7 == ((void*)0))
   FUNC_0(VAR_4,VAR_7,VAR_0);
  VAR_7++;
  if (!*VAR_7)
   FUNC_0(VAR_4,VAR_7,VAR_2);
  if (*VAR_7 != '%')
   VAR_6 = 1;
  else
   VAR_7++;
 }


 while (*VAR_7 && (FUNC_4("#'0- +", *VAR_7)))
  VAR_7++;

 if (*VAR_7 == '*') {
  FUNC_0(VAR_4,VAR_7,VAR_3);
 }

 while (FUNC_3(*VAR_7)) VAR_7++;
 if (!*VAR_7) {
  FUNC_0(VAR_4,VAR_7,VAR_2);
 }

 FUNC_0(VAR_4,VAR_7,FUNC_2(VAR_4));

}
