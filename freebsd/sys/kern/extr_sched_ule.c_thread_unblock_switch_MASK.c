
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_lock; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (uintptr_t volatile*,uintptr_t) ;

__attribute__((used)) static inline void
FUNC_1(struct thread *VAR_0, struct mtx *VAR_1)
{
 FUNC_0((volatile uintptr_t *)&VAR_0->td_lock,
     (uintptr_t)VAR_1);
}
