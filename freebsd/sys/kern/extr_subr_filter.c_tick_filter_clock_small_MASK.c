
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct time_filter_small {int cur_time_limit; TYPE_1__* entries; } ;
struct TYPE_2__ {int time_up; int value; } ;


 int VAR_0 ;

void
FUNC_0(struct time_filter_small *VAR_1, uint32_t VAR_2)
{
 int VAR_3;
 uint32_t VAR_4, VAR_5;
 for(VAR_3=(VAR_0-2); VAR_3>=0 ; VAR_3--) {
  VAR_4 = VAR_2 - VAR_1->entries[VAR_3].time_up;
  VAR_5 = (VAR_1->cur_time_limit * (VAR_0-VAR_3))/VAR_0;
  if (VAR_4 >= VAR_5) {




   VAR_1->entries[VAR_3].value = VAR_1->entries[(VAR_3+1)].value;
   VAR_1->entries[VAR_3].time_up = VAR_1->entries[(VAR_3+1)].time_up;
  }

 }
}
