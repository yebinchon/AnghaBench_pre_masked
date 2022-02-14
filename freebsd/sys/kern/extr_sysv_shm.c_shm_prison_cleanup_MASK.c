
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ shm_perm; } ;
struct shmid_kernel {TYPE_3__* cred; TYPE_2__ u; } ;
struct prison {int dummy; } ;
struct TYPE_6__ {struct prison* cr_prison; } ;


 int VAR_0 ;
 int FUNC_0 (struct shmid_kernel*,int) ;
 int VAR_1 ;
 struct shmid_kernel* VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct prison *VAR_3)
{
 struct shmid_kernel *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_2[VAR_5];
  if ((VAR_4->u.shm_perm.mode & VAR_0) &&
      VAR_4->cred != ((void*)0) && VAR_4->cred->cr_prison == VAR_3) {
   FUNC_0(VAR_4, VAR_5);
  }
 }
}
