
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
struct vmspace {int vm_map; } ;
struct shmmap_state {int shmid; scalar_t__ va; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {scalar_t__ shm_nattch; TYPE_1__ shm_perm; int shm_dtime; int shm_segsz; } ;
struct shmid_kernel {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct shmid_kernel*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct shmid_kernel* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct vmspace *VAR_7, struct shmmap_state *VAR_8)
{
 struct shmid_kernel *VAR_9;
 int VAR_10, VAR_11;
 vm_size_t VAR_12;

 FUNC_2();
 VAR_10 = FUNC_0(VAR_8->shmid);
 FUNC_1(VAR_10 >= 0 && VAR_10 < VAR_4,
     ("segnum %d shmalloced %d", VAR_10, VAR_4));

 VAR_9 = &VAR_5[VAR_10];
 VAR_12 = FUNC_3(VAR_9->u.shm_segsz);
 VAR_11 = FUNC_5(&VAR_7->vm_map, VAR_8->va, VAR_8->va + VAR_12);
 if (VAR_11 != VAR_1)
  return (VAR_0);
 VAR_8->shmid = -1;
 VAR_9->u.shm_dtime = VAR_6;
 if (--VAR_9->u.shm_nattch == 0 &&
     (VAR_9->u.shm_perm.mode & VAR_2)) {
  FUNC_4(VAR_9);
  VAR_3 = VAR_10;
 }
 return (0);
}
