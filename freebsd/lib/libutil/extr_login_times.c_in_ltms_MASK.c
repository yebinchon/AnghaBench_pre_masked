
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_4__ {scalar_t__ lt_dow; } ;
typedef TYPE_1__ login_time_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,struct tm*,int *) ;

int
FUNC_1(const login_time_t *VAR_2, struct tm *VAR_3, time_t *VAR_4)
{
    int VAR_5 = 0;

    while (VAR_5 < VAR_0 && VAR_2[VAR_5].lt_dow != VAR_1) {
 if (FUNC_0(VAR_2 + VAR_5, VAR_3, VAR_4))
     return (VAR_5);
 VAR_5++;
    }
    return (-1);
}
