
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int dummy; } ;
typedef struct pthread_mutex* pthread_mutex_t ;


 scalar_t__ FUNC_0 (struct pthread_mutex*) ;
 struct pthread_mutex* VAR_0 ;
 struct pthread_mutex* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct pthread_mutex* FUNC_2 (struct pthread_mutex**,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pthread_mutex*,int *) ;

int
FUNC_5(pthread_mutex_t *VAR_2)
{
 struct pthread_mutex *VAR_3;

 if (*VAR_2 == VAR_1) {
  VAR_3 = FUNC_2(VAR_2, 0);
  if (VAR_3 == ((void*)0))
   return (0);
  FUNC_4(VAR_3, ((void*)0));
 } else {
  VAR_3 = *VAR_2;
  if (VAR_3 <= VAR_0)
   return (0);
 }
 return (FUNC_0(VAR_3) == FUNC_1(FUNC_3()));
}
