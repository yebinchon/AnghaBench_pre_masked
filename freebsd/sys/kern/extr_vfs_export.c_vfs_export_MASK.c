
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netexport {int dummy; } ;
struct mount {int mnt_flag; int mnt_opt; int mnt_optnew; int mnt_explock; struct netexport* mnt_export; } ;
struct export_args {scalar_t__ ex_numsecflavors; int ex_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct netexport*,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 struct netexport* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct netexport*) ;
 int FUNC_7 (struct mount*,struct netexport*,struct export_args*) ;
 int FUNC_8 (struct mount*,struct netexport*,struct export_args*) ;

int
FUNC_9(struct mount *VAR_12, struct export_args *VAR_13)
{
 struct netexport *VAR_14;
 int VAR_15;

 if (VAR_13->ex_numsecflavors < 0
     || VAR_13->ex_numsecflavors >= VAR_4)
  return (VAR_0);

 VAR_15 = 0;
 FUNC_3(&VAR_12->mnt_explock, VAR_2, ((void*)0));
 VAR_14 = VAR_12->mnt_export;
 if (VAR_13->ex_flags & VAR_6) {
  if (VAR_14 == ((void*)0)) {
   VAR_15 = VAR_1;
   goto out;
  }
  if (VAR_12->mnt_flag & VAR_8) {
   FUNC_8(((void*)0), ((void*)0), ((void*)0));
   FUNC_0(VAR_12);
   VAR_12->mnt_flag &= ~VAR_8;
   FUNC_1(VAR_12);
  }
  FUNC_6(VAR_14);
  VAR_12->mnt_export = ((void*)0);
  FUNC_2(VAR_14, VAR_9);
  VAR_14 = ((void*)0);
  FUNC_0(VAR_12);
  VAR_12->mnt_flag &= ~(VAR_7 | VAR_5);
  FUNC_1(VAR_12);
 }
 if (VAR_13->ex_flags & VAR_7) {
  if (VAR_14 == ((void*)0)) {
   VAR_14 = FUNC_4(sizeof(struct netexport), VAR_9, VAR_10 | VAR_11);
   VAR_12->mnt_export = VAR_14;
  }
  if (VAR_13->ex_flags & VAR_8) {
   if ((VAR_15 = FUNC_8(VAR_12, VAR_14, VAR_13)) != 0)
    goto out;
   FUNC_0(VAR_12);
   VAR_12->mnt_flag |= VAR_8;
   FUNC_1(VAR_12);
  }
  if ((VAR_15 = FUNC_7(VAR_12, VAR_14, VAR_13)))
   goto out;
  FUNC_0(VAR_12);
  VAR_12->mnt_flag |= VAR_7;
  FUNC_1(VAR_12);
 }

out:
 FUNC_3(&VAR_12->mnt_explock, VAR_3, ((void*)0));
 FUNC_5(VAR_12->mnt_optnew, "export");
 FUNC_5(VAR_12->mnt_opt, "export");
 return (VAR_15);
}
