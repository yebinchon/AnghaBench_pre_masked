
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tdq {int tdq_load; } ;
struct TYPE_2__ {int td_flags; } ;


 int VAR_0 ;
 struct tdq* FUNC_0 () ;
 TYPE_1__* VAR_1 ;

int
FUNC_1(void)
{
 struct tdq *VAR_2;
 int VAR_3;

 VAR_3 = 1;

 VAR_2 = FUNC_0();
 if ((VAR_1->td_flags & VAR_0) != 0) {
  if (VAR_2->tdq_load > 0)
   goto out;
 } else
  if (VAR_2->tdq_load - 1 > 0)
   goto out;
 VAR_3 = 0;
out:
 return (VAR_3);
}
