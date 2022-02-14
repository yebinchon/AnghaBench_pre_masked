
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cv {scalar_t__ cv_waiters; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cv*) ;
 int * FUNC_2 (struct cv*) ;
 int FUNC_3 (struct cv*) ;
 int FUNC_4 (struct cv*,int ,int ,int ) ;

void
FUNC_5(struct cv *VAR_2)
{
 int VAR_3;

 if (VAR_2->cv_waiters == 0)
  return;
 VAR_3 = 0;
 FUNC_1(VAR_2);
 if (VAR_2->cv_waiters > 0) {
  if (VAR_2->cv_waiters == VAR_0 &&
      FUNC_2(VAR_2) == ((void*)0)) {
   VAR_2->cv_waiters = 0;
  } else {
   if (VAR_2->cv_waiters < VAR_0)
    VAR_2->cv_waiters--;
   VAR_3 = FUNC_4(VAR_2, VAR_1, 0,
       0);
  }
 }
 FUNC_3(VAR_2);
 if (VAR_3)
  FUNC_0();
}
