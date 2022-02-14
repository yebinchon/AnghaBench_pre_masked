
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shmid_kernel {int dummy; } ;
struct TYPE_2__ {int (* shm_associate ) (struct shmid_kernel*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct shmid_kernel*,int) ;

int FUNC_1(struct shmid_kernel *VAR_1, int VAR_2)
{
 return VAR_0->shm_associate(VAR_1, VAR_2);
}
