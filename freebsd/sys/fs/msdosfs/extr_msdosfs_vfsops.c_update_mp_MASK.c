
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct msdosfsmount {int pm_gid; int pm_uid; int pm_mask; int pm_dirmask; int pm_flags; int * pm_u2d; int * pm_d2u; int * pm_u2w; int * pm_w2u; } ;
struct mount {int mnt_optnew; } ;
struct TYPE_2__ {int (* open ) (void*,void*,int **) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct msdosfsmount* FUNC_0 (struct mount*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (void*,void*,int **) ;
 int FUNC_2 (void*,void*,int **) ;
 int FUNC_3 (void*,void*,int **) ;
 int FUNC_4 (void*,void*,int **) ;
 int FUNC_5 (int ,char*,int*,int) ;
 int FUNC_6 (int ,char*,void**,int *) ;
 int FUNC_7 (int ,char*,char*,int*) ;

__attribute__((used)) static int
FUNC_8(struct mount *VAR_6, struct thread *VAR_7)
{
 struct msdosfsmount *VAR_8 = FUNC_0(VAR_6);
 void *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (!FUNC_6(VAR_6->mnt_optnew, "kiconv", ((void*)0), ((void*)0))) {
  if (VAR_5 != ((void*)0)) {
   VAR_12 = FUNC_6(VAR_6->mnt_optnew,
       "cs_win", &VAR_10, ((void*)0));
   if (!VAR_12)
    VAR_12 = FUNC_6(VAR_6->mnt_optnew,
        "cs_local", &VAR_11, ((void*)0));
   if (!VAR_12)
    VAR_12 = FUNC_6(VAR_6->mnt_optnew,
        "cs_dos", &VAR_9, ((void*)0));
   if (!VAR_12) {
    VAR_5->open(VAR_10, VAR_11, &VAR_8->pm_u2w);
    VAR_5->open(VAR_11, VAR_10, &VAR_8->pm_w2u);
    VAR_5->open(VAR_9, VAR_11, &VAR_8->pm_u2d);
    VAR_5->open(VAR_11, VAR_9, &VAR_8->pm_d2u);
   }
   if (VAR_12 != 0)
    return (VAR_12);
  } else {
   VAR_8->pm_w2u = ((void*)0);
   VAR_8->pm_u2w = ((void*)0);
   VAR_8->pm_d2u = ((void*)0);
   VAR_8->pm_u2d = ((void*)0);
  }
 }

 if (FUNC_7(VAR_6->mnt_optnew, "gid", "%d", &VAR_13) == 1)
  VAR_8->pm_gid = VAR_13;
 if (FUNC_7(VAR_6->mnt_optnew, "uid", "%d", &VAR_13) == 1)
  VAR_8->pm_uid = VAR_13;
 if (FUNC_7(VAR_6->mnt_optnew, "mask", "%d", &VAR_13) == 1)
  VAR_8->pm_mask = VAR_13 & VAR_0;
 if (FUNC_7(VAR_6->mnt_optnew, "dirmask", "%d", &VAR_13) == 1)
  VAR_8->pm_dirmask = VAR_13 & VAR_0;
 FUNC_5(VAR_6->mnt_optnew, "shortname",
     &VAR_8->pm_flags, VAR_4);
 FUNC_5(VAR_6->mnt_optnew, "shortnames",
     &VAR_8->pm_flags, VAR_4);
 FUNC_5(VAR_6->mnt_optnew, "longname",
     &VAR_8->pm_flags, VAR_2);
 FUNC_5(VAR_6->mnt_optnew, "longnames",
     &VAR_8->pm_flags, VAR_2);
 FUNC_5(VAR_6->mnt_optnew, "kiconv",
     &VAR_8->pm_flags, VAR_1);

 if (FUNC_6(VAR_6->mnt_optnew, "nowin95", ((void*)0), ((void*)0)) == 0)
  VAR_8->pm_flags |= VAR_3;
 else
  VAR_8->pm_flags &= ~VAR_3;

 if (VAR_8->pm_flags & VAR_3)
  VAR_8->pm_flags |= VAR_4;
 else
  VAR_8->pm_flags |= VAR_2;
 return 0;
}
