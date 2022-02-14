
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* pp_fun ;
struct TYPE_6__ {void* expression; void* assignment_expression; void* conditional_expression; void* multiplicative_expression; void* unary_expression; void* postfix_expression; void* primary_expression; void* id_expression; void* constant; void* simple_type_specifier; void* direct_abstract_declarator; void* abstract_declarator; void* type_id; void* parameter_list; void* direct_declarator; void* declarator; void* type_specifier_seq; void* function_specifier; void* declaration_specifiers; void* declaration; } ;
struct TYPE_7__ {int enclosing_scope; TYPE_1__ c_base; } ;
typedef TYPE_2__ cxx_pretty_printer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3 (cxx_pretty_printer *VAR_21)
{
  FUNC_1 (FUNC_0 (VAR_21));
  FUNC_2 (VAR_21, 0);

  VAR_21->c_base.declaration = (pp_fun) VAR_6;
  VAR_21->c_base.declaration_specifiers = (pp_fun) VAR_5;
  VAR_21->c_base.function_specifier = (pp_fun) VAR_11;
  VAR_21->c_base.type_specifier_seq = (pp_fun) VAR_19;
  VAR_21->c_base.declarator = (pp_fun) VAR_7;
  VAR_21->c_base.direct_declarator = (pp_fun) VAR_9;
  VAR_21->c_base.parameter_list = (pp_fun) VAR_14;
  VAR_21->c_base.type_id = (pp_fun) VAR_18;
  VAR_21->c_base.abstract_declarator = (pp_fun) VAR_1;
  VAR_21->c_base.direct_abstract_declarator =
    (pp_fun) VAR_8;
  VAR_21->c_base.simple_type_specifier = (pp_fun)VAR_17;



  VAR_21->c_base.constant = (pp_fun) VAR_4;
  VAR_21->c_base.id_expression = (pp_fun) VAR_12;
  VAR_21->c_base.primary_expression = (pp_fun) VAR_16;
  VAR_21->c_base.postfix_expression = (pp_fun) VAR_15;
  VAR_21->c_base.unary_expression = (pp_fun) VAR_20;
  VAR_21->c_base.multiplicative_expression = (pp_fun) VAR_13;
  VAR_21->c_base.conditional_expression = (pp_fun) VAR_3;
  VAR_21->c_base.assignment_expression = (pp_fun) VAR_2;
  VAR_21->c_base.expression = (pp_fun) VAR_10;
  VAR_21->enclosing_scope = VAR_0;
}
