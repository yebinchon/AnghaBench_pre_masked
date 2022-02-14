
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct TYPE_2__ {scalar_t__ tv_sec; int tv_usec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_1__ it_interval; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
typedef int mask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int const*,int *,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,struct itimerval*,int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(const sigset_t *VAR_6, siginfo_t *VAR_7,
    const struct timespec *VAR_8)
{
 struct itimerval VAR_9;
 sigset_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_7 == ((void*)0));

 FUNC_1(FUNC_5(&VAR_10) == 0);
 FUNC_1(FUNC_4(&VAR_10, VAR_2) == 0);
 FUNC_1(FUNC_6(VAR_3, &VAR_10, ((void*)0)) == 0);

 FUNC_8(&VAR_9.it_interval);
 VAR_9.it_value.tv_sec = VAR_8->tv_sec;
 VAR_9.it_value.tv_usec = VAR_8->tv_nsec / 1000;
 if (VAR_9.it_value.tv_sec == 0 && VAR_9.it_value.tv_usec == 0)
  VAR_9.it_value.tv_usec = 1;
 FUNC_1(FUNC_3(VAR_1, &VAR_9, ((void*)0)) == 0);

 FUNC_2(VAR_6, &VAR_10, sizeof(VAR_10));
 FUNC_1(FUNC_4(&VAR_10, VAR_2) == 0);

 FUNC_1(FUNC_7(&VAR_10, &VAR_12) == 0);
 VAR_11 = VAR_5;

 FUNC_8(&VAR_9.it_interval);
 FUNC_8(&VAR_9.it_value);
 FUNC_1(FUNC_3(VAR_1, &VAR_9, ((void*)0)) == 0);

 FUNC_1(FUNC_5(&VAR_10) == 0);
 FUNC_1(FUNC_4(&VAR_10, VAR_2) == 0);
 FUNC_1(FUNC_6(VAR_4, &VAR_10, ((void*)0)) == 0);

 if (VAR_12 == VAR_2) {
  VAR_5 = VAR_0;
  VAR_12 = -1;
 } else {
  VAR_5 = VAR_11;
 }

 return (VAR_12);
}
