
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ui_file*,char*,int) ;
 int FUNC_1 (int ,struct ui_file*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4 (struct ui_file *VAR_3, unsigned char *VAR_4,
      unsigned VAR_5)
{



  unsigned char *VAR_6;
  unsigned int VAR_7;
  int VAR_8;




  const int VAR_9 = 0x080;



  FUNC_1 (FUNC_2 (), VAR_3);
  if (VAR_2 == VAR_0)
    {
      for (VAR_6 = VAR_4;
    VAR_6 < VAR_4 + VAR_5;
    VAR_6++)
 {



   for (VAR_7 = 0; VAR_7 < (8 * sizeof (*VAR_6)); VAR_7++)
     {
       if (*VAR_6 & (VAR_9 >> VAR_7))
  VAR_8 = 1;
       else
  VAR_8 = 0;

       FUNC_0 (VAR_3, "%1d", VAR_8);
     }
 }
    }
  else
    {
      for (VAR_6 = VAR_4 + VAR_5 - 1;
    VAR_6 >= VAR_4;
    VAR_6--)
 {
   for (VAR_7 = 0; VAR_7 < (8 * sizeof (*VAR_6)); VAR_7++)
     {
       if (*VAR_6 & (VAR_9 >> VAR_7))
  VAR_8 = 1;
       else
  VAR_8 = 0;

       FUNC_0 (VAR_3, "%1d", VAR_8);
     }
 }
    }
  FUNC_1 (FUNC_3 (), VAR_3);
}
