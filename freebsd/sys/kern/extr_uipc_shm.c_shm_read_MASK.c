
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct shmfd {int shm_mtx; int shm_rl; int shm_size; int shm_object; } ;
struct file {int f_cred; struct shmfd* f_data; } ;


 int FUNC_0 (struct file*,struct uio*,int) ;
 int FUNC_1 (struct file*,struct uio*,int) ;
 int FUNC_2 (struct ucred*,int ,struct shmfd*) ;
 void* FUNC_3 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_4 (int *,void*,int *) ;
 int FUNC_5 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_0, struct uio *VAR_1, struct ucred *VAR_2,
    int VAR_3, struct thread *VAR_4)
{
 struct shmfd *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_5 = VAR_0->f_data;





 FUNC_0(VAR_0, VAR_1, VAR_3);
 VAR_6 = FUNC_3(&VAR_5->shm_rl, VAR_1->uio_offset,
     VAR_1->uio_offset + VAR_1->uio_resid, &VAR_5->shm_mtx);
 VAR_7 = FUNC_5(VAR_5->shm_object, VAR_5->shm_size, VAR_1);
 FUNC_4(&VAR_5->shm_rl, VAR_6, &VAR_5->shm_mtx);
 FUNC_1(VAR_0, VAR_1, VAR_3);
 return (VAR_7);
}
