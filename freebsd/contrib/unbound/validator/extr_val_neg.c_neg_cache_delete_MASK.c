
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_cache {int tree; int lock; } ;


 int FUNC_0 (struct val_neg_cache*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int *) ;

void FUNC_3(struct val_neg_cache* VAR_1)
{
 if(!VAR_1) return;
 FUNC_1(&VAR_1->lock);

 FUNC_2(&VAR_1->tree, &VAR_0, ((void*)0));
 FUNC_0(VAR_1);
}
