
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct promise_raid_conf {int total_disks; TYPE_1__* disks; } ;
struct TYPE_2__ {scalar_t__ id; } ;



__attribute__((used)) static int
FUNC_0(struct promise_raid_conf *VAR_0, uint64_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->total_disks; VAR_2++) {
  if (VAR_0->disks[VAR_2].id == VAR_1)
   return (VAR_2);
 }
 return (-1);
}
