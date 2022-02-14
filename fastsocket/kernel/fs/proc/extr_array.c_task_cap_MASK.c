
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct seq_file {int dummy; } ;
struct cred {int cap_bset; int cap_effective; int cap_permitted; int cap_inheritable; } ;
typedef int kernel_cap_t ;


 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,int *) ;

__attribute__((used)) static inline void FUNC_4(struct seq_file *VAR_0, struct task_struct *VAR_1)
{
 const struct cred *VAR_2;
 kernel_cap_t VAR_3, VAR_4, VAR_5, VAR_6;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->cap_inheritable;
 VAR_4 = VAR_2->cap_permitted;
 VAR_5 = VAR_2->cap_effective;
 VAR_6 = VAR_2->cap_bset;
 FUNC_2();

 FUNC_3(VAR_0, "CapInh:\t", &VAR_3);
 FUNC_3(VAR_0, "CapPrm:\t", &VAR_4);
 FUNC_3(VAR_0, "CapEff:\t", &VAR_5);
 FUNC_3(VAR_0, "CapBnd:\t", &VAR_6);
}
