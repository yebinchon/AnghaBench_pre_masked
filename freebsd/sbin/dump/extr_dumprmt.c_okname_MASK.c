
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
  VAR_2 = *VAR_1;
  if (!FUNC_1(VAR_2) || !(FUNC_0(VAR_2) || VAR_2 == '_' || VAR_2 == '-')) {
   FUNC_2("invalid user name %s\n", VAR_0);
   return (0);
  }
 }
 return (1);
}
