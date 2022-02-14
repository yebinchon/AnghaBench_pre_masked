
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigevent {int dummy; } ;
struct linux_timer_create_args {int timerid; int clock_id; int * evp; } ;
struct l_sigevent {int dummy; } ;
typedef int l_ev ;
typedef int clockid_t ;


 int FUNC_0 (int *,struct l_sigevent*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct sigevent*,int*,int) ;
 int FUNC_3 (struct thread*,int) ;
 int FUNC_4 (struct l_sigevent*,struct sigevent*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(struct thread *VAR_0, struct linux_timer_create_args *VAR_1)
{
 struct l_sigevent VAR_2;
 struct sigevent VAR_3, *VAR_4;
 clockid_t VAR_5;
 int VAR_6, VAR_7;

 if (VAR_1->evp == ((void*)0)) {
  VAR_4 = ((void*)0);
 } else {
  VAR_6 = FUNC_0(VAR_1->evp, &VAR_2, sizeof(VAR_2));
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_6 = FUNC_4(&VAR_2, &VAR_3);
  if (VAR_6 != 0)
   return (VAR_6);
  VAR_4 = &VAR_3;
 }
 VAR_6 = FUNC_5(&VAR_5, VAR_1->clock_id);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_2(VAR_0, VAR_5, VAR_4, &VAR_7, -1);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_1(&VAR_7, VAR_1->timerid, sizeof(int));
  if (VAR_6 != 0)
   FUNC_3(VAR_0, VAR_7);
 }
 return (VAR_6);
}
