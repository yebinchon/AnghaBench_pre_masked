
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (struct type*) ;





 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct type*,int const,struct ui_file*) ;
 struct type* VAR_0 ;
 int FUNC_8 (struct ui_file*,char*,...) ;

__attribute__((used)) static void
FUNC_9 (struct type *VAR_1, struct ui_file *VAR_2)
{
  struct type *VAR_3;
  VAR_3 = FUNC_5 (VAR_1);
  if (VAR_3 == ((void*)0))
    VAR_3 = VAR_1;

  switch (FUNC_0 (VAR_3))
    {
    case 128:
    case 129:
    case 132:
    case 131:
    case 130:
      break;
    default:
      VAR_3 = VAR_0;
      break;
    }

  if (FUNC_4 (VAR_1) < 2)
    {






      FUNC_8 (VAR_2, "%.*s",
   FUNC_6 (FUNC_3 (VAR_1)),
   FUNC_3 (VAR_1));
    }
  else
    {


      const LONGEST VAR_4 = (LONGEST) FUNC_2 (VAR_1);
      const LONGEST VAR_5 =
 (LONGEST) FUNC_1 (VAR_1, FUNC_4 (VAR_1) - 1);

      FUNC_7 (VAR_3, VAR_4, VAR_2);
      FUNC_8 (VAR_2, " .. ");
      FUNC_7 (VAR_3, VAR_5, VAR_2);
    }
}
