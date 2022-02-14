
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_ooffset_t ;
struct shmfd {int shm_seals; int shm_mtx; int shm_rl; TYPE_3__* shm_object; } ;
struct file {struct shmfd* f_data; } ;
struct TYPE_5__ {scalar_t__ writemappings; } ;
struct TYPE_6__ {TYPE_1__ swp; } ;
struct TYPE_7__ {TYPE_2__ un_pager; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,void*,int *) ;
 void* FUNC_3 (int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_5, int VAR_6)
{
 struct shmfd *VAR_7;
 void *VAR_8;
 vm_ooffset_t VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = 0;
 VAR_7 = VAR_5->f_data;
 VAR_8 = FUNC_3(&VAR_7->shm_rl, 0, VAR_4,
     &VAR_7->shm_mtx);


 if ((VAR_7->shm_seals & VAR_2) != 0) {
  VAR_10 = VAR_1;
  goto out;
 }
 VAR_11 = VAR_6 & ~VAR_7->shm_seals;
 if ((VAR_11 & VAR_3) != 0) {






  FUNC_0(VAR_7->shm_object);
  VAR_9 = VAR_7->shm_object->un_pager.swp.writemappings;
  FUNC_1(VAR_7->shm_object);

  if (VAR_9 > 0) {
   VAR_10 = VAR_0;
   goto out;
  }
 }
 VAR_7->shm_seals |= VAR_11;
out:
 FUNC_2(&VAR_7->shm_rl, VAR_8, &VAR_7->shm_mtx);
 return (VAR_10);
}
