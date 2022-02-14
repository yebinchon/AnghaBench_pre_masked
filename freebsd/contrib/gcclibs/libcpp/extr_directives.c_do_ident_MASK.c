
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int str; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_13__ {int (* ident ) (TYPE_5__*,int ,int *) ;} ;
struct TYPE_16__ {int directive_line; TYPE_2__ cb; TYPE_1__* directive; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int ,char*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ,int *) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_2)
{
  const cpp_token *VAR_3 = FUNC_2 (VAR_2);

  if (VAR_3->type != VAR_1)
    FUNC_1 (VAR_2, VAR_0, "invalid #%s directive",
        VAR_2->directive->name);
  else if (VAR_2->cb.ident)
    VAR_2->cb.ident (VAR_2, VAR_2->directive_line, &VAR_3->val.str);

  FUNC_0 (VAR_2);
}
