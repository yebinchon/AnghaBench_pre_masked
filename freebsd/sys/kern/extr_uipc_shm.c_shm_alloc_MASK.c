
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ucred {int cr_gid; int cr_uid; } ;
struct shmfd {int shm_rl; int shm_mtx; int shm_refs; int shm_ino; int shm_birthtime; int shm_ctime; int shm_mtime; int shm_atime; TYPE_1__* shm_object; scalar_t__ shm_size; int shm_mode; int shm_gid; int shm_uid; } ;
typedef int mode_t ;
struct TYPE_6__ {scalar_t__ pg_color; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ucred*,struct shmfd*) ;
 int FUNC_5 (struct shmfd*) ;
 struct shmfd* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_9 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_13 (int ,int *,scalar_t__,int ,int ,struct ucred*) ;

struct shmfd *
FUNC_14(struct ucred *VAR_10, mode_t VAR_11)
{
 struct shmfd *VAR_12;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);
 VAR_12->shm_size = 0;
 VAR_12->shm_uid = VAR_10->cr_uid;
 VAR_12->shm_gid = VAR_10->cr_gid;
 VAR_12->shm_mode = VAR_11;
 VAR_12->shm_object = FUNC_13(VAR_4, ((void*)0),
     VAR_12->shm_size, VAR_8, 0, VAR_10);
 FUNC_0(VAR_12->shm_object != ((void*)0), ("shm_create: vm_pager_allocate"));
 VAR_12->shm_object->pg_color = 0;
 FUNC_1(VAR_12->shm_object);
 FUNC_11(VAR_12->shm_object, VAR_7);
 FUNC_12(VAR_12->shm_object, VAR_5 | VAR_6);
 FUNC_2(VAR_12->shm_object);
 FUNC_10(&VAR_12->shm_birthtime);
 VAR_12->shm_atime = VAR_12->shm_mtime = VAR_12->shm_ctime =
     VAR_12->shm_birthtime;
 VAR_12->shm_ino = FUNC_3(&VAR_9);
 FUNC_9(&VAR_12->shm_refs, 1);
 FUNC_7(&VAR_12->shm_mtx, "shmrl", ((void*)0), VAR_0);
 FUNC_8(&VAR_12->shm_rl);





 return (VAR_12);
}
