
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void pthread_cond_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,int *) ;

__attribute__((used)) static void *
FUNC_3(unsigned VAR_0)
{
 pthread_cond_t *VAR_1 = FUNC_1(sizeof(pthread_cond_t));
 if (!VAR_1)
  return ((void*)0);
 if (FUNC_2(VAR_1, ((void*)0))) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
