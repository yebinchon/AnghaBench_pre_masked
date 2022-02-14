
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (void const*,struct timespec*,int) ;

inline int
FUNC_1(const void *VAR_1, struct timespec *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof(struct timespec));
 if (VAR_3 == 0) {
  if (VAR_2->tv_sec < 0 ||
      VAR_2->tv_nsec >= 1000000000 ||
      VAR_2->tv_nsec < 0)
   VAR_3 = VAR_0;
 }
 return (VAR_3);
}
