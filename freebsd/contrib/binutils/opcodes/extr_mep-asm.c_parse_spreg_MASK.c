
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGEN_KEYWORD ;
typedef int CGEN_CPU_DESC ;


 char const* FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const**,int *,long*) ;

const char *
FUNC_2 (CGEN_CPU_DESC VAR_0, const char ** VAR_1,
      CGEN_KEYWORD *VAR_2, long *VAR_3)
{
  const char *VAR_4;

  VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_4)
    return VAR_4;
  if (*VAR_3 != 15)
    return FUNC_0("Only $sp or $15 allowed for this opcode");
  return ((void*)0);
}
