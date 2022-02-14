
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u_char ;
typedef scalar_t__ time_t ;


 double FUNC_0 (double const*) ;

__attribute__((used)) static time_t
FUNC_1(const u_char *VAR_0)
{
    double VAR_1;
    time_t VAR_2;


    VAR_1 = (FUNC_0(VAR_0 + 4) * 256.0 + VAR_0[3]) * (1.0e-7 * (1 << 24));


    VAR_1 -= 369.0 * 365.25 * 24 * 60 * 60;


    VAR_1 += (3 * 24 * 60 * 60 + 6 * 60 * 60 + 2);

    if (VAR_1 < 0)
 return(0);

    VAR_2 = (time_t)VAR_1;

    return(VAR_2);
}
