
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pm_npmc; scalar_t__ pm_ncpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(int VAR_5)
{
 if (VAR_4 == -1) {
  VAR_3 = VAR_1;
  return (-1);
 }

 if (VAR_5 < 0 || VAR_5 >= (int) VAR_2.pm_ncpu) {
  VAR_3 = VAR_0;
  return (-1);
 }

 return (VAR_2.pm_npmc);
}
