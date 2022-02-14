
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_pid_debugfs_entries {int target; int sampling_period; int coeff_p; int coeff_i; int coeff_d; int smoothing_shift; int sharpen_factor; int sharpen_duration; int norm_offset; } ;
struct rc_pid_info {struct rc_pid_info* rinfo; struct rc_pid_debugfs_entries dentries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rc_pid_info*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct rc_pid_info *VAR_1 = VAR_0;
 FUNC_1(VAR_1->rinfo);
 FUNC_1(VAR_1);
}
