
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cv {scalar_t__ cv_waiters; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cv*,int ,int,int ) ;
 int FUNC_2 (struct cv*) ;
 int FUNC_3 (struct cv*) ;

void
FUNC_4(struct cv *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->cv_waiters == 0)
  return;




 VAR_3 = 0;
 if (VAR_2 == -1)
  VAR_2 = 0;
 FUNC_2(VAR_1);
 if (VAR_1->cv_waiters > 0) {
  VAR_1->cv_waiters = 0;
  VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2, 0);
 }
 FUNC_3(VAR_1);
 if (VAR_3)
  FUNC_0();
}
