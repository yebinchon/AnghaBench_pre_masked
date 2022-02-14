
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dn_dbuf; int * dn_bonus; int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ,int ,int ,int *) ;

void
FUNC_3(dnode_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_1->dn_struct_rwlock));

 FUNC_0(VAR_1->dn_bonus == ((void*)0));
 VAR_1->dn_bonus = FUNC_2(VAR_1, 0, VAR_0, VAR_1->dn_dbuf, ((void*)0));
}
