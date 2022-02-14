
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_lock; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void volatile*,uintptr_t) ;
 int VAR_1 ;
 int FUNC_2 (struct mtx*,int ) ;

void
FUNC_3(struct thread *VAR_2, struct mtx *VAR_3)
{
 FUNC_2(VAR_3, VAR_0);
 FUNC_0(VAR_2->td_lock == &VAR_1);
 FUNC_1((volatile void *)&VAR_2->td_lock, (uintptr_t)VAR_3);
}
