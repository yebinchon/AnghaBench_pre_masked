
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shminfo {int shmall; int shmseg; int shmmni; int shmmin; int shmmax; } ;
struct l_shminfo64 {int shmall; int shmseg; int shmmni; int shmmin; int shmmax; } ;



__attribute__((used)) static void
FUNC_0( struct shminfo *VAR_0, struct l_shminfo64 *VAR_1)
{

 VAR_1->shmmax = VAR_0->shmmax;
 VAR_1->shmmin = VAR_0->shmmin;
 VAR_1->shmmni = VAR_0->shmmni;
 VAR_1->shmseg = VAR_0->shmseg;
 VAR_1->shmall = VAR_0->shmall;
}
