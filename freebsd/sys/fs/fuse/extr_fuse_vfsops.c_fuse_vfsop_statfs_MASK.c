
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statfs {int f_bsize; int f_namemax; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {int frsize; int namelen; int ffree; int files; int bavail; int bfree; int blocks; } ;
struct fuse_statfs_out {TYPE_1__ st; } ;
struct fuse_dispatcher {struct fuse_statfs_out* answ; } ;
struct fuse_data {int dataflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fuse_dispatcher*) ;
 int FUNC_1 (struct fuse_dispatcher*,int ) ;
 int FUNC_2 (struct fuse_dispatcher*,int ,struct mount*,int ,int *,int *) ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 struct fuse_data* FUNC_4 (struct mount*) ;

__attribute__((used)) static int
FUNC_5(struct mount *VAR_5, struct statfs *VAR_6)
{
 struct fuse_dispatcher VAR_7;
 int VAR_8 = 0;

 struct fuse_statfs_out *VAR_9;
 struct fuse_data *VAR_10;

 VAR_10 = FUNC_4(VAR_5);

 if (!(VAR_10->dataflags & VAR_1))
  goto fake;

 FUNC_1(&VAR_7, 0);
 FUNC_2(&VAR_7, VAR_3, VAR_5, VAR_2, ((void*)0), ((void*)0));
 VAR_8 = FUNC_3(&VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_7);
  if (VAR_8 == VAR_0) {





   goto fake;
  }
  return VAR_8;
 }
 VAR_9 = VAR_7.answ;

 VAR_6->f_blocks = VAR_9->st.blocks;
 VAR_6->f_bfree = VAR_9->st.bfree;
 VAR_6->f_bavail = VAR_9->st.bavail;
 VAR_6->f_files = VAR_9->st.files;
 VAR_6->f_ffree = VAR_9->st.ffree;
 VAR_6->f_namemax = VAR_9->st.namelen;
 VAR_6->f_bsize = VAR_9->st.frsize;

 FUNC_0(&VAR_7);
 return 0;

fake:
 VAR_6->f_blocks = 0;
 VAR_6->f_bfree = 0;
 VAR_6->f_bavail = 0;
 VAR_6->f_files = 0;
 VAR_6->f_ffree = 0;
 VAR_6->f_namemax = 0;
 VAR_6->f_bsize = VAR_4;

 return 0;
}
