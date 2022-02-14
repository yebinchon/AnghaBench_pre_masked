
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mandoc_os { ____Placeholder_mandoc_os } mandoc_os ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

int
FUNC_1(const char *VAR_0, enum mandoc_os VAR_1)
{
 const char *VAR_2[] = {
  "alpha", "amd64", "arm64", "armv7", "hppa", "i386",
  "landisk", "loongson", "luna88k", "macppc", "mips64",
  "octeon", "sgi", "sparc64", ((void*)0)
 };
 const char *VAR_3[] = {
  "acorn26", "acorn32", "algor", "alpha", "amiga",
  "arc", "atari",
  "bebox", "cats", "cesfic", "cobalt", "dreamcast",
  "emips", "evbarm", "evbmips", "evbppc", "evbsh3", "evbsh5",
  "hp300", "hpcarm", "hpcmips", "hpcsh", "hppa",
  "i386", "ibmnws", "luna68k",
  "mac68k", "macppc", "mipsco", "mmeye", "mvme68k", "mvmeppc",
  "netwinder", "news68k", "newsmips", "next68k",
  "pc532", "playstation2", "pmax", "pmppc", "prep",
  "sandpoint", "sbmips", "sgimips", "shark",
  "sparc", "sparc64", "sun2", "sun3",
  "vax", "walnut", "x68k", "x86", "x86_64", "xen", ((void*)0)
 };
 const char **VAR_4[] = { ((void*)0), VAR_3, VAR_2 };
 const char **VAR_5;

 if ((VAR_5 = VAR_4[VAR_1]) == ((void*)0))
  return 1;
 for (; *VAR_5 != ((void*)0); VAR_5++)
  if (FUNC_0(*VAR_5, VAR_0) == 0)
   return 1;
 return 0;
}
