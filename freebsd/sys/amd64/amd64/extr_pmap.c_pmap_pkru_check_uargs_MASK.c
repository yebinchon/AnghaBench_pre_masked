
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {scalar_t__ pm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_0(pmap_t VAR_10, vm_offset_t VAR_11, vm_offset_t VAR_12,
    u_int VAR_13, int VAR_14)
{

 if (VAR_10->pm_type != VAR_7 || VAR_13 > VAR_6 ||
     (VAR_14 & ~(VAR_1 | VAR_0)) != 0)
  return (VAR_4);
 if (VAR_12 <= VAR_11 || VAR_12 > VAR_8)
  return (VAR_3);
 if ((VAR_9 & VAR_2) == 0)
  return (VAR_5);
 return (0);
}
