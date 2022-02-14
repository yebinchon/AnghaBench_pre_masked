
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timer_t ;
struct k_itimer {scalar_t__ it_signal; int it_lock; } ;
struct TYPE_2__ {scalar_t__ signal; } ;


 TYPE_1__* VAR_0 ;
 struct k_itimer* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct k_itimer *FUNC_5(timer_t VAR_2, unsigned long *VAR_3)
{
 struct k_itimer *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(&VAR_1, (int)VAR_2);
 if (VAR_4) {
  FUNC_3(&VAR_4->it_lock, *VAR_3);
  if (VAR_4->it_signal == VAR_0->signal) {
   FUNC_2();
   return VAR_4;
  }
  FUNC_4(&VAR_4->it_lock, *VAR_3);
 }
 FUNC_2();

 return ((void*)0);
}
