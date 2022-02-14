
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_5__ {void* expr; } ;
struct TYPE_6__ {TYPE_1__ u; void* type; } ;
typedef TYPE_2__ conversion ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static conversion *
FUNC_1 (tree VAR_1, tree VAR_2)
{
  conversion *VAR_3;

  VAR_3 = FUNC_0 (VAR_0);
  VAR_3->type = VAR_1;
  VAR_3->u.expr = VAR_2;

  return VAR_3;
}
