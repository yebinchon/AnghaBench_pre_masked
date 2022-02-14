
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_quad_t ;
struct TYPE_2__ {int bo_bsize; } ;
struct vnode {TYPE_1__ v_bufobj; } ;
struct thread {int dummy; } ;
struct nfsnode {scalar_t__ n_size; } ;
struct buf {scalar_t__ b_dirtyoff; scalar_t__ b_bcount; scalar_t__ b_dirtyend; int b_flags; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 struct nfsnode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct buf*) ;
 struct buf* FUNC_4 (struct vnode*,int,int,struct thread*) ;
 int FUNC_5 (struct vnode*,scalar_t__) ;
 int FUNC_6 (struct vnode*,scalar_t__,int) ;

int
FUNC_7(struct vnode *VAR_2, struct thread *VAR_3, u_quad_t VAR_4)
{
 struct nfsnode *VAR_5 = FUNC_2(VAR_2);
 u_quad_t VAR_6;
 int VAR_7 = VAR_2->v_bufobj.bo_bsize;
 int VAR_8 = 0;

 FUNC_0(VAR_5);
 VAR_6 = VAR_5->n_size;
 VAR_5->n_size = VAR_4;
 FUNC_1(VAR_5);

 if (VAR_4 < VAR_6) {
  struct buf *VAR_9;
  daddr_t VAR_10;
  int VAR_11;






  VAR_8 = FUNC_6(VAR_2, VAR_4, VAR_7);
  VAR_10 = VAR_4 / VAR_7;
  VAR_11 = VAR_4 - (VAR_10 * VAR_7);
  VAR_9 = FUNC_4(VAR_2, VAR_10, VAR_11, VAR_3);
  if (!VAR_9)
   return VAR_1;
  if (VAR_9->b_dirtyoff > VAR_9->b_bcount)
   VAR_9->b_dirtyoff = VAR_9->b_bcount;
  if (VAR_9->b_dirtyend > VAR_9->b_bcount)
   VAR_9->b_dirtyend = VAR_9->b_bcount;
  VAR_9->b_flags |= VAR_0;
  FUNC_3(VAR_9);
 } else {
  FUNC_5(VAR_2, VAR_4);
 }
 return(VAR_8);
}
