
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct rate_data {int* timestamp; int* qps; } ;


 int VAR_0 ;

int FUNC_0(void* VAR_1, time_t VAR_2)
{
 struct rate_data* VAR_3 = (struct rate_data*)VAR_1;
 int VAR_4, VAR_5 = 0;
 for(VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  if(VAR_2-VAR_3->timestamp[VAR_4] <= VAR_0) {
   if(VAR_3->qps[VAR_4] > VAR_5)
    VAR_5 = VAR_3->qps[VAR_4];
  }
 }
 return VAR_5;
}
