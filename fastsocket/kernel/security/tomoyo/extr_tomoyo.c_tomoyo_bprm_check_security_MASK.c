
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tomoyo_domain_info {int dummy; } ;
struct linux_binprm {TYPE_2__* file; TYPE_1__* cred; } ;
struct TYPE_4__ {int f_path; } ;
struct TYPE_3__ {struct tomoyo_domain_info* security; } ;


 int FUNC_0 (struct tomoyo_domain_info*,int *,int) ;
 int FUNC_1 (struct linux_binprm*) ;

__attribute__((used)) static int FUNC_2(struct linux_binprm *VAR_0)
{
 struct tomoyo_domain_info *VAR_1 = VAR_0->cred->security;





 if (!VAR_1)
  return FUNC_1(VAR_0);




 return FUNC_0(VAR_1, &VAR_0->file->f_path, 1);
}
