
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,void* (*) (void*),void*) ;

int
FUNC_2(pthread_t *VAR_0, const pthread_attr_t *VAR_1,
    void *(*VAR_2)(void *), void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4 == 0);

 return 0;
}
