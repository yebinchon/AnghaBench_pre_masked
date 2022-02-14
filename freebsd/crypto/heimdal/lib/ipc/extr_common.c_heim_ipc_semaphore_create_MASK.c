
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* heim_isemaphore ;
struct TYPE_4__ {long counter; int cond; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

heim_isemaphore
FUNC_5(long VAR_0)
{



    FUNC_2(0, "no semaphore support w/o pthreads");
    return ((void*)0);
}
