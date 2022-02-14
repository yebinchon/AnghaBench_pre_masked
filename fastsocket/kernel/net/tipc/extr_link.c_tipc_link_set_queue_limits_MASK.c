
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link {int* queue_limit; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

void FUNC_0(struct link *VAR_9, u32 VAR_10)
{

 VAR_9->queue_limit[VAR_7] = VAR_10;
 VAR_9->queue_limit[VAR_8] = (VAR_10 / 3) * 4;
 VAR_9->queue_limit[VAR_6] = (VAR_10 / 3) * 5;
 VAR_9->queue_limit[VAR_5] = (VAR_10 / 3) * 6;

 VAR_9->queue_limit[VAR_7 + 4] = 300;
 VAR_9->queue_limit[VAR_8 + 4] = 600;
 VAR_9->queue_limit[VAR_6 + 4] = 900;
 VAR_9->queue_limit[VAR_5 + 4] = 1200;
 VAR_9->queue_limit[VAR_1] = 1200;
 VAR_9->queue_limit[VAR_4] = 1200;
 VAR_9->queue_limit[VAR_0] = 2500;
 VAR_9->queue_limit[VAR_3] = 3000;

 VAR_9->queue_limit[VAR_2] = 4000;
}
