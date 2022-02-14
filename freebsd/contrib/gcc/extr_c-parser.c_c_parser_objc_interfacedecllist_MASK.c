
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ keyword; } ;
typedef TYPE_1__ c_token ;
typedef int c_parser ;



 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,int,int,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 int VAR_4 ;

__attribute__((used)) static void

FUNC_9 (c_parser *VAR_5)
{
  while (1)
    {

      c_token *VAR_6;
      VAR_6 = FUNC_5 (VAR_5);
      if (VAR_6->type == VAR_0
   && VAR_6->keyword == VAR_2)
 {
   FUNC_4 (VAR_5);
   continue;
 }


      if (FUNC_7 (VAR_6))
 {
   FUNC_3 (VAR_5);
   continue;
 }



      switch (FUNC_5 (VAR_5)->type)
 {
 case 128:
   if (VAR_3)
     FUNC_8 ("ISO C does not allow extra %<;%> outside of a function");
   FUNC_0 (VAR_5);
   break;



 case 129:
   FUNC_6 (VAR_5, VAR_4);
   break;
 case 130:
   return;
 default:
   if (FUNC_2 (VAR_5, VAR_1))
     return;

   FUNC_1 (VAR_5, 0, 1, 0, 1, ((void*)0));
   break;
 }
    }
}
