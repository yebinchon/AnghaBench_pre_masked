
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct thread {scalar_t__ td_vp_reserv; } ;


 int FUNC_0 (scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 struct thread* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_9(u_int VAR_6)
{
 struct thread *VAR_7;



 FUNC_4(&VAR_4);
 if (VAR_3 + VAR_6 > VAR_1 && VAR_2 > VAR_5)
  FUNC_8(FUNC_6(VAR_3 + VAR_6 - VAR_1,
      VAR_2 - VAR_5), ((void*)0));
 FUNC_5(&VAR_4);

 VAR_7 = VAR_0;

 if (FUNC_1(&VAR_3, VAR_6) + VAR_6 <= VAR_1) {
  VAR_7->td_vp_reserv += VAR_6;
  FUNC_7();
  return;
 } else
  FUNC_2(&VAR_3, VAR_6);

 FUNC_4(&VAR_4);
 while (VAR_6 > 0) {
  if (FUNC_3(0) == 0) {
   VAR_6--;
   VAR_7->td_vp_reserv++;
   FUNC_0(&VAR_3, 1);
  }
 }
 FUNC_7();
 FUNC_5(&VAR_4);
}
