
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;


 int VAR_0 ;
 int FUNC_0 (struct type*,int) ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*,struct type*,char*) ;
 int FUNC_3 (struct type*,char*,struct ui_file*,int,int,int,int,struct type*,char*) ;

__attribute__((used)) static int
FUNC_4 (struct type *VAR_1, int VAR_2, char *VAR_3,
      struct ui_file *VAR_4, int VAR_5, int VAR_6,
      enum val_prettyprint VAR_7, int VAR_8,
      struct type *VAR_9, char *VAR_10)
{
  struct type *VAR_11 = FUNC_1 (VAR_1, VAR_2);
  int VAR_12 = FUNC_2 (VAR_11, VAR_9, VAR_10);

  if (VAR_12 < 0)
    return 0;
  else
    return FUNC_3
      (FUNC_1 (VAR_11, VAR_12),
       VAR_3 + FUNC_0 (VAR_1, VAR_2) / VAR_0
       + FUNC_0 (VAR_11, VAR_12) / VAR_0,
       VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10);
}
