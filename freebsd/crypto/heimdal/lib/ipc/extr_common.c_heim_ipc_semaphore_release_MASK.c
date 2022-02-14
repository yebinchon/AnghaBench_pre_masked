
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* heim_isemaphore ;
typedef int dispatch_semaphore_t ;
struct TYPE_4__ {scalar_t__ counter; int cond; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(heim_isemaphore VAR_0)
{



    FUNC_6(0, "no semaphore support w/o pthreads");
}
