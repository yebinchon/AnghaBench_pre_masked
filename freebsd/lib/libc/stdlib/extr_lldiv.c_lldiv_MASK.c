
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long quot; long long rem; } ;
typedef TYPE_1__ lldiv_t ;



lldiv_t
FUNC_0(long long VAR_0, long long VAR_1)
{
 lldiv_t VAR_2;

 VAR_2.quot = VAR_0 / VAR_1;
 VAR_2.rem = VAR_0 % VAR_1;






 return (VAR_2);
}
