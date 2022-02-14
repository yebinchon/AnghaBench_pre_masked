
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_flag; int mnt_kern_flag; struct autofs_mount* mnt_data; int mnt_optnew; } ;
struct autofs_mount {int am_last_fileno; int am_root; int am_lock; int am_prefix; int am_options; int am_mountpoint; int am_from; struct mount* am_mp; } ;


 int FUNC_0 (struct autofs_mount*) ;
 int FUNC_1 (struct autofs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct autofs_mount*,char*,int,int *) ;
 int VAR_6 ;
 int FUNC_7 (struct autofs_mount*,int ) ;
 struct autofs_mount* FUNC_8 (int,int ,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct mount*) ;
 scalar_t__ FUNC_13 (int ,char*,void**,int *) ;
 int FUNC_14 (struct mount*,char*) ;

__attribute__((used)) static int
FUNC_15(struct mount *VAR_7)
{
 struct autofs_mount *VAR_8;
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;

 if (FUNC_11(VAR_7->mnt_optnew, VAR_6))
  return (VAR_0);

 if (VAR_7->mnt_flag & VAR_2) {
  FUNC_5(FUNC_4(VAR_7));
  return (0);
 }

 if (FUNC_13(VAR_7->mnt_optnew, "from", (void **)&VAR_9, ((void*)0)))
  return (VAR_0);

 if (FUNC_13(VAR_7->mnt_optnew, "fspath", (void **)&VAR_10, ((void*)0)))
  return (VAR_0);

 if (FUNC_13(VAR_7->mnt_optnew, "master_options", (void **)&VAR_11, ((void*)0)))
  return (VAR_0);

 if (FUNC_13(VAR_7->mnt_optnew, "master_prefix", (void **)&VAR_12, ((void*)0)))
  return (VAR_0);

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_3, VAR_4 | VAR_5);
 VAR_7->mnt_data = VAR_8;
 VAR_8->am_mp = VAR_7;
 FUNC_9(VAR_8->am_from, VAR_9, sizeof(VAR_8->am_from));
 FUNC_9(VAR_8->am_mountpoint, VAR_10, sizeof(VAR_8->am_mountpoint));
 FUNC_9(VAR_8->am_options, VAR_11, sizeof(VAR_8->am_options));
 FUNC_9(VAR_8->am_prefix, VAR_12, sizeof(VAR_8->am_prefix));
 FUNC_10(&VAR_8->am_lock, "autofslk");
 VAR_8->am_last_fileno = 1;

 FUNC_12(VAR_7);

 FUNC_2(VAR_7);
 VAR_7->mnt_kern_flag |= VAR_1;
 FUNC_3(VAR_7);

 FUNC_0(VAR_8);
 VAR_13 = FUNC_6(((void*)0), VAR_8, ".", -1, &VAR_8->am_root);
 if (VAR_13 != 0) {
  FUNC_1(VAR_8);
  FUNC_7(VAR_8, VAR_3);
  return (VAR_13);
 }
 FUNC_1(VAR_8);

 FUNC_14(VAR_7, VAR_9);

 return (0);
}
