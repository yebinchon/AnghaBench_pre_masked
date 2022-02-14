
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
struct time_filter {int cur_time_limit; TYPE_1__* entries; } ;
struct TYPE_2__ {void* time_up; void* value; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct time_filter *VAR_1, uint64_t VAR_2, uint32_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 for(VAR_4=0; VAR_4<(VAR_0-1); VAR_4++) {
  VAR_7 = VAR_3 - VAR_1->entries[VAR_4].time_up;
  VAR_8 = (VAR_1->cur_time_limit * (VAR_0-VAR_4))/VAR_0;
  if (VAR_7 >= VAR_8) {
   VAR_6 = 0;
   for(VAR_5=(VAR_4+1); VAR_5<VAR_0; VAR_5++) {
    if (VAR_1->entries[VAR_4].time_up < VAR_1->entries[VAR_5].time_up) {
     VAR_1->entries[VAR_4].value = VAR_1->entries[VAR_5].value;
     VAR_1->entries[VAR_4].time_up = VAR_1->entries[VAR_5].time_up;
     VAR_6 = 1;
     break;
    }
   }
   if (VAR_6 == 0) {

    VAR_1->entries[VAR_4].value = VAR_2;
    VAR_1->entries[VAR_4].time_up = VAR_3;
   }
  }
 }
 VAR_4 = VAR_0-1;
 VAR_7 = VAR_3 - VAR_1->entries[VAR_4].time_up;
 VAR_8 = (VAR_1->cur_time_limit * (VAR_0-VAR_4))/VAR_0;
 if (VAR_7 >= VAR_8) {
  VAR_1->entries[VAR_4].value = VAR_2;
  VAR_1->entries[VAR_4].time_up = VAR_3;
 }
}
