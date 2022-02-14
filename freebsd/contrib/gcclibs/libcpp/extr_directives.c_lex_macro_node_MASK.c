
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* node; } ;
struct TYPE_16__ {scalar_t__ type; int flags; TYPE_3__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_13__ {TYPE_6__* n_defined; } ;
struct TYPE_17__ {TYPE_2__* directive; TYPE_1__ spec_nodes; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_18__ {int flags; } ;
typedef TYPE_6__ cpp_hashnode ;
struct TYPE_14__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,char*,...) ;

__attribute__((used)) static cpp_hashnode *
FUNC_3 (cpp_reader *VAR_5)
{
  const cpp_token *VAR_6 = FUNC_1 (VAR_5);
  if (VAR_6->type == VAR_2)
    {
      cpp_hashnode *VAR_7 = VAR_6->val.node;

      if (VAR_7 == VAR_5->spec_nodes.n_defined)
 FUNC_2 (VAR_5, VAR_0,
     "\"defined\" cannot be used as a macro name");
      else if (! (VAR_7->flags & VAR_4))
 return VAR_7;
    }
  else if (VAR_6->flags & VAR_3)
    FUNC_2 (VAR_5, VAR_0,
       "\"%s\" cannot be used as a macro name as it is an operator in C++",
        FUNC_0 (VAR_6->val.node));
  else if (VAR_6->type == VAR_1)
    FUNC_2 (VAR_5, VAR_0, "no macro name given in #%s directive",
        VAR_5->directive->name);
  else
    FUNC_2 (VAR_5, VAR_0, "macro names must be identifiers");

  return ((void*)0);
}
