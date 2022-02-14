
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hi; int lo; } ;
typedef TYPE_1__ INTERVAL ;


 int FUNC_0 (char*) ;

int
FUNC_1(INTERVAL VAR_0)
{
    if (VAR_0.hi >= 0. && VAR_0.lo <= 0.)
    {
 FUNC_0("divisor  interval  contains  0.\n");
 return (1);
    }
    return (0);
}
