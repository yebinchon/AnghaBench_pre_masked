
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,long,long,long) ;

const char *
FUNC_2 (long VAR_0, long VAR_1, long VAR_2)
{
  if (VAR_0 < VAR_1 || VAR_0 > VAR_2)
    {
      static char VAR_3[100];


      FUNC_1 (VAR_3, FUNC_0("operand out of range (%ld not between %ld and %ld)"),
        VAR_0, VAR_1, VAR_2);
      return VAR_3;
    }

  return ((void*)0);
}
