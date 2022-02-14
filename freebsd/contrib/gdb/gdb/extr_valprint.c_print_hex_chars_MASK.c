
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ui_file*,char*,unsigned char) ;
 int FUNC_1 (int ,struct ui_file*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4 (struct ui_file *VAR_2, unsigned char *VAR_3, unsigned VAR_4)
{
  unsigned char *VAR_5;



  FUNC_1 (FUNC_2 (), VAR_2);
  if (VAR_1 == VAR_0)
    {
      for (VAR_5 = VAR_3;
    VAR_5 < VAR_3 + VAR_4;
    VAR_5++)
 {
   FUNC_0 (VAR_2, "%02x", *VAR_5);
 }
    }
  else
    {
      for (VAR_5 = VAR_3 + VAR_4 - 1;
    VAR_5 >= VAR_3;
    VAR_5--)
 {
   FUNC_0 (VAR_2, "%02x", *VAR_5);
 }
    }
  FUNC_1 (FUNC_3 (), VAR_2);
}
