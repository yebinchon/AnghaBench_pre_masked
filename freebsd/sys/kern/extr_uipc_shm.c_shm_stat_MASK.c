
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int st_mode; int st_nlink; int st_ino; int st_dev; int st_gid; int st_uid; int st_birthtim; int st_mtim; int st_ctim; int st_atim; int st_blksize; int st_size; int st_blocks; } ;
struct shmfd {int shm_mode; TYPE_1__* shm_object; int shm_ino; int shm_gid; int shm_uid; int shm_birthtime; int shm_mtime; int shm_ctime; int shm_atime; int shm_size; } ;
struct file {int f_cred; struct shmfd* f_data; } ;
struct TYPE_2__ {int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stat*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ucred*,int ,struct shmfd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_4, struct stat *VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct shmfd *VAR_8;




 VAR_8 = VAR_4->f_data;
 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_5->st_blksize = VAR_0;
 VAR_5->st_size = VAR_8->shm_size;
 VAR_5->st_blocks = FUNC_1(VAR_5->st_size, VAR_5->st_blksize);
 FUNC_3(&VAR_3);
 VAR_5->st_atim = VAR_8->shm_atime;
 VAR_5->st_ctim = VAR_8->shm_ctime;
 VAR_5->st_mtim = VAR_8->shm_mtime;
 VAR_5->st_birthtim = VAR_8->shm_birthtime;
 VAR_5->st_mode = VAR_1 | VAR_8->shm_mode;
 VAR_5->st_uid = VAR_8->shm_uid;
 VAR_5->st_gid = VAR_8->shm_gid;
 FUNC_4(&VAR_3);
 VAR_5->st_dev = VAR_2;
 VAR_5->st_ino = VAR_8->shm_ino;
 VAR_5->st_nlink = VAR_8->shm_object->ref_count;

 return (0);
}
