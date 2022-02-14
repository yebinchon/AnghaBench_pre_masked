
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

const char *
FUNC_0 (void)
{
  if (VAR_3)
    switch (VAR_4)
      {
      case 128:
 return "%[lw\t%@,%%got_page(%0)(%+)\n\taddiu\t%@,%@,%%got_ofst(%0)";

      case 129:
 return "%[ld\t%@,%%got_page(%0)(%+)\n\tdaddiu\t%@,%@,%%got_ofst(%0)";

      default:
 if (VAR_1)
   return "%[lw\t%@,%%got(%0)(%+)%#\n\taddiu\t%@,%@,%%lo(%0)";
 return "%[lw\t%@,%%got(%0)(%+)\n\taddiu\t%@,%@,%%lo(%0)";
      }
  else
    {
      if (VAR_2 == VAR_0)
 return "%[dla\t%@,%0";
      else
 return "%[la\t%@,%0";
    }
}
