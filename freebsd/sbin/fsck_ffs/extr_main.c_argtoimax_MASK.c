
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char const*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static intmax_t
FUNC_2(int VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 char *VAR_5;
 intmax_t VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_5, VAR_4);
 if (VAR_5 == VAR_3 || *VAR_5)
  FUNC_0(VAR_0, "-%c flag requires a %s", VAR_1, VAR_2);
 return (VAR_6);
}
