
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nfsexstuff {int nes_numsecflavor; int* nes_secflavors; scalar_t__ nes_exflag; } ;
struct mount {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mount*,struct sockaddr*,scalar_t__*,struct ucred**,int*,int**) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(struct mount *VAR_1, struct sockaddr *VAR_2, struct nfsexstuff *VAR_3,
    struct ucred **VAR_4)
{
 int VAR_5, VAR_6, *VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_3->nes_exflag, VAR_4,
     &VAR_3->nes_numsecflavor, &VAR_7);
 if (VAR_6) {
  if (VAR_0) {
   VAR_3->nes_exflag = 0;
   VAR_3->nes_numsecflavor = 0;
   VAR_6 = 0;
  }
 } else {

  for (VAR_5 = 0; VAR_5 < VAR_3->nes_numsecflavor; VAR_5++)
   VAR_3->nes_secflavors[VAR_5] = VAR_7[VAR_5];
 }
 FUNC_0(VAR_6);
 return (VAR_6);
}
