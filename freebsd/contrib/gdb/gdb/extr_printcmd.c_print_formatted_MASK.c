
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 scalar_t__ FUNC_5 (struct value*) ;
 int FUNC_6 (struct value*) ;
 int VAR_5 ;
 struct type* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,struct ui_file*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,struct type*,int,int,struct ui_file*) ;
 scalar_t__ FUNC_10 (scalar_t__,int,int,struct ui_file*) ;
 int FUNC_11 (struct value*,struct ui_file*,int,int ) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13 (struct value *VAR_9, int VAR_10, int VAR_11,
   struct ui_file *VAR_12)
{
  struct type *VAR_13 = FUNC_7 (FUNC_6 (VAR_9));
  int VAR_14 = FUNC_1 (VAR_13);

  if (FUNC_5 (VAR_9) == VAR_6)
    {
      VAR_7 = FUNC_2 (VAR_9) + VAR_14;
      VAR_8 = FUNC_3 (VAR_9);
    }

  switch (VAR_10)
    {
    case 's':

      VAR_7 = FUNC_2 (VAR_9)
 + FUNC_10 (FUNC_2 (VAR_9), -1, 1, VAR_12);
      VAR_8 = FUNC_3 (VAR_9);
      break;

    case 'i':







      FUNC_12 ("    ");
      VAR_7 = FUNC_2 (VAR_9)
 + FUNC_8 (FUNC_2 (VAR_9), VAR_12);
      VAR_8 = FUNC_3 (VAR_9);
      break;

    default:
      if (VAR_10 == 0
   || FUNC_0 (VAR_13) == VAR_0
   || FUNC_0 (VAR_13) == VAR_2
   || FUNC_0 (VAR_13) == VAR_3
   || FUNC_0 (VAR_13) == VAR_4
   || FUNC_0 (VAR_13) == VAR_1)





 FUNC_11 (VAR_9, VAR_12, VAR_10, VAR_5);
      else



 FUNC_9 (FUNC_4 (VAR_9), VAR_13,
    VAR_10, VAR_11, VAR_12);
    }
}
