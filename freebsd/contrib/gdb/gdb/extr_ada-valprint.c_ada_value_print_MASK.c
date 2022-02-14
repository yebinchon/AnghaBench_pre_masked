
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct value*) ;
 char* FUNC_5 (struct value*) ;
 scalar_t__ FUNC_6 (struct value*) ;
 int FUNC_7 (struct value*) ;
 scalar_t__ FUNC_8 (struct type*) ;
 scalar_t__ FUNC_9 (struct type*) ;
 struct type* FUNC_10 (int ,char*,scalar_t__,int *) ;
 int FUNC_11 (struct ui_file*,char*) ;
 int FUNC_12 (struct type*,char*,struct ui_file*,int) ;
 int FUNC_13 (struct type*,char*,int ,scalar_t__,struct ui_file*,int,int,int ,int) ;
 struct value* FUNC_14 (struct type*,char*,scalar_t__) ;

int
FUNC_15 (struct value *VAR_3, struct ui_file *VAR_4, int VAR_5,
   enum val_prettyprint VAR_6)
{
  char *VAR_7 = FUNC_5 (VAR_3);
  CORE_ADDR VAR_8 = FUNC_4 (VAR_3) + FUNC_6 (VAR_3);
  struct type *VAR_9 =
    FUNC_10 (FUNC_7 (VAR_3), VAR_7, VAR_8, ((void*)0));
  struct value *VAR_10 =
    FUNC_14 (VAR_9, VAR_7, VAR_8);


  if (FUNC_0 (VAR_9) == VAR_1 || FUNC_0 (VAR_9) == VAR_2)
    {


      if (FUNC_0 (VAR_9) == VAR_1 &&
   FUNC_1 (FUNC_2 (VAR_9)) == sizeof (char) &&
   FUNC_0 (FUNC_2 (VAR_9)) == VAR_0 &&
   !FUNC_3 (FUNC_2 (VAR_9)))
 {

 }
      else
 {
   FUNC_11 (VAR_4, "(");
   FUNC_12 (VAR_9, "", VAR_4, -1);
   FUNC_11 (VAR_4, ") ");
 }
    }
  else if (FUNC_8 (VAR_9))
    {
      FUNC_11 (VAR_4, "(");
      FUNC_12 (VAR_9, "", VAR_4, -1);
      FUNC_11 (VAR_4, ") ");
    }
  else if (FUNC_9 (VAR_9))
    {
      FUNC_11 (VAR_4, "(");
      FUNC_12 (VAR_9, "", VAR_4, -1);
      FUNC_11 (VAR_4, ") (...?)");
      return 0;
    }
  return (FUNC_13 (VAR_9, FUNC_5 (VAR_10), 0, VAR_8,
       VAR_4, VAR_5, 1, 0, VAR_6));
}
