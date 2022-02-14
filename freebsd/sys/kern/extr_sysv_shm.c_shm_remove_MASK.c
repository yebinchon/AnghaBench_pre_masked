
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int key; } ;
struct TYPE_4__ {scalar_t__ shm_nattch; TYPE_1__ shm_perm; } ;
struct shmid_kernel {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct shmid_kernel*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct shmid_kernel *VAR_3, int VAR_4)
{

 VAR_3->u.shm_perm.key = VAR_0;
 VAR_3->u.shm_perm.mode |= VAR_1;
 if (VAR_3->u.shm_nattch == 0) {
  FUNC_0(VAR_3);
  VAR_2 = VAR_4;
 }
}
