
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct semid_kernel {TYPE_1__* cred; } ;
struct prison {int dummy; } ;
struct TYPE_2__ {struct prison* cr_prison; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct prison*,struct prison*) ;

__attribute__((used)) static int
FUNC_1(struct prison *VAR_1, struct semid_kernel *VAR_2)
{

 if (VAR_2->cred == ((void*)0) ||
     !(VAR_1 == VAR_2->cred->cr_prison ||
       FUNC_0(VAR_1, VAR_2->cred->cr_prison)))
  return (VAR_0);
 return (0);
}
