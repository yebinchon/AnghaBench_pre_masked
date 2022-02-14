
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef scalar_t__ isc_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline void
FUNC_1(struct timeval *VAR_4) {
 isc_boolean_t VAR_5 = VAR_0;

 if (VAR_4->tv_usec < 0) {
  VAR_5 = VAR_1;
  do {
   VAR_4->tv_sec -= 1;
   VAR_4->tv_usec += VAR_3;
  } while (VAR_4->tv_usec < 0);
 } else if (VAR_4->tv_usec >= VAR_3) {
  VAR_5 = VAR_1;
  do {
   VAR_4->tv_sec += 1;
   VAR_4->tv_usec -= VAR_3;
  } while (VAR_4->tv_usec >=VAR_3);
 }



 if (VAR_5)
  (void)FUNC_0(VAR_2, "gettimeofday returned bad tv_usec: corrected");
}
