
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char*,char const* const) ;

int
FUNC_2 (char *VAR_2)
{
  unsigned int VAR_3;
  unsigned int VAR_4;
  static const char *const VAR_5[] =
    {
      "eax", "ecx", "edx", "ebx",
      "esp", "ebp", "esi", "edi",
      "eip", "eflags", ((void*)0),
      "st0", "st1", "st2", "st3",
      "st4", "st5", "st6", "st7",
      ((void*)0), ((void*)0),
      "xmm0", "xmm1", "xmm2", "xmm3",
      "xmm4", "xmm5", "xmm6", "xmm7",
      "mm0", "mm1", "mm2", "mm3",
      "mm4", "mm5", "mm6", "mm7",
      "fcw", "fsw", "mxcsr",
      "es", "cs", "ss", "ds", "fs", "gs", ((void*)0), ((void*)0),
      "tr", "ldtr"
    };
  static const char *const VAR_6[] =
    {
      "rax", "rdx", "rcx", "rbx",
      "rsi", "rdi", "rbp", "rsp",
      "r8", "r9", "r10", "r11",
      "r12", "r13", "r14", "r15",
      "rip",
      "xmm0", "xmm1", "xmm2", "xmm3",
      "xmm4", "xmm5", "xmm6", "xmm7",
      "xmm8", "xmm9", "xmm10", "xmm11",
      "xmm12", "xmm13", "xmm14", "xmm15",
      "st0", "st1", "st2", "st3",
      "st4", "st5", "st6", "st7",
      "mm0", "mm1", "mm2", "mm3",
      "mm4", "mm5", "mm6", "mm7",
      "rflags",
      "es", "cs", "ss", "ds", "fs", "gs", ((void*)0), ((void*)0),
      "fs.base", "gs.base", ((void*)0), ((void*)0),
      "tr", "ldtr",
      "mxcsr", "fcw", "fsw"
    };
  const char *const *VAR_7;

  if (VAR_1 == VAR_0)
    {
      VAR_7 = VAR_6;
      VAR_4 = FUNC_0 (VAR_6);
    }
  else
    {
      VAR_7 = VAR_5;
      VAR_4 = FUNC_0 (VAR_5);
    }

  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if (VAR_7[VAR_3] != ((void*)0)
 && FUNC_1 (VAR_2, VAR_7[VAR_3]) == 0)
      return VAR_3;

  return -1;
}
