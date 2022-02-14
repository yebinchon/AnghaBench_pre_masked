
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* timer_t ;
struct itimerspec {int dummy; } ;
struct TYPE_3__ {int oshandle; } ;


 int FUNC_0 (int ,struct itimerspec*) ;

int
FUNC_1(timer_t VAR_0, struct itimerspec *VAR_1)
{

 return FUNC_0(VAR_0->oshandle, VAR_1);
}
