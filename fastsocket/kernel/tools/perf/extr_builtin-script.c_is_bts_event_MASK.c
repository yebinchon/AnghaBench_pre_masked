
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ type; int config; int sample_period; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct perf_event_attr *VAR_2)
{
 return ((VAR_2->type == VAR_1) &&
  (VAR_2->config & VAR_0) &&
  (VAR_2->sample_period == 1));
}
