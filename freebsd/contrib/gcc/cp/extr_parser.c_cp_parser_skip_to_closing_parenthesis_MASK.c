
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_7__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3 (cp_parser *VAR_0,
           bool VAR_1,
           bool VAR_2,
           bool VAR_3)
{
  unsigned VAR_4 = 0;
  unsigned VAR_5 = 0;

  if (VAR_1 && !VAR_2
      && FUNC_2 (VAR_0))
    return 0;

  while (1)
    {
      cp_token * VAR_6 = FUNC_1 (VAR_0->lexer);

      switch (VAR_6->type)
 {
 case 132:
 case 129:

   return 0;

 case 128:

   if (!VAR_5)
     return 0;
   break;

 case 131:
   ++VAR_5;
   break;
 case 135:
   if (!VAR_5--)
     return 0;
   break;

 case 133:
   if (VAR_1 && VAR_2 && !VAR_5 && !VAR_4)
     return -1;
   break;

 case 130:
   if (!VAR_5)
     ++VAR_4;
   break;

 case 134:
   if (!VAR_5 && !VAR_4--)
     {
       if (VAR_3)
  FUNC_0 (VAR_0->lexer);
       return 1;
     }
   break;

 default:
   break;
 }


      FUNC_0 (VAR_0->lexer);
    }
}
