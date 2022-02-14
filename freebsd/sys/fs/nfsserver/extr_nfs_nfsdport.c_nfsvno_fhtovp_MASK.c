
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nfsexstuff {int nes_numsecflavor; int* nes_secflavors; scalar_t__ nes_exflag; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {int fh_fid; } ;
typedef TYPE_1__ fhandle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mount*,struct sockaddr*,scalar_t__*,struct ucred**,int*,int**) ;
 int FUNC_2 (struct mount*,int *,int,struct vnode**) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct mount *VAR_2, fhandle_t *VAR_3, struct sockaddr *VAR_4,
    int VAR_5, struct vnode **VAR_6, struct nfsexstuff *VAR_7,
    struct ucred **VAR_8)
{
 int VAR_9, VAR_10, *VAR_11;

 *VAR_8 = ((void*)0);
 VAR_7->nes_numsecflavor = 0;
 VAR_10 = FUNC_2(VAR_2, &VAR_3->fh_fid, VAR_5, VAR_6);
 if (VAR_10 != 0)

  VAR_10 = VAR_0;
 if (VAR_4 && !VAR_10) {
  VAR_10 = FUNC_1(VAR_2, VAR_4, &VAR_7->nes_exflag, VAR_8,
      &VAR_7->nes_numsecflavor, &VAR_11);
  if (VAR_10) {
   if (VAR_1) {
    VAR_7->nes_exflag = 0;
    VAR_7->nes_numsecflavor = 0;
    VAR_10 = 0;
   } else {
    FUNC_3(*VAR_6);
   }
  } else {

   for (VAR_9 = 0; VAR_9 < VAR_7->nes_numsecflavor; VAR_9++)
    VAR_7->nes_secflavors[VAR_9] = VAR_11[VAR_9];
  }
 }
 FUNC_0(VAR_10);
 return (VAR_10);
}
