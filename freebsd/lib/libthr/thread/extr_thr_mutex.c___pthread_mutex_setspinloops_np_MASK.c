
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_spinloops; } ;
typedef int pthread_mutex_t ;


 int FUNC_0 (int *,struct pthread_mutex**) ;

int
FUNC_1(pthread_mutex_t *VAR_0, int VAR_1)
{
 struct pthread_mutex *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3 == 0)
  VAR_2->m_spinloops = VAR_1;
 return (VAR_3);
}
