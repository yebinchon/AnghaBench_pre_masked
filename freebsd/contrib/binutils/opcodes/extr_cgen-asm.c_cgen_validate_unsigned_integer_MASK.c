
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,unsigned long,unsigned long,unsigned long) ;

const char *
FUNC_2 (unsigned long VAR_0,
    unsigned long VAR_1,
    unsigned long VAR_2)
{
  if (VAR_0 < VAR_1 || VAR_0 > VAR_2)
    {
      static char VAR_3[100];


      FUNC_1 (VAR_3, FUNC_0("operand out of range (%lu not between %lu and %lu)"),
        VAR_0, VAR_1, VAR_2);
      return VAR_3;
    }

  return ((void*)0);
}
