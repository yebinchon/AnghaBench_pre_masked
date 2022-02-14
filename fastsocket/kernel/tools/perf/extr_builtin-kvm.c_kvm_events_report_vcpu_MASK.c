
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {int trace_vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_kvm_stat*) ;
 int FUNC_1 (struct perf_kvm_stat*) ;
 int FUNC_2 (struct perf_kvm_stat*) ;
 int FUNC_3 (struct perf_kvm_stat*) ;
 int FUNC_4 (struct perf_kvm_stat*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct perf_kvm_stat*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct perf_kvm_stat *VAR_1)
{
 int VAR_2 = -VAR_0;
 int VAR_3 = VAR_1->trace_vcpu;

 if (!FUNC_7(VAR_3))
  goto exit;

 if (!FUNC_4(VAR_1))
  goto exit;

 if (!FUNC_3(VAR_1))
  goto exit;

 FUNC_0(VAR_1);
 FUNC_5();

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto exit;

 FUNC_6(VAR_1);
 FUNC_1(VAR_1);

exit:
 return VAR_2;
}
