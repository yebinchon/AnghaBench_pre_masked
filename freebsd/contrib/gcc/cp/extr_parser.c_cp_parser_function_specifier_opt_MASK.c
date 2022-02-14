
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
struct TYPE_9__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_10__ {int * specs; } ;
typedef TYPE_3__ cp_decl_specifier_seq ;
struct TYPE_8__ {int value; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
struct TYPE_11__ {int keyword; } ;


 int VAR_0 ;
 int FUNC_0 () ;



 TYPE_7__* FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static tree
FUNC_4 (cp_parser* VAR_4,
      cp_decl_specifier_seq *VAR_5)
{
  switch (FUNC_2 (VAR_4->lexer)->keyword)
    {
    case 129:
      if (VAR_5)
 ++VAR_5->specs[(int) VAR_2];
      break;

    case 128:



      if (FUNC_0 ())
 FUNC_3 ("templates may not be %<virtual%>");
      else if (VAR_5)
 ++VAR_5->specs[(int) VAR_3];
      break;

    case 130:
      if (VAR_5)
 ++VAR_5->specs[(int) VAR_1];
      break;

    default:
      return VAR_0;
    }


  return FUNC_1 (VAR_4->lexer)->u.value;
}
