
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {int tm_hour; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int*) ;

__attribute__((used)) static time_t
FUNC_1(time_t VAR_1, time_t VAR_2)
{
 time_t VAR_3;
 time_t VAR_4;

 VAR_3 = (FUNC_0(&VAR_1)->tm_hour + 1) % 24;
 VAR_4 = (FUNC_0(&VAR_2)->tm_hour + 1) % 24;
 return (VAR_2 - VAR_1) + (VAR_3 - VAR_4) * VAR_0;
}
