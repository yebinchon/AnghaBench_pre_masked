
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {TYPE_2__* next; } ;
struct TYPE_5__ {scalar_t__ kind; int bad_p; int user_conv_p; TYPE_1__ u; int type; } ;
typedef TYPE_2__ conversion ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static tree
FUNC_1 (conversion **VAR_2)
{
  if ((*VAR_2)->kind == VAR_1)
    {
      conversion *VAR_3 = *VAR_2;
      tree VAR_4 = FUNC_0 (VAR_3->type);
      *VAR_2 = VAR_3->u.next;
      (*VAR_2)->user_conv_p = VAR_3->user_conv_p;
      (*VAR_2)->bad_p = VAR_3->bad_p;
      return VAR_4;
    }

  return VAR_0;
}
