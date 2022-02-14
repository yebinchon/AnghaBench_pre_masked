
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int
FUNC_2(const clockid_t VAR_3, struct timespec *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) {
  VAR_4->tv_sec = 0;
  VAR_4->tv_nsec = ((VAR_2 + VAR_1 - 1) / VAR_1);
  if (FUNC_0(VAR_3) == VAR_0) {





   VAR_4->tv_nsec = 1;
  }
 }
 return VAR_5;
}
