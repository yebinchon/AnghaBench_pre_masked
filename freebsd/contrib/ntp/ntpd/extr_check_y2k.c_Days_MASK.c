
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long
FUNC_0 ( int VAR_0 )
{
    long VAR_1;

    VAR_1 = VAR_0 * 365;
    if ( VAR_0 >= 1 )
    {

 VAR_1 += (VAR_0+3) / 4;
 VAR_1 -= (VAR_0-1) / 100;
 VAR_1 += (VAR_0-1) / 400;
    }

    return VAR_1;
}
