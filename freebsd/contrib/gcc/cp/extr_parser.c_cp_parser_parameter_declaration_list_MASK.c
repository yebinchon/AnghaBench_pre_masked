
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_14__ {int in_unbraced_linkage_specification_p; int in_type_id_in_expr_p; int in_template_argument_list_p; int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_15__ {struct TYPE_15__* next; } ;
typedef TYPE_3__ cp_parameter_declarator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int,int*) ;
 int FUNC_6 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static cp_parameter_declarator *
FUNC_8 (cp_parser* VAR_5, bool *VAR_6)
{
  cp_parameter_declarator *VAR_7 = ((void*)0);
  cp_parameter_declarator **VAR_8 = &VAR_7;
  bool VAR_9;


  *VAR_6 = 0;



  VAR_9
    = VAR_5->in_unbraced_linkage_specification_p;
  VAR_5->in_unbraced_linkage_specification_p = 0;


  while (1)
    {
      cp_parameter_declarator *VAR_10;
      bool VAR_11;

      VAR_10
 = FUNC_5 (VAR_5,
                            0,
        &VAR_11);



      if (!VAR_10)
 {
   *VAR_6 = 1;
   VAR_7 = ((void*)0);
   break;
 }

      *VAR_8 = VAR_10;
      VAR_8 = &VAR_10->next;


      if (FUNC_1 (VAR_5->lexer, VAR_0)
   || FUNC_1 (VAR_5->lexer, VAR_2)

   || FUNC_1 (VAR_5->lexer, VAR_4)
   || FUNC_1 (VAR_5->lexer, VAR_3))

 break;
      else if (FUNC_1 (VAR_5->lexer, VAR_1))
 {
   cp_token *VAR_12;


   VAR_12 = FUNC_2 (VAR_5->lexer, 2);

   if (VAR_12->type == VAR_2)
     break;


   FUNC_0 (VAR_5->lexer);
   if (!VAR_5->in_template_argument_list_p
       && !VAR_5->in_type_id_in_expr_p
       && FUNC_7 (VAR_5)




       && !VAR_11)
     FUNC_3 (VAR_5);
 }
      else
 {
   FUNC_4 (VAR_5, "expected %<,%> or %<...%>");
   if (!FUNC_7 (VAR_5))
     FUNC_6 (VAR_5,
                        1,
                      0,
                           0);
   break;
 }
    }

  VAR_5->in_unbraced_linkage_specification_p
    = VAR_9;

  return VAR_7;
}
