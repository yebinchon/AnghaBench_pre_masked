
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmfd {int shm_object; int shm_mtx; int shm_rl; int shm_refs; } ;


 int VAR_0 ;
 int FUNC_0 (struct shmfd*,int ) ;
 int FUNC_1 (struct shmfd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct shmfd *VAR_1)
{

 if (FUNC_4(&VAR_1->shm_refs)) {



  FUNC_3(&VAR_1->shm_rl);
  FUNC_2(&VAR_1->shm_mtx);
  FUNC_5(VAR_1->shm_object);
  FUNC_0(VAR_1, VAR_0);
 }
}
