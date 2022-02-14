
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ddg_scc_ptr ;
struct TYPE_2__ {int recurrence_length; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  int VAR_2 = (*(ddg_scc_ptr *)VAR_0)->recurrence_length;
  int VAR_3 = (*(ddg_scc_ptr *)VAR_1)->recurrence_length;
  return ((VAR_3 > VAR_2) - (VAR_3 < VAR_2));

}
