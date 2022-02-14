
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_neg_cache {size_t nsec3_max_iter; int max; int lock; int tree; } ;
struct config_file {int neg_cache_size; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct val_neg_cache*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;

struct val_neg_cache* FUNC_5(struct config_file* VAR_1, size_t VAR_2)
{
 struct val_neg_cache* VAR_3 = (struct val_neg_cache*)FUNC_0(1,
  sizeof(*VAR_3));
 if(!VAR_3) {
  FUNC_3("Could not create neg cache: out of memory");
  return ((void*)0);
 }
 VAR_3->nsec3_max_iter = VAR_2;
 VAR_3->max = 1024*1024;
 if(VAR_1) VAR_3->max = VAR_1->neg_cache_size;
 FUNC_4(&VAR_3->tree, &VAR_0);
 FUNC_1(&VAR_3->lock);
 FUNC_2(&VAR_3->lock, VAR_3, sizeof(*VAR_3));
 return VAR_3;
}
