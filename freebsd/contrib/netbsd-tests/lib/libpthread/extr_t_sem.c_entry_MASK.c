
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sem_t ;
typedef int pthread_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void *
FUNC_3(void * VAR_0)
{
 pthread_t VAR_1 = FUNC_1();
 sem_t *VAR_2 = (sem_t *) VAR_0;

 FUNC_0("Thread %p waiting for semaphore...\n", VAR_1);
 FUNC_2(VAR_2);
 FUNC_0("Thread %p got semaphore\n", VAR_1);

 return ((void*)0);
}
