
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread_mutex {int dummy; } ;
typedef int pthread_mutex_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct pthread_mutex**) ;
 int FUNC_2 (struct pthread_mutex*,struct timespec const*,int,int) ;

int
FUNC_3(pthread_mutex_t * __restrict VAR_0,
    const struct timespec * __restrict VAR_1)
{
 struct pthread_mutex *VAR_2;
 int VAR_3;

 FUNC_0();
 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_2, VAR_1, 0, 0);
 return (VAR_3);
}
