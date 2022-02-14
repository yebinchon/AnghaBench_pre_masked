
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGEN_KEYWORD ;
typedef int CGEN_CPU_DESC ;


 int VAR_0 ;
 char* FUNC_0 (int ,char const**,int *,long*) ;
 char* FUNC_1 (int ,char const**,int ,unsigned long*) ;

const char *
FUNC_2 (CGEN_CPU_DESC VAR_1, const char **VAR_2,
     CGEN_KEYWORD *VAR_3, long *VAR_4)
{
  const char *VAR_5;
  unsigned long VAR_6;

  VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
  if (!VAR_5)
    return ((void*)0);

  VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_0, & VAR_6);
  if (VAR_5)
    return VAR_5;
  *VAR_4 = VAR_6;
  return ((void*)0);
}
