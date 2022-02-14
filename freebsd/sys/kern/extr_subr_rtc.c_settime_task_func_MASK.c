
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct rtc_instance {int flags; int clockdev; int resadj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (struct timespec*,int *,struct timespec*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, int VAR_4)
{
 struct timespec VAR_5;
 struct rtc_instance *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3;
 if (!(VAR_6->flags & VAR_1)) {
  FUNC_2(&VAR_5);
  if (!(VAR_6->flags & VAR_0)) {
   VAR_5.tv_sec -= FUNC_4();
   FUNC_3(&VAR_5, &VAR_6->resadj, &VAR_5);
  }
 } else {
  VAR_5.tv_sec = 0;
  VAR_5.tv_nsec = 0;
 }
 VAR_7 = FUNC_0(VAR_6->clockdev, &VAR_5);
 if (VAR_7 != 0 && VAR_2)
  FUNC_1(VAR_6->clockdev, "CLOCK_SETTIME error %d\n", VAR_7);
}
