
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int pthread_mutex_t ;
typedef int pthread_cond_t ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct timeval*,struct timeval const*,struct timeval*) ;
 int FUNC_2 (int *,int *,struct timespec*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, void *VAR_2, const struct timeval *VAR_3)
{
 int VAR_4;
 pthread_cond_t *VAR_5 = VAR_1;
 pthread_mutex_t *VAR_6 = VAR_2;

 if (VAR_3) {
  struct timeval VAR_7, VAR_8;
  struct timespec VAR_9;
  FUNC_0(&VAR_7, ((void*)0));
  FUNC_1(&VAR_7, VAR_3, &VAR_8);
  VAR_9.tv_sec = VAR_8.tv_sec;
  VAR_9.tv_nsec = VAR_8.tv_usec*1000;
  VAR_4 = FUNC_2(VAR_5, VAR_6, &VAR_9);
  if (VAR_4 == VAR_0)
   return 1;
  else if (VAR_4)
   return -1;
  else
   return 0;
 } else {
  VAR_4 = FUNC_3(VAR_5, VAR_6);
  return VAR_4 ? -1 : 0;
 }
}
