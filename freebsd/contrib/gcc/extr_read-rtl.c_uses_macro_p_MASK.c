
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping {scalar_t__ index; struct macro_group* group; } ;
struct macro_group {scalar_t__ num_builtins; scalar_t__ (* uses_macro_p ) (int ,scalar_t__) ;} ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_8 (rtx VAR_0, struct mapping *VAR_1)
{
  struct macro_group *VAR_2;
  const char *VAR_3;
  int VAR_4, VAR_5;

  if (VAR_0 == 0)
    return 0;

  VAR_2 = VAR_1->group;
  if (VAR_2->uses_macro_p (VAR_0, VAR_1->index + VAR_2->num_builtins))
    return 1;

  VAR_3 = FUNC_2 (FUNC_0 (FUNC_1 (VAR_0)));
  for (VAR_4 = 0; VAR_3[VAR_4] != 0; VAR_4++)
    switch (VAR_3[VAR_4])
      {
      case 'e':
 if (FUNC_8 (FUNC_3 (VAR_0, VAR_4), VAR_1))
   return 1;
 break;

      case 'V':
      case 'E':
 if (FUNC_4 (VAR_0, VAR_4))
   for (VAR_5 = 0; VAR_5 < FUNC_6 (VAR_0, VAR_4); VAR_5++)
     if (FUNC_8 (FUNC_5 (VAR_0, VAR_4, VAR_5), VAR_1))
       return 1;
 break;

      default:
 break;
      }
  return 0;
}
