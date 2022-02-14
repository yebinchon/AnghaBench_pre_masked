
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1)
{
 const char *VAR_2;

 if (FUNC_0(VAR_0)) {

  for (VAR_2 = VAR_1; *VAR_2 != '\0'; ++VAR_2)
   if (!FUNC_1(*VAR_2))
    return (0);
 } else {

  for (VAR_2 = VAR_1; *VAR_2 != '\0'; ++VAR_2)
   if (!FUNC_1(*VAR_2) && *VAR_2 != '/')
    return (0);
 }
 return (1);
}
