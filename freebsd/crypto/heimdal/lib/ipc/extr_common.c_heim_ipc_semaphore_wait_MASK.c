
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef TYPE_1__* heim_isemaphore ;
typedef int dispatch_semaphore_t ;
struct TYPE_3__ {scalar_t__ counter; int mutex; int cond; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 long FUNC_2 (int ,int) ;
 long VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *,struct timespec*) ;
 int FUNC_5 (int *,int *) ;

long
FUNC_6(heim_isemaphore VAR_4, time_t VAR_5)
{
    FUNC_3(0, "no semaphore support w/o pthreads");
    return 0;
}
