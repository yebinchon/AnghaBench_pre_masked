
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_1 (struct perf_sample_data*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(u32 VAR_1, u64 VAR_2, struct pt_regs *VAR_3, u64 VAR_4)
{
 struct perf_sample_data VAR_5;
 int VAR_6;

 FUNC_4();
 VAR_6 = FUNC_2();
 if (VAR_6 < 0)
  return;

 FUNC_1(&VAR_5, VAR_4);

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_3);

 FUNC_3(VAR_6);
 FUNC_5();
}
