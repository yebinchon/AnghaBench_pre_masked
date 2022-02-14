
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_counter {int list; int counters; int count; int lock; } ;
struct lock_class_key {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct lock_class_key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct percpu_counter *VAR_4, s64 VAR_5,
     struct lock_class_key *VAR_6)
{
 FUNC_4(&VAR_4->lock);
 FUNC_2(&VAR_4->lock, VAR_6);
 VAR_4->count = VAR_5;
 VAR_4->counters = FUNC_0(VAR_3);
 if (!VAR_4->counters)
  return -VAR_0;





 return 0;
}
