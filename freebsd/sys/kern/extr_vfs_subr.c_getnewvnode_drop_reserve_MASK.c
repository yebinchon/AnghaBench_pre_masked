
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_vp_reserv; } ;


 int FUNC_0 (int *,scalar_t__) ;
 struct thread* VAR_0 ;
 int VAR_1 ;

void
FUNC_1(void)
{
 struct thread *VAR_2;

 VAR_2 = VAR_0;
 FUNC_0(&VAR_1, VAR_2->td_vp_reserv);
 VAR_2->td_vp_reserv = 0;
}
