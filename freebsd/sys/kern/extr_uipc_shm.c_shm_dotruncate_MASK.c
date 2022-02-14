
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmfd {int shm_mtx; int shm_rl; int shm_object; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,int *) ;
 void* FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (struct shmfd*,int ,void*) ;

int
FUNC_5(struct shmfd *VAR_1, off_t VAR_2)
{
 void *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(&VAR_1->shm_rl, 0, VAR_0,
     &VAR_1->shm_mtx);
 FUNC_0(VAR_1->shm_object);
 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1->shm_object);
 FUNC_2(&VAR_1->shm_rl, VAR_3, &VAR_1->shm_mtx);
 return (VAR_4);
}
