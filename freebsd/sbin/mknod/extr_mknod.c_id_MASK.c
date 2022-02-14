
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,char const*,char const*) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static u_long
FUNC_3(const char *VAR_1, const char *VAR_2)
{
 u_long VAR_3;
 char *VAR_4;





 VAR_0 = 0;
 VAR_3 = FUNC_2(VAR_1, &VAR_4, 10);
 if (VAR_0)
  FUNC_0(1, "%s", VAR_1);
 if (*VAR_4 != '\0')
  FUNC_1(1, "%s: illegal %s name", VAR_1, VAR_2);
 return (VAR_3);
}
