
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef void kthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,void* (*) (void*),void*,int ,scalar_t__*) ;

kthread_t *
FUNC_2(void (*VAR_1)(), void *VAR_2)
{
 thread_t VAR_3;

 FUNC_0(FUNC_1(0, 0, (void *(*)(void *))VAR_1, VAR_2, VAR_0,
     &VAR_3) == 0);

 return ((void *)(uintptr_t)VAR_3);
}
