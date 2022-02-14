
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int str; } ;
struct TYPE_12__ {TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;
struct TYPE_10__ {int type; } ;
struct TYPE_13__ {TYPE_1__ directive_result; } ;
typedef TYPE_4__ cpp_reader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;

void
FUNC_3 (cpp_reader *VAR_2)
{
  const cpp_token *VAR_3 = FUNC_2 (VAR_2);
  VAR_2->directive_result.type = VAR_1;

  if (VAR_3)
    FUNC_1 (VAR_2, &VAR_3->val.str);
  else
    FUNC_0 (VAR_2, VAR_0,
        "_Pragma takes a parenthesized string literal");
}
