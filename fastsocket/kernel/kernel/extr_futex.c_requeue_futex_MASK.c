
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union futex_key {int dummy; } futex_key ;
struct TYPE_4__ {int * lock; } ;
struct TYPE_5__ {TYPE_1__ plist; } ;
struct futex_q {union futex_key key; TYPE_2__ list; int * lock_ptr; } ;
struct futex_hash_bucket {int lock; int chain; } ;


 int FUNC_0 (union futex_key*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static inline
void FUNC_4(struct futex_q *VAR_0, struct futex_hash_bucket *VAR_1,
     struct futex_hash_bucket *VAR_2, union futex_key *VAR_3)
{





 if (FUNC_1(&VAR_1->chain != &VAR_2->chain)) {
  FUNC_3(&VAR_0->list, &VAR_1->chain);
  FUNC_2(&VAR_0->list, &VAR_2->chain);
  VAR_0->lock_ptr = &VAR_2->lock;



 }
 FUNC_0(VAR_3);
 VAR_0->key = *VAR_3;
}
