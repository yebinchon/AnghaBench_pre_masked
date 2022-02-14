
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_callchain_entry {int dummy; } ;
struct callchain_cpus_entries {struct perf_callchain_entry** cpu_entries; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct callchain_cpus_entries* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static struct perf_callchain_entry *FUNC_4(int *VAR_2)
{
 int VAR_3;
 struct callchain_cpus_entries *VAR_4;

 *VAR_2 = FUNC_1(FUNC_0(VAR_1));
 if (*VAR_2 == -1)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_3();

 return &VAR_4->cpu_entries[VAR_3][*VAR_2];
}
