
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; } ;
struct timer_list {int start_pid; int lockdep_map; int start_comm; int * start_site; int base; TYPE_1__ entry; } ;
struct lock_class_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,struct lock_class_key*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2,
    const char *VAR_3,
    struct lock_class_key *VAR_4)
{
 VAR_2->entry.next = ((void*)0);
 VAR_2->base = FUNC_0(VAR_1);





 FUNC_1(&VAR_2->lockdep_map, VAR_3, VAR_4, 0);
}
