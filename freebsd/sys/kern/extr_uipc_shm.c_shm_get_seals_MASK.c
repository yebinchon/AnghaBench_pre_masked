
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmfd {int shm_seals; } ;
struct file {struct shmfd* f_data; } ;



__attribute__((used)) static int
FUNC_0(struct file *VAR_0, int *VAR_1)
{
 struct shmfd *VAR_2;

 VAR_2 = VAR_0->f_data;
 *VAR_1 = VAR_2->shm_seals;
 return (0);
}
