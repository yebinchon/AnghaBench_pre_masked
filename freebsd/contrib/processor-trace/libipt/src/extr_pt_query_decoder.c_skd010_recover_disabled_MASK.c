
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_time_cal {int dummy; } ;
struct pt_time {int dummy; } ;
struct TYPE_2__ {scalar_t__ begin; } ;
struct pt_query_decoder {TYPE_1__ config; scalar_t__ pos; struct pt_time_cal tcal; struct pt_time time; } ;


 int FUNC_0 (struct pt_query_decoder*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_query_decoder *VAR_1,
       const struct pt_time_cal *VAR_2,
       const struct pt_time *VAR_3, uint64_t VAR_4)
{
 if (!VAR_1 || !VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_1->time = *VAR_3;
 VAR_1->tcal = *VAR_2;


 VAR_1->pos = VAR_1->config.begin + VAR_4;

 return FUNC_0(VAR_1);
}
