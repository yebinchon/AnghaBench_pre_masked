
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parent; } ;
typedef TYPE_1__ ldns_rbnode_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(ldns_rbnode_t* VAR_1, ldns_rbnode_t* VAR_2, ldns_rbnode_t* VAR_3)
{
 if(VAR_1 == VAR_0) return;
 if(VAR_1->parent == VAR_2) VAR_1->parent = VAR_3;
}
