
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ type; scalar_t__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct perf_event_attr*) ;

__attribute__((used)) static bool FUNC_1(struct perf_event_attr *VAR_4)
{
 if ((VAR_4->type == VAR_3) &&
     ((VAR_4->config == VAR_0) ||
      (VAR_4->config == VAR_2) ||
      (VAR_4->config == VAR_1)))
  return 1;

 if (FUNC_0(VAR_4))
  return 1;

 return 0;
}
