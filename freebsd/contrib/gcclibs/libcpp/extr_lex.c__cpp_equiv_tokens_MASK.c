
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int text; } ;
struct TYPE_8__ {TYPE_1__ str; int node; int arg_no; } ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ flags; TYPE_2__ val; } ;
typedef TYPE_3__ cpp_token ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2 (const cpp_token *VAR_1, const cpp_token *VAR_2)
{
  if (VAR_1->type == VAR_2->type && VAR_1->flags == VAR_2->flags)
    switch (FUNC_0 (VAR_1))
      {
      default:
      case 128:
 return 1;
      case 129:
 return (VAR_1->type != VAR_0 || VAR_1->val.arg_no == VAR_2->val.arg_no);
      case 131:
 return VAR_1->val.node == VAR_2->val.node;
      case 130:
 return (VAR_1->val.str.len == VAR_2->val.str.len
  && !FUNC_1 (VAR_1->val.str.text, VAR_2->val.str.text,
       VAR_1->val.str.len));
      }

  return 0;
}
