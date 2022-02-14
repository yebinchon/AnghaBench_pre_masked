
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct perf_session {int machines; struct machine host_machine; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 struct machine* FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static inline
struct machine *FUNC_1(struct perf_session *VAR_1, pid_t VAR_2)
{
 if (VAR_2 == VAR_0)
  return &VAR_1->host_machine;
 return FUNC_0(&VAR_1->machines, VAR_2);
}
