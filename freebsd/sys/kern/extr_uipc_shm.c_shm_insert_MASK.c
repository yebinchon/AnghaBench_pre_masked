
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmfd {char* shm_path; } ;
struct shm_mapping {char* sm_path; int sm_shmfd; int sm_fnv; } ;
typedef int Fnv32_t ;


 int FUNC_0 (int ,struct shm_mapping*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct shm_mapping* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct shmfd*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(char *VAR_3, Fnv32_t VAR_4, struct shmfd *VAR_5)
{
 struct shm_mapping *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct shm_mapping), VAR_0, VAR_1);
 VAR_6->sm_path = VAR_3;
 VAR_6->sm_fnv = VAR_4;
 VAR_6->sm_shmfd = FUNC_3(VAR_5);
 VAR_5->shm_path = VAR_3;
 FUNC_0(FUNC_1(VAR_4), VAR_6, VAR_2);
}
