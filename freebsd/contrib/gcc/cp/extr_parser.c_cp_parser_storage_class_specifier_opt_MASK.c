
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int lexer; } ;
typedef TYPE_2__ cp_parser ;
struct TYPE_6__ {int value; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_8__ {int keyword; } ;


 int VAR_0 ;






 TYPE_5__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static tree
FUNC_2 (cp_parser* VAR_1)
{
  switch (FUNC_1 (VAR_1->lexer)->keyword)
    {
    case 133:
    case 130:
    case 129:
    case 132:
    case 131:
    case 128:

      return FUNC_0 (VAR_1->lexer)->u.value;

    default:
      return VAR_0;
    }
}
