
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; scalar_t__ implicit_extern_c; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_8__ {int implicit_extern_c; int lexer; } ;
typedef TYPE_2__ cp_parser ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (cp_parser* VAR_9)
{
  while (1)
    {
      cp_token *VAR_10;

      VAR_10 = FUNC_1 (VAR_9->lexer);

      if (VAR_10->type == VAR_0
   || VAR_10->type == VAR_1
   || VAR_10->type == VAR_3)
 break;

      if (VAR_10->type == VAR_4)
 {


   FUNC_0 (VAR_9->lexer);
   if (VAR_7 && !VAR_5)
     FUNC_4 ("extra %<;%>");
   continue;
 }



      if (!VAR_9->implicit_extern_c && VAR_10->implicit_extern_c)
 {
   FUNC_6 (VAR_6);
   VAR_9->implicit_extern_c = 1;
 }
      else if (VAR_9->implicit_extern_c && !VAR_10->implicit_extern_c)
 {
   FUNC_5 ();
   VAR_9->implicit_extern_c = 0;
 }

      if (VAR_10->type == VAR_2)
 {




   FUNC_3 (VAR_9, VAR_8);
   continue;
 }


      FUNC_2 (VAR_9);
    }
}
