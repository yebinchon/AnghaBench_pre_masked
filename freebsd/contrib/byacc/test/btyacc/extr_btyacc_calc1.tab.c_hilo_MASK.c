
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double hi; double lo; } ;
typedef TYPE_1__ INTERVAL ;



__attribute__((used)) static INTERVAL
FUNC_0(double VAR_0, double VAR_1, double VAR_2, double VAR_3)
{


    INTERVAL VAR_4;

    if (VAR_0 > VAR_1)
    {
 VAR_4.hi = VAR_0;
 VAR_4.lo = VAR_1;
    }
    else
    {
 VAR_4.hi = VAR_1;
 VAR_4.lo = VAR_0;
    }

    if (VAR_2 > VAR_3)
    {
 if (VAR_2 > VAR_4.hi)
     VAR_4.hi = VAR_2;
 if (VAR_3 < VAR_4.lo)
     VAR_4.lo = VAR_3;
    }
    else
    {
 if (VAR_3 > VAR_4.hi)
     VAR_4.hi = VAR_3;
 if (VAR_2 < VAR_4.lo)
     VAR_4.lo = VAR_2;
    }
    return (VAR_4);
}
