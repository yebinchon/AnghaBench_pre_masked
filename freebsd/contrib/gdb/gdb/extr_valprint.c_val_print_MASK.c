
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*,char*,int,int ,struct ui_file*,int,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct type*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct type* FUNC_2 (struct type*) ;
 int FUNC_3 (struct ui_file*,char*) ;
 int FUNC_4 (struct ui_file*) ;
 scalar_t__ VAR_4 ;

int
FUNC_5 (struct type *VAR_5, char *VAR_6, int VAR_7,
    CORE_ADDR VAR_8, struct ui_file *VAR_9, int VAR_10, int VAR_11,
    int VAR_12, enum val_prettyprint VAR_13)
{
  struct type *VAR_14 = FUNC_2 (VAR_5);
  if (VAR_13 == VAR_2)
    {
      VAR_13 = VAR_4 ? VAR_3 : VAR_1;
    }

  VAR_0;





  if (FUNC_1 (VAR_14))
    {
      FUNC_3 (VAR_9, "<incomplete type>");
      FUNC_4 (VAR_9);
      return (0);
    }

  return (FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13));
}
