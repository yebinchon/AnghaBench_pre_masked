
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_19__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_20__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_21__ {scalar_t__ any_specifiers_p; int type; } ;
typedef TYPE_3__ cp_decl_specifier_seq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*,int *,int,int,int,int*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 () ;

__attribute__((used)) static void
FUNC_21 (cp_parser* VAR_6,
         bool VAR_7)
{
  cp_decl_specifier_seq VAR_8;
  int VAR_9;
  bool VAR_10;




  FUNC_18 (VAR_4);
  FUNC_5 (VAR_6,
    VAR_3,
    &VAR_8,
    &VAR_9);

  FUNC_20 ();




  if (!VAR_7
      && !VAR_8.any_specifiers_p)
    {
      FUNC_7 (VAR_6, "expected declaration");
      goto done;
    }







  if (!VAR_8.type
      && FUNC_10 (VAR_6))
    {


      FUNC_4 (VAR_6);

      goto done;
    }




  if (VAR_8.any_specifiers_p
      && FUNC_2 (VAR_6->lexer, VAR_1))
    FUNC_4 (VAR_6);



  VAR_10 = 0;
  while (FUNC_2 (VAR_6->lexer,
         VAR_2))
    {
      cp_token *VAR_11;
      bool VAR_12;
      tree VAR_13;

      if (VAR_10)
 {

   VAR_11 = FUNC_3 (VAR_6->lexer);
   FUNC_15 (VAR_11->type == VAR_0);
   FUNC_0 (VAR_6->lexer);
 }
      else
 VAR_10 = 1;


      VAR_13 = FUNC_9 (VAR_6, &VAR_8,
                ((void*)0),
     VAR_7,
                  0,
     VAR_9,
     &VAR_12);




      if (FUNC_8 (VAR_6))
 goto done;

      if (VAR_12)
 {






   if (FUNC_1 (VAR_6->lexer, VAR_0))
     FUNC_14 ("mixing declarations and function-definitions is forbidden");

   else
     {
       FUNC_17 ();
       return;
     }
 }

      VAR_11 = FUNC_3 (VAR_6->lexer);

      if (VAR_11->type == VAR_0)
                                        ;

      else if (VAR_11->type == VAR_2)
 break;

      else
 {


   if (VAR_13 != VAR_5
       || FUNC_13 (VAR_6))
     FUNC_7 (VAR_6, "expected %<,%> or %<;%>");

   FUNC_12 (VAR_6);

   if (FUNC_1 (VAR_6->lexer, VAR_2))
     FUNC_0 (VAR_6->lexer);
   goto done;
 }






      VAR_7 = 0;
    }




  if (!VAR_10)
    {
      if (FUNC_6 (VAR_6))
 FUNC_19 (&VAR_8);

      FUNC_16 ();
    }


  FUNC_11 (VAR_6, VAR_2, "`;'");

 done:
  FUNC_17 ();
}
