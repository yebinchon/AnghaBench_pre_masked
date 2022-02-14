
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct time_filter {int cur_time_limit; TYPE_1__* entries; } ;
struct TYPE_2__ {int value; scalar_t__ time_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct time_filter *VAR_4, int VAR_5, uint32_t VAR_6)
{
 uint64_t VAR_7;
 int VAR_8;






 if ((VAR_5 != VAR_2) &&
     (VAR_5 != VAR_1))
  return(VAR_0);

 if (VAR_6 < VAR_3)
  return(VAR_0);

 if (VAR_5 == VAR_2)
  VAR_7 = 0xffffffffffffffff;
 else
  VAR_7 = 0;

 for(VAR_8=0; VAR_8<VAR_3; VAR_8++) {
  VAR_4->entries[VAR_8].value = VAR_7;
  VAR_4->entries[VAR_8].time_up = 0;
 }
 VAR_4->cur_time_limit = VAR_6;
 return(0);
}
