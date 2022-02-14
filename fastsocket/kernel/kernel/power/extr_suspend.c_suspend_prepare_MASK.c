
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_4;

 if (!VAR_3 || !VAR_3->enter)
  return -VAR_0;

 FUNC_1();

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto Finish;

 VAR_4 = FUNC_5();
 if (VAR_4)
  goto Finish;

 VAR_4 = FUNC_3();
 if (!VAR_4)
  return 0;

 FUNC_4();
 FUNC_6();
 Finish:
 FUNC_0(VAR_1);
 FUNC_2();
 return VAR_4;
}
