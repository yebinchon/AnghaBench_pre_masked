
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {int sort_key; int trace_vcpu; int report_event; } ;
struct option {int dummy; } ;


 struct option const FUNC_0 () ;
 struct option const FUNC_1 (int ,char*,int *,char*) ;
 struct option const FUNC_2 (char,char*,int *,char*,char*) ;
 int FUNC_3 (struct perf_kvm_stat*) ;
 int FUNC_4 (int,char const**,struct option const*,char const* const*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char const* const*,struct option const*) ;

__attribute__((used)) static int
FUNC_7(struct perf_kvm_stat *VAR_0, int VAR_1, const char **VAR_2)
{
 const struct option VAR_3[] = {
  FUNC_2(0, "event", &VAR_0->report_event, "report event",
       "event for reporting: vmexit, mmio, ioport"),
  FUNC_1(0, "vcpu", &VAR_0->trace_vcpu,
       "vcpu id to report"),
  FUNC_2('k', "key", &VAR_0->sort_key, "sort-key",
       "key for sorting: sample(sort by samples number)"
       " time (sort by avg time)"),
  FUNC_0()
 };

 const char * const VAR_4[] = {
  "perf kvm stat report [<options>]",
  ((void*)0)
 };

 FUNC_5();

 if (VAR_1) {
  VAR_1 = FUNC_4(VAR_1, VAR_2,
         VAR_3,
         VAR_4, 0);
  if (VAR_1)
   FUNC_6(VAR_4,
        VAR_3);
 }

 return FUNC_3(VAR_0);
}
