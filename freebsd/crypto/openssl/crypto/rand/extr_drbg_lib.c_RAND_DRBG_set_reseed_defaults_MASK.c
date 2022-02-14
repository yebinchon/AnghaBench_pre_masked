
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_0(
                                  unsigned int VAR_6,
                                  unsigned int VAR_7,
                                  time_t VAR_8,
                                  time_t VAR_9
                                  )
{
    if (VAR_6 > VAR_0
        || VAR_7 > VAR_0)
        return 0;

    if (VAR_8 > VAR_1
        || VAR_9 > VAR_1)
        return 0;

    VAR_2 = VAR_6;
    VAR_4 = VAR_7;

    VAR_3 = VAR_8;
    VAR_5 = VAR_9;

    return 1;
}
