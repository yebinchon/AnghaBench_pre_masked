
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char*) ;

int
FUNC_1 (const char *VAR_6)
{
  if (!FUNC_0 (VAR_6, "i386") || !FUNC_0 (VAR_6, "x86"))
    return VAR_5;
  if (!FUNC_0 (VAR_6, "rs6000") || !FUNC_0 (VAR_6, "powerpc"))
    return VAR_2;
  if (!FUNC_0 (VAR_6, "mips"))
    return VAR_1;
  if (!FUNC_0 (VAR_6, "arm"))
    return VAR_0;
  if (!FUNC_0 (VAR_6, "sh"))
    return VAR_3;
  return VAR_4;
}
