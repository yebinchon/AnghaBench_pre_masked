
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ dtrace_id_t ;
struct TYPE_2__ {scalar_t__ nr_v4_id_done; scalar_t__ nr_v3_id_done; scalar_t__ nr_v2_id_done; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(dtrace_id_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 + 1; VAR_3++) {
  if (VAR_1[VAR_3].nr_v4_id_done == VAR_2 ||
      VAR_1[VAR_3].nr_v3_id_done == VAR_2 ||
      VAR_1[VAR_3].nr_v2_id_done == VAR_2)
   return (1);
 }
 return (0);
}
