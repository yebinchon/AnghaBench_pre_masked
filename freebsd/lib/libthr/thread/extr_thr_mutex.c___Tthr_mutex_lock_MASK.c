
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int dummy; } ;
typedef int pthread_mutex_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct pthread_mutex**) ;
 int FUNC_2 (struct pthread_mutex*,int *,int,int) ;

int
FUNC_3(pthread_mutex_t *VAR_0)
{
 struct pthread_mutex *VAR_1;
 int VAR_2;

 FUNC_0();
 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 if (VAR_2 == 0)
  VAR_2 = FUNC_2(VAR_1, ((void*)0), 0, 0);
 return (VAR_2);
}
