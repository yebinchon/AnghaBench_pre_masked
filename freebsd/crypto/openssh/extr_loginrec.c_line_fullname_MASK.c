
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int FUNC_0 (char*,char,scalar_t__) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

char *
FUNC_5(char *VAR_0, const char *VAR_1, u_int VAR_2)
{
 FUNC_0(VAR_0, '\0', VAR_2);
 if ((FUNC_4(VAR_1, "/dev/", 5) == 0) || (VAR_2 < (FUNC_3(VAR_1) + 5)))
  FUNC_2(VAR_0, VAR_1, VAR_2);
 else {
  FUNC_2(VAR_0, "/dev/", VAR_2);
  FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 return (VAR_0);
}
