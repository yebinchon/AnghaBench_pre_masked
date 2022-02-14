
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigevent {int dummy; } ;
struct ktimer_create_args {int timerid; int clock_id; int * evp; } ;
typedef int ev ;


 int FUNC_0 (int *,struct sigevent*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct sigevent*,int*,int) ;
 int FUNC_3 (struct thread*,int) ;

int
FUNC_4(struct thread *VAR_0, struct ktimer_create_args *VAR_1)
{
 struct sigevent *VAR_2, VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_1->evp == ((void*)0)) {
  VAR_2 = ((void*)0);
 } else {
  VAR_5 = FUNC_0(VAR_1->evp, &VAR_3, sizeof(VAR_3));
  if (VAR_5 != 0)
   return (VAR_5);
  VAR_2 = &VAR_3;
 }
 VAR_5 = FUNC_2(VAR_0, VAR_1->clock_id, VAR_2, &VAR_4, -1);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_1(&VAR_4, VAR_1->timerid, sizeof(int));
  if (VAR_5 != 0)
   FUNC_3(VAR_0, VAR_4);
 }
 return (VAR_5);
}
