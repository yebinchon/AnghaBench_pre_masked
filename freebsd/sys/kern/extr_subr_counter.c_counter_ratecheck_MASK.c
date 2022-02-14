
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct counter_rate {int cr_over; int cr_ticks; scalar_t__ cr_lock; int cr_rate; } ;
typedef int int64_t ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int64_t
FUNC_5(struct counter_rate *VAR_2, int64_t VAR_3)
{
 int64_t VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->cr_over;
 VAR_5 = VAR_1;

 if ((u_int)(VAR_5 - VAR_2->cr_ticks) >= VAR_0) {




  if ((VAR_2->cr_lock == 0) &&
      FUNC_0(&VAR_2->cr_lock, 0, 1)) {




   if ((u_int)(VAR_5 - VAR_2->cr_ticks) >= VAR_0) {
    VAR_4 = FUNC_3(VAR_2->cr_rate);
    FUNC_4(VAR_2->cr_rate);
    VAR_2->cr_over = 0;
    VAR_2->cr_ticks = VAR_5;
    if (VAR_4 <= VAR_3)
     VAR_4 = 0;
   }
   FUNC_1(&VAR_2->cr_lock, 0);
  } else





   return (VAR_4);
 }

 FUNC_2(VAR_2->cr_rate, 1);
 if (VAR_2->cr_over != 0)
  return (-1);
 if (FUNC_3(VAR_2->cr_rate) > VAR_3)
  VAR_4 = VAR_2->cr_over = -1;

 return (VAR_4);
}
