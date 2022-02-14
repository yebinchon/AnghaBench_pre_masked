
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_kvm_stat {int exit_reasons_size; int exit_reasons_isa; struct exit_reasons_table* exit_reasons; } ;
struct exit_reasons_table {scalar_t__ exit_code; char const* reason; } ;


 int FUNC_0 (char*,unsigned long long,int ) ;

__attribute__((used)) static const char *FUNC_1(struct perf_kvm_stat *VAR_0, u64 VAR_1)
{
 int VAR_2 = VAR_0->exit_reasons_size;
 struct exit_reasons_table *VAR_3 = VAR_0->exit_reasons;

 while (VAR_2--) {
  if (VAR_3->exit_code == VAR_1)
   return VAR_3->reason;
  VAR_3++;
 }

 FUNC_0("unknown kvm exit code:%lld on %s\n",
  (unsigned long long)VAR_1, VAR_0->exit_reasons_isa);
 return "UNKNOWN";
}
