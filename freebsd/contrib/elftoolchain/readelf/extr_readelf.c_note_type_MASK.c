
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 char const* FUNC_0 (unsigned int) ;
 char const* FUNC_1 (unsigned int) ;
 char const* FUNC_2 (unsigned int) ;
 char const* FUNC_3 (unsigned int) ;
 char const* FUNC_4 (unsigned int) ;
 char const* FUNC_5 (unsigned int) ;
 char const* FUNC_6 (unsigned int) ;
 char const* FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static const char *
FUNC_9(const char *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 if ((FUNC_8(VAR_1, "CORE") == 0 || FUNC_8(VAR_1, "LINUX") == 0) &&
     VAR_2 == VAR_0)
  return FUNC_3(VAR_3);
 else if (FUNC_8(VAR_1, "FreeBSD") == 0)
  if (VAR_2 == VAR_0)
   return FUNC_1(VAR_3);
  else
   return FUNC_0(VAR_3);
 else if (FUNC_8(VAR_1, "GNU") == 0 && VAR_2 != VAR_0)
  return FUNC_2(VAR_3);
 else if (FUNC_8(VAR_1, "NetBSD") == 0 && VAR_2 != VAR_0)
  return FUNC_4(VAR_3);
 else if (FUNC_8(VAR_1, "OpenBSD") == 0 && VAR_2 != VAR_0)
  return FUNC_5(VAR_3);
 else if (FUNC_8(VAR_1, "Xen") == 0 && VAR_2 != VAR_0)
  return FUNC_7(VAR_3);
 return FUNC_6(VAR_3);
}
