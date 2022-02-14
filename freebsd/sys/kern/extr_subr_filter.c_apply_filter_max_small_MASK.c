
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct time_filter_small {TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ value; scalar_t__ time_up; } ;


 int VAR_0 ;
 int FUNC_0 (struct time_filter_small*,scalar_t__,scalar_t__) ;

uint32_t
FUNC_1(struct time_filter_small *VAR_1,
         uint32_t VAR_2, uint32_t VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2 >= VAR_1->entries[0].value) {

  for(VAR_4=0; VAR_4<VAR_0; VAR_4++) {
   VAR_1->entries[VAR_4].value = VAR_2;
   VAR_1->entries[VAR_4].time_up = VAR_3;
  }
  return (VAR_1->entries[0].value);
 }
 for (VAR_5=1; VAR_5<VAR_0; VAR_5++) {
  if (VAR_2 >= VAR_1->entries[VAR_5].value) {
   for(VAR_4=VAR_5; VAR_4<VAR_0; VAR_4++) {
    VAR_1->entries[VAR_4].value = VAR_2;
    VAR_1->entries[VAR_4].time_up = VAR_3;
   }
   break;
  }
 }
 FUNC_0(VAR_1, VAR_2, VAR_3);
 return (VAR_1->entries[0].value);
}
