
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct kevent {int dummy; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kevent*,int,int ,int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,struct kevent*,int,struct kevent*,int,struct timespec*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

int
FUNC_7(struct timespec *VAR_8, struct timespec *VAR_9)
{
 struct kevent VAR_10;
 struct kevent VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;

 FUNC_0((VAR_13 = FUNC_5()) != -1, "kqueue: %s", FUNC_6(VAR_7));

 VAR_15 = VAR_4;






 if (FUNC_3() &&
     VAR_15/1000 < VAR_8->tv_sec && VAR_15/500 > VAR_8->tv_sec)
  VAR_8->tv_sec = VAR_5;

 FUNC_1(&VAR_10, 1, VAR_2, VAR_3, 0, VAR_15, 0);

 VAR_12 = FUNC_4(VAR_13, &VAR_10, 1, &VAR_11, 1, VAR_8);
 VAR_14 = VAR_7;

 (void)FUNC_2(VAR_13);

 if (VAR_12 == -1) {
  FUNC_0(VAR_14 == VAR_1, "kevent: %s",
      FUNC_6(VAR_14));
  return 0;
 }

 if (VAR_8->tv_sec * VAR_0 + VAR_8->tv_nsec > VAR_15 * VAR_6)
  FUNC_0(VAR_12 > 0,
      "kevent: KEVNT_TIMEOUT did not cause EVFILT_TIMER event");

 return 0;
}
