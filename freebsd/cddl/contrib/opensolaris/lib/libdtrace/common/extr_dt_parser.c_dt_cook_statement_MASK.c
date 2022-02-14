
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_7__ {TYPE_2__* dn_expr; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_8__ {int dn_attr; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static dt_node_t *
FUNC_2(dt_node_t *VAR_0, uint_t VAR_1)
{
 VAR_0->dn_expr = FUNC_1(VAR_0->dn_expr, VAR_1);
 FUNC_0(VAR_0, VAR_0->dn_expr->dn_attr);

 return (VAR_0);
}
