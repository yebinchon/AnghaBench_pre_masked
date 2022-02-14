
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int ordered_samples; int comm; int sample; } ;
struct perf_kvm_stat {char* exit_reasons_isa; struct perf_tool tool; int session; int exit_reasons_size; int exit_reasons; int file_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int,struct perf_tool*) ;
 int FUNC_4 (int ,struct perf_tool*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct perf_kvm_stat *VAR_5)
{
 int VAR_6;

 struct perf_tool VAR_7 = {
  .sample = VAR_3,
  .comm = VAR_2,
  .ordered_samples = 1,
 };

 VAR_5->tool = VAR_7;
 VAR_5->session = FUNC_3(VAR_5->file_name, VAR_1, 0, 0,
      &VAR_5->tool);
 if (!VAR_5->session) {
  FUNC_5("Initializing perf session failed\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_5->session, "kvm record"))
  return -VAR_0;





 VAR_6 = FUNC_1(VAR_5->session);

 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 == 1) {
  VAR_5->exit_reasons = VAR_4;
  VAR_5->exit_reasons_size = FUNC_0(VAR_4);
  VAR_5->exit_reasons_isa = "VMX";
 }

 return FUNC_4(VAR_5->session, &VAR_5->tool);
}
