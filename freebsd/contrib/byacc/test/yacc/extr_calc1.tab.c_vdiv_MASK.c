
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double hi; double lo; } ;
typedef TYPE_1__ INTERVAL ;


 TYPE_1__ FUNC_0 (double,double,double,double) ;

INTERVAL
FUNC_1(double VAR_0, double VAR_1, INTERVAL VAR_2)
{
    return (FUNC_0(VAR_0 / VAR_2.hi, VAR_0 / VAR_2.lo, VAR_1 / VAR_2.hi, VAR_1 / VAR_2.lo));
}
