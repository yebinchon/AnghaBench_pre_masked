
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2, u_long *VAR_3)
{
 char *VAR_4;
 u_long VAR_5;

 VAR_1 = 0;
 VAR_5 = FUNC_0(VAR_2, &VAR_4, 0);
 if (VAR_2[0] == '\0' || VAR_4[0] != '\0' || VAR_1 == VAR_0)
  return (-1);

 *VAR_3 = VAR_5;
 return (0);
}
