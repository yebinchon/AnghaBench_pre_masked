
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;
struct itimerspec {struct timespec it_value; struct timespec it_interval; } ;
struct itimer {int it_callout; struct itimerspec it_time; int it_clockid; int it_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (int *,int ,int ,struct itimer*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct timespec*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,struct timespec*) ;
 int VAR_3 ;
 int FUNC_6 (struct itimer*,struct itimerspec*) ;
 int FUNC_7 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_8 (struct timespec*) ;
 scalar_t__ FUNC_9 (struct timespec*) ;
 int FUNC_10 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_11 (struct timeval*) ;

__attribute__((used)) static int
FUNC_12(struct itimer *VAR_4, int VAR_5,
 struct itimerspec *VAR_6, struct itimerspec *VAR_7)
{
 struct timespec VAR_8, VAR_9;
 struct timeval VAR_10;
 struct itimerspec VAR_11;

 FUNC_4(&VAR_4->it_mtx, VAR_1);

 VAR_11 = *VAR_6;
 if (FUNC_3(&VAR_11.it_value))
  return (VAR_0);

 if (FUNC_9(&VAR_11.it_value)) {
  if (FUNC_3(&VAR_11.it_interval))
   return (VAR_0);
 } else {
  FUNC_8(&VAR_11.it_interval);
 }

 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_4, VAR_7);

 VAR_4->it_time = VAR_11;
 if (FUNC_9(&VAR_11.it_value)) {
  FUNC_5(VAR_4->it_clockid, &VAR_8);
  VAR_9 = VAR_11.it_value;
  if ((VAR_5 & VAR_2) == 0) {

   FUNC_7(&VAR_4->it_time.it_value, &VAR_8,
    &VAR_4->it_time.it_value);
  } else {
   FUNC_10(&VAR_9, &VAR_8, &VAR_9);




  }
  FUNC_0(&VAR_10, &VAR_9);
  FUNC_1(&VAR_4->it_callout, FUNC_11(&VAR_10),
   VAR_3, VAR_4);
 } else {
  FUNC_2(&VAR_4->it_callout);
 }

 return (0);
}
