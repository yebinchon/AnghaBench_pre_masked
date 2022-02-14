
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef enum pragma_context { ____Placeholder_pragma_context } pragma_context ;
struct TYPE_18__ {scalar_t__ type; unsigned int pragma_kind; } ;
typedef TYPE_1__ cp_token ;
struct TYPE_19__ {TYPE_16__* lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_17__ {int in_pragma; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (TYPE_16__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

 int VAR_2 ;


__attribute__((used)) static bool
FUNC_10 (cp_parser *VAR_3, enum pragma_context VAR_4)
{
  cp_token *VAR_5;
  unsigned int VAR_6;

  VAR_5 = FUNC_1 (VAR_3->lexer);
  FUNC_9 (VAR_5->type == VAR_0);
  VAR_3->lexer->in_pragma = 1;

  VAR_6 = VAR_5->pragma_kind;
  switch (VAR_6)
    {
    case 142:
      FUNC_8 ("%<#pragma GCC pch_preprocess%> must be first");
      break;

    case 140:
      switch (VAR_4)
 {
 case 129:
   FUNC_3 (VAR_3, VAR_5);
   return 0;
 case 128:
   FUNC_8 ("%<#pragma omp barrier%> may only be "
   "used in compound statements");
   break;
 default:
   goto bad_stmt;
 }
      break;

    case 138:
      switch (VAR_4)
 {
 case 129:
   FUNC_5 (VAR_3, VAR_5);
   return 0;
 case 128:
   FUNC_8 ("%<#pragma omp flush%> may only be "
   "used in compound statements");
   break;
 default:
   goto bad_stmt;
 }
      break;

    case 130:
      FUNC_6 (VAR_3, VAR_5);
      return 0;

    case 141:
    case 139:
    case 137:
    case 136:
    case 135:
    case 134:
    case 132:
    case 131:
      if (VAR_4 == VAR_2)
 goto bad_stmt;
      FUNC_4 (VAR_3, VAR_5);
      return 1;

    case 133:
      FUNC_8 ("%<#pragma omp section%> may only be used in "
      "%<#pragma omp sections%> construct");
      break;

    default:
      FUNC_9 (VAR_6 >= VAR_1);
      FUNC_0 (VAR_6);
      break;

    bad_stmt:
      FUNC_2 (VAR_3, "expected declaration specifiers");
      break;
    }

  FUNC_7 (VAR_3, VAR_5);
  return 0;
}
