
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum cp_parser_prec { ____Placeholder_cp_parser_prec } cp_parser_prec ;
struct TYPE_13__ {size_t type; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_14__ {int prec; int tree_type; int lhs_type; int lhs; } ;
typedef TYPE_2__ cp_parser_expression_stack_entry ;
typedef TYPE_2__* cp_parser_expression_stack ;
struct TYPE_15__ {int lexer; } ;
typedef TYPE_4__ cp_parser ;
struct TYPE_12__ {int tree_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_10__* VAR_2 ;
 int FUNC_1 (int,int ,int,int ,int,int*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_3 ;

__attribute__((used)) static tree
FUNC_7 (cp_parser* VAR_4, bool VAR_5)
{
  cp_parser_expression_stack VAR_6;
  cp_parser_expression_stack_entry *VAR_7 = &VAR_6[0];
  tree VAR_8, VAR_9;
  cp_token *VAR_10;
  enum tree_code VAR_11, VAR_12, VAR_13;
  enum cp_parser_prec VAR_14 = VAR_1, VAR_15, VAR_16;
  bool VAR_17;


  VAR_8 = FUNC_4 (VAR_4, 0, VAR_5);
  VAR_12 = VAR_0;

  for (;;)
    {

      VAR_10 = FUNC_3 (VAR_4->lexer);

      VAR_15 = FUNC_0 (VAR_10);
      if (VAR_15 <= VAR_14)
 {
   if (VAR_7 == VAR_6)
     break;
   else
     goto pop;
 }

     get_rhs:
      VAR_11 = VAR_2[VAR_10->type].tree_type;


      FUNC_2 (VAR_4->lexer);



      VAR_9 = FUNC_6 (VAR_4);
      VAR_13 = VAR_0;




      VAR_10 = FUNC_3 (VAR_4->lexer);
      VAR_16 = FUNC_0 (VAR_10);
      if (VAR_16 > VAR_15)
 {




   VAR_7->prec = VAR_14;
   VAR_7->tree_type = VAR_11;
   VAR_7->lhs = VAR_8;
   VAR_7->lhs_type = VAR_12;
   VAR_7++;
   VAR_8 = VAR_9;
   VAR_12 = VAR_13;
   VAR_14 = VAR_15;
   VAR_15 = VAR_16;
   goto get_rhs;

  pop:







   --VAR_7;
   VAR_14 = VAR_7->prec;
   VAR_11 = VAR_7->tree_type;
   VAR_9 = VAR_8;
   VAR_13 = VAR_12;
   VAR_8 = VAR_7->lhs;
   VAR_12 = VAR_7->lhs_type;
 }

      VAR_17 = 0;
      VAR_8 = FUNC_1 (VAR_11, VAR_8, VAR_12, VAR_9, VAR_13,
          &VAR_17);
      VAR_12 = VAR_11;







      if (VAR_17
   && (FUNC_5
       (VAR_4, "calls to overloaded operators")))
 return VAR_3;
    }

  return VAR_8;
}
