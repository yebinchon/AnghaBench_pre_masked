
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vop_bmap_args {int a_bn; int* a_bnp; int* a_runp; int* a_runb; struct bufobj** a_bop; struct vnode* a_vp; } ;
struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; TYPE_1__* v_mount; } ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;
struct fuse_dispatcher {struct fuse_bmap_out* answ; struct fuse_bmap_in* indata; } ;
struct fuse_data {int max_readahead_blocks; } ;
struct fuse_bmap_out {int block; } ;
struct fuse_bmap_in {int block; int blocksize; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_2__ {int mnt_iosize_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 struct thread* VAR_3 ;
 int FUNC_3 (struct fuse_dispatcher*) ;
 int FUNC_4 (struct fuse_dispatcher*,int) ;
 int FUNC_5 (struct fuse_dispatcher*,int ,struct vnode*,struct thread*,int ) ;
 int FUNC_6 (struct fuse_dispatcher*) ;
 scalar_t__ FUNC_7 (struct mount*,int ) ;
 int FUNC_8 (struct mount*,int ) ;
 struct fuse_data* FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*) ;
 scalar_t__ FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*,int*,int ,struct thread*) ;
 struct mount* FUNC_13 (struct vnode*) ;

__attribute__((used)) static int
FUNC_14(struct vop_bmap_args *VAR_4)
{
 struct vnode *VAR_5 = VAR_4->a_vp;
 struct bufobj **VAR_6 = VAR_4->a_bop;
 struct thread *VAR_7 = VAR_3;
 struct mount *VAR_8;
 struct fuse_dispatcher VAR_9;
 struct fuse_bmap_in *VAR_10;
 struct fuse_bmap_out *VAR_11;
 struct fuse_data *VAR_12;
 uint64_t VAR_13;
 off_t VAR_14;
 daddr_t VAR_15 = VAR_4->a_bn;
 daddr_t *VAR_16 = VAR_4->a_bnp;
 int *VAR_17 = VAR_4->a_runp;
 int *VAR_18 = VAR_4->a_runb;
 int VAR_19 = 0;
 int VAR_20;

 if (FUNC_11(VAR_5)) {
  return VAR_1;
 }

 VAR_8 = FUNC_13(VAR_5);
 VAR_12 = FUNC_9(VAR_8);
 VAR_13 = FUNC_10(VAR_5);
 VAR_20 = FUNC_1(VAR_5->v_mount->mnt_iosize_max / VAR_13 - 1,
  VAR_12->max_readahead_blocks);

 if (VAR_6 != ((void*)0))
  *VAR_6 = &VAR_5->v_bufobj;
 if (VAR_18 != ((void*)0))
  *VAR_18 = FUNC_1(VAR_15, VAR_20);
 if (VAR_17 != ((void*)0)) {
  VAR_19 = FUNC_12(VAR_5, &VAR_14, VAR_7->td_ucred, VAR_7);
  if (VAR_19 == 0)
   *VAR_17 = FUNC_1(FUNC_0(0, VAR_14 / (off_t)VAR_13 - VAR_15 - 1),
        VAR_20);
  else
   *VAR_17 = 0;
 }

 if (FUNC_7(VAR_8, VAR_2)) {
  FUNC_4(&VAR_9, sizeof(*VAR_10));
  FUNC_5(&VAR_9, VAR_2, VAR_5, VAR_7, VAR_7->td_ucred);
  VAR_10 = VAR_9.indata;
  VAR_10->block = VAR_15;
  VAR_10->blocksize = VAR_13;
  VAR_19 = FUNC_6(&VAR_9);
  if (VAR_19 == VAR_0) {
   FUNC_3(&VAR_9);
   FUNC_8(VAR_8, VAR_2);
   VAR_19 = 0;
  } else {
   VAR_11 = VAR_9.answ;
   if (VAR_19 == 0 && VAR_16 != ((void*)0))
    *VAR_16 = VAR_11->block;
   FUNC_3(&VAR_9);
   return VAR_19;
  }
 }


 if (VAR_16 != ((void*)0))
  *VAR_16 = VAR_15 * FUNC_2(VAR_13);
 return (VAR_19);
}
