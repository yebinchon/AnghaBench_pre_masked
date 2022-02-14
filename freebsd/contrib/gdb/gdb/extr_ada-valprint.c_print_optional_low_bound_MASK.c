
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*) ;

 int VAR_0 ;

 long FUNC_1 (struct type*,int ) ;
 struct type* FUNC_2 (struct type*) ;
 long FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*,int ,struct ui_file*) ;
 struct type* VAR_1 ;
 int FUNC_6 (struct ui_file*,char*) ;

__attribute__((used)) static int
FUNC_7 (struct ui_file *VAR_2, struct type *VAR_3)
{
  struct type *VAR_4;
  long VAR_5;

  VAR_4 = FUNC_2 (VAR_3);
  VAR_5 = 0;

  if (VAR_4 == ((void*)0))
    return 0;
  if (FUNC_0 (VAR_4) == VAR_0)
    {
      VAR_5 = FUNC_3 (VAR_4);
      VAR_4 = FUNC_4 (VAR_4);
    }
  else
    return 0;

  switch (FUNC_0 (VAR_4))
    {
    case 129:
      if (VAR_5 == FUNC_1 (VAR_4, 0))
 return 0;
      break;
    case 128:
      VAR_4 = VAR_1;

    default:
      if (VAR_5 == 1)
 return 0;
      break;
    }

  FUNC_5 (VAR_4, (LONGEST) VAR_5, VAR_2);
  FUNC_6 (VAR_2, " => ");
  return 1;
}
