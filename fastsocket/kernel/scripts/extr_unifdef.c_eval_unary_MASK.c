
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ops {int dummy; } ;
typedef scalar_t__ Linetype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct ops const*,...) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int*,char const**) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int VAR_4 ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 int FUNC_8 (char const*,char**,int ) ;
 char** VAR_5 ;

__attribute__((used)) static Linetype
FUNC_9(const struct ops *VAR_6, int *VAR_7, const char **VAR_8)
{
 const char *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(*VAR_8);
 if (*VAR_9 == '!') {
  FUNC_0("eval%d !", VAR_6 - VAR_3);
  VAR_9++;
  if (FUNC_9(VAR_6, VAR_7, &VAR_9) == VAR_1) {
   *VAR_8 = VAR_9;
   return (VAR_1);
  }
  *VAR_7 = !*VAR_7;
 } else if (*VAR_9 == '(') {
  VAR_9++;
  FUNC_0("eval%d (", VAR_6 - VAR_3);
  if (FUNC_2(VAR_3, VAR_7, &VAR_9) == VAR_1)
   return (VAR_1);
  VAR_9 = FUNC_5(VAR_9);
  if (*VAR_9++ != ')')
   return (VAR_1);
 } else if (FUNC_4((unsigned char)*VAR_9)) {
  FUNC_0("eval%d number", VAR_6 - VAR_3);
  *VAR_7 = FUNC_8(VAR_9, &VAR_10, 0);
  VAR_9 = FUNC_6(VAR_9);
 } else if (FUNC_7(VAR_9, "defined", 7) == 0 && FUNC_1(VAR_9[7])) {
  VAR_9 = FUNC_5(VAR_9+7);
  FUNC_0("eval%d defined", VAR_6 - VAR_3);
  if (*VAR_9++ != '(')
   return (VAR_1);
  VAR_9 = FUNC_5(VAR_9);
  VAR_11 = FUNC_3(VAR_9);
  VAR_9 = FUNC_6(VAR_9);
  VAR_9 = FUNC_5(VAR_9);
  if (*VAR_9++ != ')')
   return (VAR_1);
  if (VAR_11 >= 0)
   *VAR_7 = (VAR_5[VAR_11] != ((void*)0));
  else {
   *VAR_8 = VAR_9;
   return (VAR_1);
  }
  VAR_4 = 0;
 } else if (!FUNC_1(*VAR_9)) {
  FUNC_0("eval%d symbol", VAR_6 - VAR_3);
  VAR_11 = FUNC_3(VAR_9);
  if (VAR_11 < 0)
   return (VAR_1);
  if (VAR_5[VAR_11] == ((void*)0))
   *VAR_7 = 0;
  else {
   *VAR_7 = FUNC_8(VAR_5[VAR_11], &VAR_10, 0);
   if (*VAR_10 != '\0' || VAR_10 == VAR_5[VAR_11])
    return (VAR_1);
  }
  VAR_9 = FUNC_6(VAR_9);
  VAR_4 = 0;
 } else {
  FUNC_0("eval%d bad expr", VAR_6 - VAR_3);
  return (VAR_1);
 }

 *VAR_8 = VAR_9;
 FUNC_0("eval%d = %d", VAR_6 - VAR_3, *VAR_7);
 return (*VAR_7 ? VAR_2 : VAR_0);
}
