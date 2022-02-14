
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_0, int *VAR_1, int *VAR_2)
{
 const char *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_0, '/')) == ((void*)0))
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_3 + 1;
 *VAR_1 = FUNC_0(VAR_3);
 if (*VAR_1 > 7 && FUNC_1(VAR_3 + *VAR_1 - 7, ";type=", 6) == 0) {
  *VAR_2 = VAR_3[*VAR_1 - 1];
  *VAR_1 -= 7;
 } else {
  *VAR_2 = '\0';
 }
 return (VAR_3);
}
