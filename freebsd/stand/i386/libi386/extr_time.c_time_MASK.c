
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 scalar_t__ FUNC_0 () ;

time_t
FUNC_1(time_t *VAR_0)
{
    static time_t VAR_1;
    time_t VAR_2, VAR_3;
    int VAR_4, VAR_5;

    VAR_4 = VAR_5 = 0;
    VAR_3 = FUNC_0();
    do {
 VAR_2 = VAR_3;
 VAR_3 = FUNC_0();
 if (VAR_3 != VAR_2)
     VAR_4 = 0;
    } while (++VAR_4 < 8 && ++VAR_5 < 1000);

    if (VAR_2 < VAR_1)
 VAR_2 += 24 * 3600;
    VAR_1 = VAR_2;

    if (VAR_0 != ((void*)0))
 *VAR_0 = VAR_2;
    return(VAR_2);
}
