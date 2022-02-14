
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int enclosing_scope; } ;
typedef TYPE_1__ cxx_pretty_printer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 int FUNC_3 (int ) ;

 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int ,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_15 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  switch (FUNC_6 (VAR_1))
    {

    case 129:
      FUNC_11 (VAR_0, FUNC_4 (VAR_1));
      FUNC_14 (VAR_0, FUNC_5 (VAR_1));
      break;
    case 130:
      VAR_1 = FUNC_3 (VAR_1);
    case 132:
      if (FUNC_2 (VAR_1))
 FUNC_11 (VAR_0, FUNC_1 (VAR_1));
      FUNC_14
 (VAR_0, FUNC_0 (VAR_1) ? FUNC_1 (VAR_1) : VAR_1);
      FUNC_12 (VAR_0, FUNC_8 (VAR_1));
      break;

    case 131:
    case 128:
      FUNC_11 (VAR_0, FUNC_7 (VAR_1, 0));
      FUNC_14 (VAR_0, FUNC_7 (VAR_1, 1));
      break;

    default:
      {
 tree VAR_2 = FUNC_10 (VAR_1) ? FUNC_9 (VAR_1) : FUNC_1 (VAR_1);
 if (VAR_2 != VAR_0->enclosing_scope)
   {
     FUNC_11 (VAR_0, VAR_2);
     FUNC_13 (VAR_0, VAR_2, VAR_1);
   }
 FUNC_14 (VAR_0, VAR_1);
      }
      break;
    }
}
