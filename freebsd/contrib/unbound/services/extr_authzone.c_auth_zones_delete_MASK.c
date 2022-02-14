
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zones {int xtree; int ztree; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auth_zones*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;

void FUNC_3(struct auth_zones* VAR_2)
{
 if(!VAR_2) return;
 FUNC_1(&VAR_2->lock);
 FUNC_2(&VAR_2->ztree, VAR_1, ((void*)0));
 FUNC_2(&VAR_2->xtree, VAR_0, ((void*)0));
 FUNC_0(VAR_2);
}
