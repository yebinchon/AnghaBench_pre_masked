
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_pt_fpreg {int st_space; int fos; int foo; int fcs; int fip; int twd; int swd; int cwd; } ;
struct fpreg {int fpr_acc; int * fpr_env; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct fpreg *VAR_0, struct linux_pt_fpreg *VAR_1)
{
 VAR_1->cwd = VAR_0->fpr_env[0];
 VAR_1->swd = VAR_0->fpr_env[1];
 VAR_1->twd = VAR_0->fpr_env[2];
 VAR_1->fip = VAR_0->fpr_env[3];
 VAR_1->fcs = VAR_0->fpr_env[4];
 VAR_1->foo = VAR_0->fpr_env[5];
 VAR_1->fos = VAR_0->fpr_env[6];
 FUNC_0(VAR_0->fpr_acc, VAR_1->st_space, sizeof(VAR_1->st_space));
}
