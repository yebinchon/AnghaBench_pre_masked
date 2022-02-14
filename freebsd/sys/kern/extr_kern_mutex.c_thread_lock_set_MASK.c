
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct mtx* td_lock; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (struct mtx*,int ) ;
 int FUNC_2 (struct mtx*) ;

void
FUNC_3(struct thread *VAR_1, struct mtx *VAR_2)
{
 struct mtx *VAR_3;

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_1, VAR_0);
 VAR_3 = VAR_1->td_lock;
 VAR_1->td_lock = VAR_2;
 FUNC_2(VAR_3);
}
