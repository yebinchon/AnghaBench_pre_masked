
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char,struct ui_file*,char) ;
 scalar_t__ VAR_1 ;

void
FUNC_1 (struct ui_file *VAR_2, unsigned char *VAR_3, unsigned VAR_4)
{
  unsigned char *VAR_5;

  if (VAR_1 == VAR_0)
    {
      VAR_5 = VAR_3;
      while (VAR_5 < VAR_3 + VAR_4 - 1 && *VAR_5 == 0)
 ++VAR_5;

      while (VAR_5 < VAR_3 + VAR_4)
 {
   FUNC_0 (*VAR_5, VAR_2, '\'');
   ++VAR_5;
 }
    }
  else
    {
      VAR_5 = VAR_3 + VAR_4 - 1;
      while (VAR_5 > VAR_3 && *VAR_5 == 0)
 --VAR_5;

      while (VAR_5 >= VAR_3)
 {
   FUNC_0 (*VAR_5, VAR_2, '\'');
   --VAR_5;
 }
    }
}
