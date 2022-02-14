
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* heim_isemaphore ;
typedef int dispatch_semaphore_t ;
struct TYPE_3__ {scalar_t__ counter; int cond; int mutex; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;

long
FUNC_5(heim_isemaphore VAR_1)
{



    FUNC_3(0, "no semaphore support w/o pthreads");
    return VAR_0;
}
