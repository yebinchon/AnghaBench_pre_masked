
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_1__ it_value; } ;
struct itimer {struct itimerspec it_time; int it_clockid; int it_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (TYPE_1__*,struct timespec*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct itimer *VAR_1, struct itimerspec *VAR_2)
{
 struct timespec VAR_3;

 FUNC_0(&VAR_1->it_mtx, VAR_0);

 FUNC_1(VAR_1->it_clockid, &VAR_3);
 *VAR_2 = VAR_1->it_time;
 if (VAR_2->it_value.tv_sec != 0 || VAR_2->it_value.tv_nsec != 0) {
  FUNC_2(&VAR_2->it_value, &VAR_3, &VAR_2->it_value);
  if (VAR_2->it_value.tv_sec < 0 ||
      (VAR_2->it_value.tv_sec == 0 &&
       VAR_2->it_value.tv_nsec == 0)) {
   VAR_2->it_value.tv_sec = 0;
   VAR_2->it_value.tv_nsec = 1;
  }
 }
 return (0);
}
