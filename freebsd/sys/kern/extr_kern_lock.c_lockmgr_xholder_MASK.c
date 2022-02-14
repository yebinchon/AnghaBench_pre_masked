
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct lock {uintptr_t lk_lock; } ;


 scalar_t__ FUNC_0 (uintptr_t) ;
 uintptr_t VAR_0 ;

__attribute__((used)) static __inline struct thread *
FUNC_1(const struct lock *VAR_1)
{
 uintptr_t VAR_2;

 VAR_2 = VAR_1->lk_lock;
 return ((VAR_2 & VAR_0) ? ((void*)0) : (struct thread *)FUNC_0(VAR_2));
}
