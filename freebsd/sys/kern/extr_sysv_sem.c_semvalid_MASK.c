
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; scalar_t__ seq; } ;
struct TYPE_4__ {TYPE_1__ sem_perm; } ;
struct semid_kernel {TYPE_2__ u; } ;
struct prison {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct prison*,struct semid_kernel*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, struct prison *VAR_3, struct semid_kernel *VAR_4)
{

 return ((VAR_4->u.sem_perm.mode & VAR_1) == 0 ||
     VAR_4->u.sem_perm.seq != FUNC_0(VAR_2) ||
     FUNC_1(VAR_3, VAR_4) ? VAR_0 : 0);
}
