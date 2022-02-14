
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_binprm {scalar_t__ cap_effective; } ;
struct cred {scalar_t__ uid; scalar_t__ euid; scalar_t__ egid; scalar_t__ gid; int cap_permitted; } ;


 int FUNC_0 (int ) ;
 struct cred* FUNC_1 () ;

int FUNC_2(struct linux_binprm *VAR_0)
{
 const struct cred *VAR_1 = FUNC_1();

 if (VAR_1->uid != 0) {
  if (VAR_0->cap_effective)
   return 1;
  if (!FUNC_0(VAR_1->cap_permitted))
   return 1;
 }

 return (VAR_1->euid != VAR_1->uid ||
  VAR_1->egid != VAR_1->gid);
}
