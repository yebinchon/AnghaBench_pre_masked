
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* begin ) () ;int (* prepare ) () ;int (* end ) () ;int (* finish ) () ;int (* enter ) () ;int (* recover ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

int FUNC_14(void)
{
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;






 VAR_5 = VAR_4->begin();
 if (VAR_5)
  goto Close;

 VAR_3 = 1;
 FUNC_12();
 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5) {
  if (VAR_4->recover)
   VAR_4->recover();
  goto Resume_devices;
 }

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5)
  goto Resume_devices;

 VAR_5 = VAR_4->prepare();
 if (VAR_5)
  goto Platform_finish;

 VAR_5 = FUNC_0();
 if (VAR_5)
  goto Platform_finish;

 FUNC_4();
 FUNC_13(VAR_1);
 VAR_4->enter();

 while (1);





 Platform_finish:
 VAR_4->finish();

 FUNC_2(VAR_2);

 Resume_devices:
 VAR_3 = 0;
 FUNC_1(VAR_2);
 FUNC_5();

 Close:
 VAR_4->end();

 return VAR_5;
}
