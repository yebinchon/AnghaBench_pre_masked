
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int cpuset_t ;
struct TYPE_2__ {scalar_t__ core_mask; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 () ;

void
FUNC_3(cpuset_t *VAR_1)
{
 uint64_t VAR_2 = FUNC_2()->core_mask;
 uint64_t VAR_3, VAR_4;

 FUNC_1(VAR_1);
 for (VAR_3 = 0, VAR_4 = 1 ; VAR_3 < VAR_0; VAR_3++, VAR_4 <<= 1)
  if (VAR_2 & VAR_4)
   FUNC_0(VAR_3, VAR_1);
}
