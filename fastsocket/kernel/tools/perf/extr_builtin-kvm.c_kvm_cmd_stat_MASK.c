
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {char const* file_name; int trace_vcpu; char* report_event; char* sort_key; char* exit_reasons_isa; int exit_reasons_size; int exit_reasons; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char const**,int *) ;
 int FUNC_2 (struct perf_kvm_stat*,int,char const**) ;
 int FUNC_3 (struct perf_kvm_stat*,int,char const**) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, int VAR_2, const char **VAR_3)
{
 struct perf_kvm_stat VAR_4 = {
  .file_name = VAR_1,

  .trace_vcpu = -1,
  .report_event = "vmexit",
  .sort_key = "sample",

  .exit_reasons = VAR_0,
  .exit_reasons_size = FUNC_0(VAR_0),
  .exit_reasons_isa = "SVM",
 };

 if (VAR_2 == 1) {
  FUNC_4();
  goto perf_stat;
 }

 if (!FUNC_5(VAR_3[1], "rec", 3))
  return FUNC_2(&VAR_4, VAR_2 - 1, VAR_3 + 1);

 if (!FUNC_5(VAR_3[1], "rep", 3))
  return FUNC_3(&VAR_4, VAR_2 - 1 , VAR_3 + 1);

perf_stat:
 return FUNC_1(VAR_2, VAR_3, ((void*)0));
}
