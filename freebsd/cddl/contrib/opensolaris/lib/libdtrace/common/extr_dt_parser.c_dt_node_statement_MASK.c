
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dn_kind; struct TYPE_7__* dn_expr; TYPE_1__* dn_ident; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_6__ {scalar_t__ di_kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int ) ;

dt_node_t *
FUNC_1(dt_node_t *VAR_5)
{
 dt_node_t *VAR_6;

 if (VAR_5->dn_kind == VAR_1)
  return (VAR_5);

 if (VAR_5->dn_kind == VAR_4 &&
     VAR_5->dn_ident->di_kind == VAR_0)
  VAR_6 = FUNC_0(VAR_3);
 else
  VAR_6 = FUNC_0(VAR_2);

 VAR_6->dn_expr = VAR_5;
 return (VAR_6);
}
