
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("wakeup trace: Couldn't activate tracepoint"
   " probe to kernel_sched_wakeup\n");
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0("wakeup trace: Couldn't activate tracepoint"
   " probe to kernel_sched_wakeup_new\n");
  goto fail_deprobe;
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_0("sched trace: Couldn't activate tracepoint"
   " probe to kernel_sched_switch\n");
  goto fail_deprobe_wake_new;
 }

 return VAR_2;
fail_deprobe_wake_new:
 FUNC_5(VAR_1);
fail_deprobe:
 FUNC_4(VAR_1);
 return VAR_2;
}
