
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_5)
{

 if (VAR_5 == ((void*)0))
  return (VAR_3);
 else if (!FUNC_1(VAR_5, "gnu-v2", 6))
  return (VAR_1);
 else if (!FUNC_1(VAR_5, "gnu-v3", 6))
  return (VAR_2);
 else if (!FUNC_1(VAR_5, "arm", 3))
  return (VAR_0);
 else
  FUNC_0(VAR_4, "unknown demangling style '%s'", VAR_5);


 return (0);
}
