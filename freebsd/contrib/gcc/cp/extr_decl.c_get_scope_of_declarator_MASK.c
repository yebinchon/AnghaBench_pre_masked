
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ qualifying_scope; } ;
struct TYPE_6__ {TYPE_1__ id; } ;
struct TYPE_7__ {scalar_t__ kind; TYPE_2__ u; struct TYPE_7__* declarator; } ;
typedef TYPE_3__ cp_declarator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

tree
FUNC_0 (const cp_declarator *VAR_2)
{
  while (VAR_2 && VAR_2->kind != VAR_1)
    VAR_2 = VAR_2->declarator;



  if (VAR_2
      && VAR_2->u.id.qualifying_scope)
    return VAR_2->u.id.qualifying_scope;



  return VAR_0;
}
