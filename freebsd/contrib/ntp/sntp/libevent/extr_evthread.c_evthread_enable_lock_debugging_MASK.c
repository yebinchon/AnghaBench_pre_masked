
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_lock_callbacks {int wait_condition; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct evthread_condition_callbacks {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct evthread_lock_callbacks VAR_7 ;
 int VAR_8 ;
 struct evthread_lock_callbacks VAR_9 ;
 int FUNC_1 (struct evthread_lock_callbacks*,struct evthread_lock_callbacks*,int) ;
 struct evthread_lock_callbacks VAR_10 ;
 struct evthread_lock_callbacks VAR_11 ;

void
FUNC_2(void)
{
 struct evthread_lock_callbacks VAR_12 = {
  VAR_1,
  VAR_0,
  VAR_3,
  VAR_4,
  VAR_5,
  VAR_6
 };
 if (VAR_8)
  return;
 FUNC_1(&VAR_11, &VAR_9,
     sizeof(struct evthread_lock_callbacks));
 FUNC_1(&VAR_9, &VAR_12,
     sizeof(struct evthread_lock_callbacks));

 FUNC_1(&VAR_10, &VAR_7,
     sizeof(struct evthread_condition_callbacks));
 VAR_7.wait_condition = VAR_2;
 VAR_8 = 1;


 FUNC_0(0);
}
