
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_cache {int use; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t FUNC_2(struct val_neg_cache* VAR_0)
{
 size_t VAR_1;
 FUNC_0(&VAR_0->lock);
 VAR_1 = sizeof(*VAR_0) + VAR_0->use;
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
