
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ shm_perm; int shm_segsz; } ;
struct shmid_kernel {int * cred; TYPE_2__ u; int * object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct shmid_kernel*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct shmid_kernel *VAR_5)
{
 vm_size_t VAR_6;

 FUNC_0();

 FUNC_6(VAR_5->object);
 VAR_5->object = ((void*)0);
 VAR_6 = FUNC_5(VAR_5->u.shm_segsz);
 VAR_3 -= FUNC_1(VAR_6);
 VAR_4--;
 VAR_5->u.shm_perm.mode = VAR_2;



 FUNC_4(VAR_5->cred, VAR_0, 1);
 FUNC_4(VAR_5->cred, VAR_1, VAR_6);
 FUNC_2(VAR_5->cred);
 VAR_5->cred = ((void*)0);
}
