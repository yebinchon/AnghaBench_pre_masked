
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_shminfo64 {int shmall; int shmseg; int shmmni; int shmmin; int shmmax; } ;
struct l_shminfo {int shmall; int shmseg; int shmmni; int shmmin; int shmmax; } ;
typedef int linux_shminfo ;
typedef scalar_t__ l_int ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct l_shminfo64*,int) ;
 int FUNC_2 (struct l_shminfo64*,int ,int) ;

__attribute__((used)) static int
FUNC_3(l_int VAR_2, struct l_shminfo64 *VAR_3,
    caddr_t VAR_4)
{
 struct l_shminfo VAR_5;

 if (VAR_2 == VAR_0 || FUNC_0(VAR_1))
  return (FUNC_2(VAR_3, VAR_4,
      sizeof(*VAR_3)));
 else {
  FUNC_1(&VAR_5, sizeof(VAR_5));

  VAR_5.shmmax = VAR_3->shmmax;
  VAR_5.shmmin = VAR_3->shmmin;
  VAR_5.shmmni = VAR_3->shmmni;
  VAR_5.shmseg = VAR_3->shmseg;
  VAR_5.shmall = VAR_3->shmall;

  return (FUNC_2(&VAR_5, VAR_4,
      sizeof(VAR_5)));
 }
}
