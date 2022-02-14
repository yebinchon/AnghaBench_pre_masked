
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct shmfd {int shm_seals; int shm_mtx; int shm_rl; int shm_size; int shm_object; } ;
struct file {int f_cred; struct shmfd* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct file*,struct uio*,int) ;
 int FUNC_1 (struct file*,struct uio*,int) ;
 int FUNC_2 (struct ucred*,int ,struct shmfd*) ;
 int FUNC_3 (int *,void*,int *) ;
 void* FUNC_4 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_4, struct uio *VAR_5, struct ucred *VAR_6,
    int VAR_7, struct thread *VAR_8)
{
 struct shmfd *VAR_9;
 void *VAR_10;
 int VAR_11;

 VAR_9 = VAR_4->f_data;





 FUNC_0(VAR_4, VAR_5, VAR_7);
 if ((VAR_7 & VAR_1) == 0) {
  VAR_10 = FUNC_4(&VAR_9->shm_rl, 0, VAR_3,
      &VAR_9->shm_mtx);
 } else {
  VAR_10 = FUNC_4(&VAR_9->shm_rl, VAR_5->uio_offset,
      VAR_5->uio_offset + VAR_5->uio_resid, &VAR_9->shm_mtx);
 }
 if ((VAR_9->shm_seals & VAR_2) != 0)
  VAR_11 = VAR_0;
 else
  VAR_11 = FUNC_5(VAR_9->shm_object, VAR_9->shm_size, VAR_5);
 FUNC_3(&VAR_9->shm_rl, VAR_10, &VAR_9->shm_mtx);
 FUNC_1(VAR_4, VAR_5, VAR_7);
 return (VAR_11);
}
