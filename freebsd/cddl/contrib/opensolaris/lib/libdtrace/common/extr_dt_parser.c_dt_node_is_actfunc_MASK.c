
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dn_kind; TYPE_1__* dn_ident; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_4__ {scalar_t__ di_kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(const dt_node_t *VAR_2)
{
 return (VAR_2->dn_kind == VAR_1 &&
     VAR_2->dn_ident->di_kind == VAR_0);
}
