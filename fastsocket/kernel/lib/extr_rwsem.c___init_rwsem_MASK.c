
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int wait_list; int wait_lock; int count; int dep_map; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int *,char const*,struct lock_class_key*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rw_semaphore *VAR_1, const char *VAR_2,
    struct lock_class_key *VAR_3)
{







 VAR_1->count = VAR_0;
 FUNC_3(&VAR_1->wait_lock);
 FUNC_0(&VAR_1->wait_list);
}
