
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_field {scalar_t__ filter_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct ftrace_event_field *VAR_3)
{
 return VAR_3->filter_type == VAR_0 ||
        VAR_3->filter_type == VAR_2 ||
        VAR_3->filter_type == VAR_1;
}
