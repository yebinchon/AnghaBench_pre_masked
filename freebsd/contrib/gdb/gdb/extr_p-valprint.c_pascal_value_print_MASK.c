
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*,struct ui_file*,int,int,int ,int) ;
 int FUNC_5 (struct ui_file*,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (struct type*,char*,struct ui_file*,int) ;

int
FUNC_8 (struct value *VAR_2, struct ui_file *VAR_3, int VAR_4,
      enum val_prettyprint VAR_5)
{
  struct type *VAR_6 = FUNC_3 (VAR_2);







  if (FUNC_0 (VAR_6) == VAR_0 ||
      FUNC_0 (VAR_6) == VAR_1)
    {


      if (FUNC_0 (VAR_6) == VAR_0 &&
   FUNC_1 (VAR_6) == ((void*)0) &&
   FUNC_1 (FUNC_2 (VAR_6)) != ((void*)0)
   && FUNC_6 (FUNC_1 (FUNC_2 (VAR_6)), "char") == 0)
 {

 }
      else
 {
   FUNC_5 (VAR_3, "(");
   FUNC_7 (VAR_6, "", VAR_3, -1);
   FUNC_5 (VAR_3, ") ");
 }
    }
  return FUNC_4 (VAR_2, VAR_3, VAR_4, 1, 0, VAR_5);
}
