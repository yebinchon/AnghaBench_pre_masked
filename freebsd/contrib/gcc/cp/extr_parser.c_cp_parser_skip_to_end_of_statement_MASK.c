
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_6__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;







 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (cp_parser* VAR_0)
{
  unsigned VAR_1 = 0;

  while (1)
    {
      cp_token *VAR_2 = FUNC_1 (VAR_0->lexer);

      switch (VAR_2->type)
 {
 case 131:
 case 129:

   return;

 case 128:


   if (!VAR_1)
     return;
   break;

 case 132:







   if (VAR_1 == 0)
     return;
   if (--VAR_1 == 0)
     {
       FUNC_0 (VAR_0->lexer);
       return;
     }

 case 130:
   ++VAR_1;
   break;

 default:
   break;
 }


      FUNC_0 (VAR_0->lexer);
    }
}
