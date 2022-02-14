
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_sec; } ;
struct sys_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_2__ {int lock; struct timespec xtime; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct timespec*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;
 struct timespec VAR_2 ;
 int VAR_3 ;
 struct timespec FUNC_5 (struct timespec,struct timespec) ;
 struct timespec FUNC_6 (struct timespec,struct timespec) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct sys_device *VAR_4, pm_message_t VAR_5)
{
 unsigned long VAR_6;
 struct timespec VAR_7, VAR_8;
 static struct timespec VAR_9;

 FUNC_3(&VAR_2);

 FUNC_7(&VAR_1.lock, VAR_6);
 FUNC_4();
 VAR_3 = 1;







 VAR_7 = FUNC_6(VAR_1.xtime, VAR_2);
 VAR_8 = FUNC_6(VAR_7, VAR_9);
 if (FUNC_0(VAR_8.tv_sec) >= 2) {




  VAR_9 = VAR_7;
 } else {

  VAR_2 =
   FUNC_5(VAR_2, VAR_8);
 }
 FUNC_8(&VAR_1.lock, VAR_6);

 FUNC_1(VAR_0, ((void*)0));
 FUNC_2();

 return 0;
}
