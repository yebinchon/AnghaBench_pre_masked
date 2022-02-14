
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int num_template_parameter_lists; int lexer; } ;
typedef TYPE_1__ cp_parser ;
struct TYPE_10__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_8__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int *,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (cp_parser* VAR_6)
{
  bool VAR_7;

  FUNC_4 (VAR_6, VAR_2, "`template'");

  FUNC_3 (VAR_6, VAR_1, "`<'");

  FUNC_3 (VAR_6, VAR_0, "`>'");

  ++VAR_6->num_template_parameter_lists;




  if (VAR_3 == VAR_4)
    {
      FUNC_9 ("template specialization with C linkage");


      FUNC_11 (VAR_5);
      VAR_7 = 1;
    }
  else
    VAR_7 = 0;

  if (!FUNC_0 ())
    {
      FUNC_8 ();
      FUNC_6 (VAR_6);
      return;
    }



  if (FUNC_1 (VAR_6->lexer, VAR_2))
    {
      if (FUNC_2 (VAR_6->lexer, 2)->type == VAR_1
   && FUNC_2 (VAR_6->lexer, 3)->type != VAR_0)
 FUNC_7 (VAR_6,
                        0);
      else
 FUNC_12 (VAR_6);
    }
  else

    FUNC_5 (VAR_6,
                 ((void*)0),
                   0,
                   ((void*)0));

  FUNC_8 ();


  if (VAR_7)
    FUNC_10 ();

  --VAR_6->num_template_parameter_lists;
}
