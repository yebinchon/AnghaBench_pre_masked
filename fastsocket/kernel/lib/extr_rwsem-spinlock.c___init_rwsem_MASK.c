
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rw_semaphore {int wait_list; int wait_lock; scalar_t__ activity; int dep_map; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int *,char const*,struct lock_class_key*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rw_semaphore *VAR_0, const char *VAR_1,
    struct lock_class_key *VAR_2)
{







 VAR_0->activity = 0;
 FUNC_3(&VAR_0->wait_lock);
 FUNC_0(&VAR_0->wait_list);
}
