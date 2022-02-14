
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*,struct ui_file*,int,int) ;
 int FUNC_3 (struct type*,struct ui_file*,int,int ) ;
 int FUNC_4 (struct type*,struct ui_file*,int,int ,int) ;
 int FUNC_5 (char*,struct ui_file*) ;
 int FUNC_6 (char*) ;

void
FUNC_7 (struct type *VAR_6, char *VAR_7, struct ui_file *VAR_8,
       int VAR_9, int VAR_10)
{
  enum type_code VAR_11;
  int VAR_12;

  FUNC_2 (VAR_6, VAR_8, VAR_9, VAR_10);
  VAR_11 = FUNC_0 (VAR_6);
  if ((VAR_7 != ((void*)0) && *VAR_7 != '\0')
      ||


      ((VAR_9 > 0 || FUNC_1 (VAR_6) == 0)
       &&
       (VAR_11 == VAR_4 || VAR_11 == VAR_1
 || VAR_11 == VAR_3
 || VAR_11 == VAR_0
 || VAR_11 == VAR_2
 || VAR_11 == VAR_5)))
    FUNC_5 (" ", VAR_8);
  FUNC_3 (VAR_6, VAR_8, VAR_9, 0);

  FUNC_5 (VAR_7, VAR_8);




  VAR_12 = VAR_7[FUNC_6 (VAR_7) - 1] == ')';
  FUNC_4 (VAR_6, VAR_8, VAR_9, 0, VAR_12);
}
