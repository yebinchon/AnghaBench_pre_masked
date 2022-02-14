
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;
struct time_filter {TYPE_1__* entries; } ;
struct TYPE_2__ {void* time_up; int value; } ;


 int VAR_0 ;

void
FUNC_0(struct time_filter *VAR_1, uint64_t VAR_2, uint32_t VAR_3)
{
 int VAR_4;





 VAR_1->entries[0].value += VAR_2;
 VAR_1->entries[0].time_up = VAR_3;
 for(VAR_4=1; VAR_4<VAR_0; VAR_4++) {
  VAR_1->entries[VAR_4].value = VAR_1->entries[0].value;
  VAR_1->entries[VAR_4].time_up = VAR_3;
 }
}
