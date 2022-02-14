
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct perf_session {struct machine host_machine; } ;



__attribute__((used)) static inline
struct machine *FUNC_0(struct perf_session *VAR_0)
{
 return &VAR_0->host_machine;
}
