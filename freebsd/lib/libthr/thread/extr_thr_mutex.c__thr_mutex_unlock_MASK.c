
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int dummy; } ;
typedef struct pthread_mutex* pthread_mutex_t ;


 int VAR_0 ;
 struct pthread_mutex* VAR_1 ;
 struct pthread_mutex* FUNC_0 (struct pthread_mutex**,int ) ;
 int FUNC_1 (struct pthread_mutex*,int,int *) ;
 int FUNC_2 (struct pthread_mutex*,int *) ;

int
FUNC_3(pthread_mutex_t *VAR_2)
{
 struct pthread_mutex *VAR_3;

 if (*VAR_2 == VAR_1) {
  VAR_3 = FUNC_0(VAR_2, 0);
  if (VAR_3 == ((void*)0))
   return (VAR_0);
  FUNC_2(VAR_3, ((void*)0));
 } else {
  VAR_3 = *VAR_2;
 }
 return (FUNC_1(VAR_3, 0, ((void*)0)));
}
