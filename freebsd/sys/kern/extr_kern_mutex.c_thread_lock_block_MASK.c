
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct mtx* td_lock; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;
 struct mtx VAR_1 ;
 int FUNC_1 (struct mtx*) ;

struct mtx *
FUNC_2(struct thread *VAR_2)
{
 struct mtx *VAR_3;

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = VAR_2->td_lock;
 VAR_2->td_lock = &VAR_1;
 FUNC_1(VAR_3);

 return (VAR_3);
}
