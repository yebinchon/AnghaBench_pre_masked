
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_target {scalar_t__ uid_str; scalar_t__ pid; scalar_t__ tid; } ;



__attribute__((used)) static inline bool FUNC_0(struct perf_target *VAR_0)
{
 return VAR_0->tid || VAR_0->pid || VAR_0->uid_str;
}
