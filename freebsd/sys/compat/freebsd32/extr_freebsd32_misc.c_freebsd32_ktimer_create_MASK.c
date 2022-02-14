
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigevent32 {int dummy; } ;
struct sigevent {int dummy; } ;
struct freebsd32_ktimer_create_args {int timerid; int clock_id; int * evp; } ;
typedef int ev32 ;


 int FUNC_0 (struct sigevent32*,struct sigevent*) ;
 int FUNC_1 (int *,struct sigevent32*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct thread*,int ,struct sigevent*,int*,int) ;
 int FUNC_4 (struct thread*,int) ;

int FUNC_5(struct thread *VAR_0,
    struct freebsd32_ktimer_create_args *VAR_1)
{
 struct sigevent32 VAR_2;
 struct sigevent VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1->evp == ((void*)0)) {
  VAR_4 = ((void*)0);
 } else {
  VAR_4 = &VAR_3;
  VAR_5 = FUNC_1(VAR_1->evp, &VAR_2, sizeof(VAR_2));
  if (VAR_5 != 0)
   return (VAR_5);
  VAR_5 = FUNC_0(&VAR_2, &VAR_3);
  if (VAR_5 != 0)
   return (VAR_5);
 }
 VAR_5 = FUNC_3(VAR_0, VAR_1->clock_id, VAR_4, &VAR_6, -1);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(&VAR_6, VAR_1->timerid, sizeof(int));
  if (VAR_5 != 0)
   FUNC_4(VAR_0, VAR_6);
 }
 return (VAR_5);
}
