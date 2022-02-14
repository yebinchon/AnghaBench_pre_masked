
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int FUNC_3 (struct ui_file*,unsigned char*,int) ;
 int FUNC_4 (struct ui_file*,unsigned char,int ,int ) ;
 int FUNC_5 (struct type*,char*) ;

void
FUNC_6 (struct type *VAR_0, char *VAR_1,
    struct ui_file *VAR_2)
{
  if (FUNC_0 (VAR_0) > sizeof (LONGEST))
    {
      LONGEST VAR_3;

      if (FUNC_1 (VAR_0)
   && FUNC_2 (VAR_1, FUNC_0 (VAR_0),
         &VAR_3))
 {
   FUNC_4 (VAR_2, 'u', 0, VAR_3);
 }
      else
 {




   FUNC_3 (VAR_2, (unsigned char *) VAR_1,
      FUNC_0 (VAR_0));
 }
    }
  else
    {
      FUNC_4 (VAR_2, FUNC_1 (VAR_0) ? 'u' : 'd', 0,
       FUNC_5 (VAR_0, VAR_1));
    }
}
