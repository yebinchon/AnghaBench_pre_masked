
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2)
{
 const char *VAR_3;


 if ((VAR_3 = FUNC_1(VAR_2, '.'))) {
  if (FUNC_0(VAR_3, ".conf") == 0 ||
      FUNC_0(VAR_3, ".cookie") == 0 ||
   FUNC_0(VAR_3, ".hints") == 0)
   return (VAR_0);
 }
 return (VAR_1);
}
