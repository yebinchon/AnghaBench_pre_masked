
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct time_filter {TYPE_1__* entries; } ;
struct TYPE_2__ {int time_up; } ;


 int VAR_0 ;

void
FUNC_0(struct time_filter *VAR_1, uint32_t VAR_2)
{




 int VAR_3;

 for(VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  VAR_1->entries[VAR_3].time_up += VAR_2;
 }
}
