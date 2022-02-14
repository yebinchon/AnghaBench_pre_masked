
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static const char *FUNC_3(char *VAR_0)
{
 if (!FUNC_1(VAR_0, "x86_64"))
  return "x86";
 if (VAR_0[0] == 'i' && VAR_0[2] == '8' && VAR_0[3] == '6')
  return "x86";
 if (!FUNC_1(VAR_0, "sun4u") || !FUNC_2(VAR_0, "sparc", 5))
  return "sparc";
 if (!FUNC_2(VAR_0, "arm", 3) || !FUNC_1(VAR_0, "sa110"))
  return "arm";
 if (!FUNC_2(VAR_0, "s390", 4))
  return "s390";
 if (!FUNC_2(VAR_0, "parisc", 6))
  return "parisc";
 if (!FUNC_2(VAR_0, "powerpc", 7) || !FUNC_2(VAR_0, "ppc", 3))
  return "powerpc";
 if (!FUNC_2(VAR_0, "mips", 4))
  return "mips";
 if (!FUNC_2(VAR_0, "sh", 2) && FUNC_0(VAR_0[2]))
  return "sh";

 return VAR_0;
}
