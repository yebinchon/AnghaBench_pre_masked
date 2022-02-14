
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int dummy; } ;
struct perf_session {int machines; int host_machine; } ;
typedef int (* machine__process_t ) (int *,struct perf_tool*) ;


 void FUNC_0 (int *,int (*) (int *,struct perf_tool*),struct perf_tool*) ;

__attribute__((used)) static inline
void FUNC_1(struct perf_session *VAR_0,
        struct perf_tool *VAR_1,
        machine__process_t VAR_2)
{
 VAR_2(&VAR_0->host_machine, VAR_1);
 return FUNC_0(&VAR_0->machines, VAR_2, VAR_1);
}
