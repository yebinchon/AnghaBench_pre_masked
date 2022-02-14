
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {int dummy; } ;
struct futex_condvar {scalar_t__ fc_waitcount; int fc_address; struct futex_lock* fc_lock; } ;


 int FUNC_0 (struct futex_condvar*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct futex_condvar*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct futex_condvar*) ;
 int FUNC_4 (struct futex_lock*) ;

__attribute__((used)) static void
FUNC_5(struct futex_condvar *VAR_2)
{
 struct futex_lock *VAR_3;

 FUNC_3(VAR_2);
 VAR_3 = VAR_2->fc_lock;
 if (VAR_2->fc_waitcount == 0) {

  FUNC_2(&VAR_2->fc_address);
  FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_0);
 }
 FUNC_4(VAR_3);
}
