
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_q {int * lock_ptr; int key; } ;
struct futex_hash_bucket {int lock; } ;


 int FUNC_0 (int *) ;
 struct futex_hash_bucket* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct futex_hash_bucket *FUNC_3(struct futex_q *VAR_0)
{
 struct futex_hash_bucket *VAR_1;

 FUNC_0(&VAR_0->key);
 VAR_1 = FUNC_1(&VAR_0->key);
 VAR_0->lock_ptr = &VAR_1->lock;

 FUNC_2(&VAR_1->lock);
 return VAR_1;
}
