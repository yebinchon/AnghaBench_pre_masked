
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*,char*,int ,int ,struct ui_file*,int,int,int,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ui_file*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (int ,struct ui_file*,int,int,int,int) ;
 int FUNC_6 (int ,struct ui_file*,int,int,int,int) ;

int
FUNC_7 (struct type *VAR_0, char *VAR_1, int VAR_2,
        CORE_ADDR VAR_3, struct ui_file *VAR_4, int VAR_5,
        int VAR_6, int VAR_7, enum val_prettyprint VAR_8)
{
  if (FUNC_4 (VAR_0))
    {
      LONGEST VAR_9 = FUNC_2 (VAR_1, FUNC_0 (VAR_0));
      if (FUNC_5 (VAR_9, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8) >= 0)
 {
 }
      else
 {
   FUNC_6 (VAR_9, VAR_4, VAR_5,
       VAR_6, VAR_7, VAR_8);
 }

      FUNC_3 (VAR_4);
      return (0);
    }
  else
    {
      return FUNC_1 (VAR_0, VAR_1, 0, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8);
    }
}
