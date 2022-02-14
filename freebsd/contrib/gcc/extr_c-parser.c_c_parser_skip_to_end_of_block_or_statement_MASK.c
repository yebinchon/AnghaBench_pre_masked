
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
typedef TYPE_1__ c_token ;
struct TYPE_10__ {int error; int in_pragma; } ;
typedef TYPE_2__ c_parser ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4 (c_parser *VAR_0)
{
  unsigned VAR_1 = 0;
  bool VAR_2 = VAR_0->error;

  while (1)
    {
      c_token *VAR_3;


      VAR_3 = FUNC_2 (VAR_0);

      switch (VAR_3->type)
 {
 case 132:
   return;

 case 129:
   if (VAR_0->in_pragma)
     return;
   break;

 case 128:


   if (!VAR_1)
     {

       FUNC_1 (VAR_0);
       goto finished;
     }
   break;

 case 133:


   if (VAR_1 == 0 || --VAR_1 == 0)
     {
       FUNC_1 (VAR_0);
       goto finished;
     }
   break;

 case 131:


   ++VAR_1;
   break;

 case 130:






   FUNC_0 (VAR_0);
   FUNC_3 (VAR_0);
   VAR_0->error = VAR_2;
   continue;

 default:
   break;
 }

      FUNC_1 (VAR_0);
    }

 finished:
  VAR_0->error = 0;
}
