
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_binprm {TYPE_1__* cred; int filename; scalar_t__ cred_prepared; } ;
struct TYPE_2__ {int * security; } ;


 int FUNC_0 (struct linux_binprm*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct linux_binprm *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;





 if (VAR_1->cred_prepared)
  return 0;




 if (!VAR_0)
  FUNC_1(VAR_1->filename);




 VAR_1->cred->security = ((void*)0);
 return 0;
}
