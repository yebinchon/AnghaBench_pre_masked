
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int str; TYPE_2__* node; int arg_no; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_3__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_22__ {TYPE_4__* cur_token; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_23__ {scalar_t__ paramc; } ;
typedef TYPE_6__ cpp_macro ;
struct TYPE_18__ {int arg_index; } ;
struct TYPE_19__ {int flags; TYPE_1__ value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int *) ;

__attribute__((used)) static cpp_token *
FUNC_4 (cpp_reader *VAR_5, cpp_macro *VAR_6)
{
  cpp_token *VAR_7, *VAR_8;

  VAR_8 = VAR_5->cur_token;
  VAR_5->cur_token = FUNC_2 (VAR_5, VAR_6);
  VAR_7 = FUNC_1 (VAR_5);
  VAR_5->cur_token = VAR_8;


  if (VAR_7->type == VAR_2
      && (VAR_7->val.node->flags & VAR_4) != 0)
    {
      VAR_7->type = VAR_1;
      VAR_7->val.arg_no = VAR_7->val.node->value.arg_index;
    }
  else if (FUNC_0 (VAR_5) && VAR_6->paramc > 0
    && (VAR_7->type == VAR_3 || VAR_7->type == VAR_0))
    FUNC_3 (VAR_5, VAR_6, &VAR_7->val.str);

  return VAR_7;
}
