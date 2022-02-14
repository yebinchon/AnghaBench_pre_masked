
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,struct ui_file*) ;
 int FUNC_3 (struct type*,struct ui_file*,int,int) ;
 int FUNC_4 (struct type*,struct ui_file*,int,int ) ;
 int FUNC_5 (struct type*,struct ui_file*,int,int ,int) ;
 int * FUNC_6 (char*,char) ;

void
FUNC_7 (struct type *VAR_2, char *VAR_3, struct ui_file *VAR_4,
     int VAR_5, int VAR_6)
{
  enum type_code VAR_7;
  int VAR_8;

  VAR_7 = FUNC_1 (VAR_2);

  if (VAR_5 > 0)
    FUNC_0 (VAR_2);

  if ((VAR_7 == VAR_0 ||
       VAR_7 == VAR_1))
    {
      FUNC_4 (VAR_2, VAR_4, VAR_5, 0);
    }

  FUNC_2 (VAR_3, VAR_4);

  if ((VAR_3 != ((void*)0) && *VAR_3 != '\0') &&
      !(VAR_7 == VAR_0 ||
 VAR_7 == VAR_1))
    {
      FUNC_2 (" : ", VAR_4);
    }

  if (!(VAR_7 == VAR_0 ||
 VAR_7 == VAR_1))
    {
      FUNC_4 (VAR_2, VAR_4, VAR_5, 0);
    }

  FUNC_3 (VAR_2, VAR_4, VAR_5, VAR_6);



  VAR_8 = VAR_3 ? FUNC_6 (VAR_3, '(') != ((void*)0) : 0;
  FUNC_5 (VAR_2, VAR_4, VAR_5, 0, VAR_8);

}
