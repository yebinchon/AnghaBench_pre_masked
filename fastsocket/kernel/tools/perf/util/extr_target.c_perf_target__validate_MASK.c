
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_target {int system_wide; int * uid_str; scalar_t__ tid; int * cpu_list; scalar_t__ pid; } ;
typedef enum perf_target_errno { ____Placeholder_perf_target_errno } perf_target_errno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

enum perf_target_errno FUNC_0(struct perf_target *VAR_6)
{
 enum perf_target_errno VAR_7 = VAR_3;

 if (VAR_6->pid)
  VAR_6->tid = VAR_6->pid;


 if (VAR_6->tid && VAR_6->cpu_list) {
  VAR_6->cpu_list = ((void*)0);
  if (VAR_7 == VAR_3)
   VAR_7 = VAR_0;
 }


 if (VAR_6->tid && VAR_6->uid_str) {
  VAR_6->uid_str = ((void*)0);
  if (VAR_7 == VAR_3)
   VAR_7 = VAR_2;
 }


 if (VAR_6->uid_str && VAR_6->cpu_list) {
  VAR_6->cpu_list = ((void*)0);
  if (VAR_7 == VAR_3)
   VAR_7 = VAR_4;
 }


 if (VAR_6->tid && VAR_6->system_wide) {
  VAR_6->system_wide = 0;
  if (VAR_7 == VAR_3)
   VAR_7 = VAR_1;
 }


 if (VAR_6->uid_str && VAR_6->system_wide) {
  VAR_6->system_wide = 0;
  if (VAR_7 == VAR_3)
   VAR_7 = VAR_5;
 }

 return VAR_7;
}
