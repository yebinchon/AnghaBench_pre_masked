
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct interval {scalar_t__ timeleft; int timetowait; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct interval* VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct interval *VAR_3;
 u_int VAR_4;
 int VAR_5;

 if (VAR_1 <= VAR_0) {
  VAR_5 = 1;
  FUNC_1();
 }
 else
  VAR_5 = 0;
 VAR_3 = VAR_2;
 if (VAR_3->timeleft < VAR_1)
  (void)FUNC_2((u_int)(VAR_1 - VAR_3->timeleft));
 else {
  while (VAR_3->timeleft && VAR_1 < VAR_3->timeleft)
   ++VAR_3;




  if ((VAR_4 = VAR_1 - VAR_3->timeleft)) {
   if (VAR_4 > (u_int)(VAR_3->timetowait / 5))
    FUNC_3(VAR_1);
   (void)FUNC_2(VAR_4);
  }
 }
 for (;; ++VAR_3) {
  FUNC_3(VAR_3->timeleft);
  if (!VAR_5 && VAR_3->timeleft <= VAR_0) {
   VAR_5 = 1;
   FUNC_1();
  }
  (void)FUNC_2((u_int)VAR_3->timetowait);
  if (!VAR_3->timeleft)
   break;
 }
 FUNC_0();
}
