
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ id_kind; int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static tree
FUNC_4 (c_parser *VAR_3)
{
  if (FUNC_2 (VAR_3)->type == VAR_0
      && (FUNC_2 (VAR_3)->id_kind == VAR_2
   || FUNC_2 (VAR_3)->id_kind == VAR_1))
    {
      tree VAR_4 = FUNC_2 (VAR_3)->value;
      FUNC_0 (VAR_3);
      return FUNC_3 (VAR_4);
    }
  return FUNC_1 (VAR_3).value;
}
