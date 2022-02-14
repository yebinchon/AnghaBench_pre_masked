
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_getdriverstats {int pm_log_sweeps; int pm_buffer_requests_failed; int pm_buffer_requests; int pm_syscall_errors; int pm_syscalls; int pm_intr_bufferfull; int pm_intr_processed; int pm_intr_ignored; } ;
struct pmc_driverstats {int pm_log_sweeps; int pm_buffer_requests_failed; int pm_buffer_requests; int pm_syscall_errors; int pm_syscalls; int pm_intr_bufferfull; int pm_intr_processed; int pm_intr_ignored; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct pmc_op_getdriverstats*) ;

int
FUNC_1(struct pmc_driverstats *VAR_1)
{
 struct pmc_op_getdriverstats VAR_2;

 if (FUNC_0(VAR_0, &VAR_2) < 0)
  return (-1);


 VAR_1->pm_intr_ignored = VAR_2.pm_intr_ignored;
 VAR_1->pm_intr_processed = VAR_2.pm_intr_processed;
 VAR_1->pm_intr_bufferfull = VAR_2.pm_intr_bufferfull;
 VAR_1->pm_syscalls = VAR_2.pm_syscalls;
 VAR_1->pm_syscall_errors = VAR_2.pm_syscall_errors;
 VAR_1->pm_buffer_requests = VAR_2.pm_buffer_requests;
 VAR_1->pm_buffer_requests_failed = VAR_2.pm_buffer_requests_failed;
 VAR_1->pm_log_sweeps = VAR_2.pm_log_sweeps;
 return (0);
}
