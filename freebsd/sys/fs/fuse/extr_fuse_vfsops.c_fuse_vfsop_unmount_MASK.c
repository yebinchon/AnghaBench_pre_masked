
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int * mnt_data; } ;
struct fuse_dispatcher {int dummy; } ;
struct fuse_data {struct cdev* fdev; int * mp; struct vnode* vroot; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 struct thread* VAR_3 ;
 int FUNC_4 (struct cdev*) ;
 scalar_t__ FUNC_5 (struct fuse_data*) ;
 int FUNC_6 (struct fuse_data*) ;
 int FUNC_7 (struct fuse_data*) ;
 int FUNC_8 (struct fuse_dispatcher*) ;
 int FUNC_9 (struct fuse_dispatcher*,int ) ;
 int FUNC_10 (struct fuse_dispatcher*,int ,struct mount*,int ,struct thread*,int *) ;
 int FUNC_11 (struct fuse_dispatcher*) ;
 scalar_t__ FUNC_12 (struct mount*,int ) ;
 struct fuse_data* FUNC_13 (struct mount*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct mount*,int ,int,struct thread*) ;
 int FUNC_16 (struct vnode*) ;

__attribute__((used)) static int
FUNC_17(struct mount *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;

 struct cdev *VAR_8;
 struct fuse_data *VAR_9;
 struct fuse_dispatcher VAR_10;
 struct thread *VAR_11 = VAR_3;

 if (VAR_5 & VAR_2) {
  VAR_7 |= VAR_0;
 }
 VAR_9 = FUNC_13(VAR_4);
 if (!VAR_9) {
  FUNC_14("no private data for mount point?");
 }

 FUNC_0();
 if (VAR_9->vroot != ((void*)0)) {
  struct vnode *VAR_12 = VAR_9->vroot;

  VAR_9->vroot = ((void*)0);
  FUNC_1();
  FUNC_16(VAR_12);
 } else
  FUNC_1();
 VAR_6 = FUNC_15(VAR_4, 0, VAR_7, VAR_11);
 if (VAR_6) {
  return VAR_6;
 }
 if (FUNC_5(VAR_9)) {
  goto alreadydead;
 }
 if (FUNC_12(VAR_4, VAR_1)) {
  FUNC_9(&VAR_10, 0);
  FUNC_10(&VAR_10, VAR_1, VAR_4, 0, VAR_11, ((void*)0));

  (void)FUNC_11(&VAR_10);
  FUNC_8(&VAR_10);
 }

 FUNC_6(VAR_9);

alreadydead:
 FUNC_0();
 VAR_9->mp = ((void*)0);
 VAR_8 = VAR_9->fdev;
 FUNC_7(VAR_9);
 FUNC_1();

 FUNC_2(VAR_4);
 VAR_4->mnt_data = ((void*)0);
 FUNC_3(VAR_4);

 FUNC_4(VAR_8);

 return 0;
}
