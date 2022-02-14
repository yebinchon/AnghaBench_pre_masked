
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ maj_flt; scalar_t__ min_flt; scalar_t__ nivcsw; scalar_t__ nvcsw; } ;
struct rusage {int ru_oublock; int ru_inblock; int ru_majflt; int ru_minflt; int ru_nivcsw; int ru_nvcsw; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0, struct rusage *VAR_1)
{
 VAR_1->ru_nvcsw += VAR_0->nvcsw;
 VAR_1->ru_nivcsw += VAR_0->nivcsw;
 VAR_1->ru_minflt += VAR_0->min_flt;
 VAR_1->ru_majflt += VAR_0->maj_flt;
 VAR_1->ru_inblock += FUNC_0(VAR_0);
 VAR_1->ru_oublock += FUNC_1(VAR_0);
}
