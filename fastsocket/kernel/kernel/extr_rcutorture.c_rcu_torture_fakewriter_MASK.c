
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* sync ) () ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_5)
{
 FUNC_0(VAR_4);

 FUNC_1("rcu_torture_fakewriter task started");
 FUNC_7(VAR_2, 19);

 do {
  FUNC_6(1 + FUNC_3(&VAR_4)%10);
  FUNC_9(FUNC_3(&VAR_4) & 0x3ff);
  VAR_1->sync();
  FUNC_4("rcu_torture_fakewriter");
 } while (!FUNC_2() && VAR_3 == VAR_0);

 FUNC_1("rcu_torture_fakewriter task stopping");
 FUNC_5("rcu_torture_fakewriter");
 while (!FUNC_2())
  FUNC_6(1);
 return 0;
}
