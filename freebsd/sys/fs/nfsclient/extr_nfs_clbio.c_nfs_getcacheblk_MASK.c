
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bo_bsize; } ;
struct vnode {scalar_t__ v_type; TYPE_1__ v_bufobj; struct mount* v_mount; } ;
struct thread {int dummy; } ;
struct nfsmount {int nm_flag; } ;
struct mount {int dummy; } ;
struct buf {int b_blkno; } ;
typedef int sigset_t ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsmount* FUNC_0 (struct mount*) ;
 scalar_t__ VAR_3 ;
 struct buf* FUNC_1 (struct vnode*,int,int,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct thread*,int *) ;
 int FUNC_3 (struct thread*,int *) ;
 scalar_t__ FUNC_4 (struct nfsmount*,struct thread*) ;

__attribute__((used)) static struct buf *
FUNC_5(struct vnode *VAR_5, daddr_t VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct buf *VAR_9;
 struct mount *VAR_10;
 struct nfsmount *VAR_11;

 VAR_10 = VAR_5->v_mount;
 VAR_11 = FUNC_0(VAR_10);

 if (VAR_11->nm_flag & VAR_1) {
  sigset_t VAR_12;

  FUNC_3(VAR_8, &VAR_12);
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_2, 0, 0);
  FUNC_2(VAR_8, &VAR_12);
  while (VAR_9 == ((void*)0)) {
   if (FUNC_4(VAR_11, VAR_8))
    return (((void*)0));
   VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, 0, 2 * VAR_4, 0);
  }
 } else {
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, 0, 0, 0);
 }

 if (VAR_5->v_type == VAR_3)
  VAR_9->b_blkno = VAR_6 * (VAR_5->v_bufobj.bo_bsize / VAR_0);
 return (VAR_9);
}
