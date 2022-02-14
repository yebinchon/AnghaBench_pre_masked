
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_7__ {int dn_kind; int dn_ident; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_8__ {scalar_t__ di_kind; } ;
typedef TYPE_2__ dt_ident_t ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

dt_ident_t *
FUNC_2(const dt_node_t *VAR_0, uint_t VAR_1)
{
 dt_ident_t *VAR_2;

 switch (VAR_0->dn_kind) {
 case 128:
 case 129:
 case 132:
 case 133:
 case 131:
 case 130:
  VAR_2 = FUNC_0(VAR_0->dn_ident);
  return (VAR_2->di_kind == VAR_1 ? VAR_2 : ((void*)0));
 }

 if (FUNC_1(VAR_0)) {
  VAR_2 = FUNC_0(VAR_0->dn_ident);
  return (VAR_2->di_kind == VAR_1 ? VAR_2 : ((void*)0));
 }

 return (((void*)0));
}
