
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {int mnt_kern_flag; TYPE_1__* mnt_vfc; int mnt_flag; int mnt_secondary_accwrites; int mnt_secondary_writes; } ;
struct TYPE_2__ {int vfc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct vnode*,struct mount**) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,int,char*,int ) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (struct mount*) ;

int
FUNC_10(struct vnode *VAR_10, struct mount **VAR_11, int VAR_12)
{
 struct mount *VAR_13;
 int VAR_14;

 FUNC_0((VAR_12 & VAR_8) == 0 || (*VAR_11 != ((void*)0) && VAR_10 == ((void*)0)),
     ("V_MNTREF requires mp"));

 retry:
 if (VAR_10 != ((void*)0)) {
  if ((VAR_14 = FUNC_6(VAR_10, VAR_11)) != 0) {
   *VAR_11 = ((void*)0);
   if (VAR_14 != VAR_0)
    return (VAR_14);
   return (0);
  }
 }




 if ((VAR_13 = *VAR_11) == ((void*)0))
  return (0);

 if (!FUNC_9(VAR_13)) {
  if (VAR_10 != ((void*)0) || (VAR_12 & VAR_8) != 0)
   FUNC_8(VAR_13);
  return (0);
 }
 FUNC_1(VAR_13);
 if (VAR_10 == ((void*)0) && (VAR_12 & VAR_8) == 0)
  FUNC_4(VAR_13);
 if ((VAR_13->mnt_kern_flag & (VAR_3 | VAR_2)) == 0) {
  VAR_13->mnt_secondary_writes++;
  VAR_13->mnt_secondary_accwrites++;
  FUNC_2(VAR_13);
  return (0);
 }
 if (VAR_12 & VAR_9) {
  FUNC_5(VAR_13);
  FUNC_2(VAR_13);
  return (VAR_1);
 }



 VAR_14 = FUNC_7(&VAR_13->mnt_flag, FUNC_3(VAR_13), (VAR_6 - 1) | VAR_5 |
     ((VAR_13->mnt_vfc->vfc_flags & VAR_7) != 0 ? (VAR_12 & VAR_4) : 0),
     "suspfs", 0);
 FUNC_8(VAR_13);
 if (VAR_14 == 0)
  goto retry;
 return (VAR_14);
}
