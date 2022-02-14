
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsoptlist {int dummy; } ;
struct vfsconf {int dummy; } ;
struct thread {int td_ucred; } ;
struct mount {struct vfsoptlist* mnt_opt; int mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct vfsoptlist*) ;
 int FUNC_2 (int *,struct mount*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*,int *) ;
 int FUNC_5 (struct thread*,char*,int ,char*,int ) ;
 struct vfsoptlist* FUNC_6 (int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;
 struct mount* VAR_9 ;
 int FUNC_10 () ;
 int FUNC_11 (struct mount*,int ) ;
 struct vfsconf* FUNC_12 (char*) ;
 struct mount* FUNC_13 (int ,struct vfsconf*,char*,int ) ;
 int FUNC_14 (struct mount*) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_10, struct mount **VAR_11)
{
 struct vfsoptlist *VAR_12;
 struct vfsconf *VAR_13;
 struct mount *VAR_14;
 int VAR_15;

 *VAR_11 = ((void*)0);

 if (VAR_9 != ((void*)0)) {



  VAR_15 = FUNC_11(VAR_9, 0);
  if (VAR_15 != 0)
   return (VAR_15);
  *VAR_11 = VAR_9;
 } else {
  VAR_13 = FUNC_12("devfs");
  FUNC_0(VAR_13 != ((void*)0), ("Could not find devfs by name"));
  if (VAR_13 == ((void*)0))
   return (VAR_1);

  VAR_14 = FUNC_13(VAR_4, VAR_13, "/dev", VAR_10->td_ucred);

  VAR_15 = FUNC_3(VAR_14);
  FUNC_0(VAR_15 == 0, ("VFS_MOUNT(devfs) failed %d", VAR_15));
  if (VAR_15)
   return (VAR_15);

  VAR_15 = FUNC_4(VAR_14, &VAR_14->mnt_stat);
  FUNC_0(VAR_15 == 0, ("VFS_STATFS(devfs) failed %d", VAR_15));
  if (VAR_15)
   return (VAR_15);

  VAR_12 = FUNC_6(sizeof(struct vfsoptlist), VAR_2, VAR_3);
  FUNC_1(VAR_12);
  VAR_14->mnt_opt = VAR_12;

  FUNC_7(&VAR_8);
  FUNC_2(&VAR_7, VAR_14, VAR_6);
  FUNC_8(&VAR_8);

  *VAR_11 = VAR_14;
  VAR_9 = VAR_14;
  FUNC_14(VAR_14);
 }

 FUNC_10();

 VAR_15 = FUNC_5(VAR_10, "/", VAR_0, "dev", VAR_5);
 if (VAR_15)
  FUNC_9("kern_symlink /dev -> / returns %d\n", VAR_15);

 return (VAR_15);
}
