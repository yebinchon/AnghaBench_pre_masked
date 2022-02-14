
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_q {int key; } ;
struct futex_hash_bucket {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct futex_q *VAR_0, struct futex_hash_bucket *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_0->key);
}
