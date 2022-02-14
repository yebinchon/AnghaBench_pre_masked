
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cond; } ;
struct TYPE_3__ {scalar_t__ show_total_period; scalar_t__ show_nr_samples; scalar_t__ show_cpu_utilization; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;

void FUNC_0(void)
{
 if (VAR_8.show_cpu_utilization) {
  VAR_7[VAR_2].cond = 1;
  VAR_7[VAR_3].cond = 1;

  if (VAR_6) {
   VAR_7[VAR_0].cond = 1;
   VAR_7[VAR_1].cond = 1;
  }
 }

 if (VAR_8.show_nr_samples)
  VAR_7[VAR_5].cond = 1;

 if (VAR_8.show_total_period)
  VAR_7[VAR_4].cond = 1;
}
