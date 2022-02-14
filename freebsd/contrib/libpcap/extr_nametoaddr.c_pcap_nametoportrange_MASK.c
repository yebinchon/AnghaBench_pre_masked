
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int*,int*) ;
 int FUNC_2 (char const*,char*,int*,int*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 u_int VAR_5, VAR_6;
 char *VAR_7, *VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_1, "%d-%d", &VAR_5, &VAR_6) != 2) {
  if ((VAR_8 = FUNC_4(VAR_1)) == ((void*)0))
   return 0;

  if ((VAR_7 = FUNC_3(VAR_8, '-')) == ((void*)0)) {
   FUNC_0(VAR_8);
   return 0;
  }

  *VAR_7 = '\0';

  if (FUNC_1(VAR_8, VAR_2, VAR_4) == 0) {
   FUNC_0(VAR_8);
   return 0;
  }
  VAR_9 = *VAR_4;

  if (FUNC_1(VAR_7 + 1, VAR_3, VAR_4) == 0) {
   FUNC_0(VAR_8);
   return 0;
  }
  FUNC_0(VAR_8);

  if (*VAR_4 != VAR_9)
   *VAR_4 = VAR_0;
 } else {
  *VAR_2 = VAR_5;
  *VAR_3 = VAR_6;
  *VAR_4 = VAR_0;
 }

 return 1;
}
