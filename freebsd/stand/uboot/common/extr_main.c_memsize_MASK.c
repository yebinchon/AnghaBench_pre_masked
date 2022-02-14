
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct sys_info {int mr_no; TYPE_1__* mr; } ;
struct TYPE_2__ {int flags; scalar_t__ size; } ;



__attribute__((used)) static uint64_t
FUNC_0(struct sys_info *VAR_0, int VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->mr_no; VAR_3++)
  if (VAR_0->mr[VAR_3].flags == VAR_1 && VAR_0->mr[VAR_3].size)
   VAR_2 += (VAR_0->mr[VAR_3].size);

 return (VAR_2);
}
