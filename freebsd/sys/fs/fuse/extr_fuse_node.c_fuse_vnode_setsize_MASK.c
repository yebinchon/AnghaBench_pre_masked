
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct vattr {scalar_t__ va_size; } ;
struct TYPE_2__ {scalar_t__ va_size; } ;
struct fuse_vnode_data {TYPE_1__ cached_attrs; } ;
struct buf {int b_flags; int b_dirtyend; } ;
typedef scalar_t__ off_t ;
typedef size_t daddr_t ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 struct fuse_vnode_data* FUNC_3 (struct vnode*) ;
 struct vattr* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct buf*) ;
 size_t FUNC_6 (struct vnode*) ;
 struct buf* FUNC_7 (struct vnode*,size_t,size_t,int ,int ,int ) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct vnode*,scalar_t__) ;
 int FUNC_10 (struct vnode*,scalar_t__,size_t) ;

int
FUNC_11(struct vnode *VAR_4, off_t VAR_5)
{
 struct fuse_vnode_data *VAR_6 = FUNC_3(VAR_4);
 struct vattr *VAR_7;
 off_t VAR_8;
 size_t VAR_9;
 struct buf *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_0(VAR_4, "fuse_vnode_setsize");

 VAR_9 = FUNC_6(VAR_4);
 VAR_8 = VAR_6->cached_attrs.va_size;
 VAR_6->cached_attrs.va_size = VAR_5;
 if ((VAR_7 = FUNC_4(VAR_4)) != ((void*)0))
  VAR_7->va_size = VAR_5;

 if (VAR_5 < VAR_8) {
  daddr_t VAR_12;

  VAR_11 = FUNC_10(VAR_4, VAR_5, FUNC_6(VAR_4));
  if (VAR_11)
   goto out;
  if (VAR_5 % VAR_9 == 0)
   goto out;





  VAR_12 = VAR_5 / VAR_9;
  VAR_10 = FUNC_7(VAR_4, VAR_12, VAR_9, VAR_3, 0, 0);
  if (!VAR_10) {
   VAR_11 = VAR_2;
   goto out;
  }
  if (!(VAR_10->b_flags & VAR_0))
   goto out;
  FUNC_2(VAR_10->b_flags & VAR_1);
  FUNC_8(VAR_10);
  VAR_10->b_dirtyend = FUNC_1(VAR_10->b_dirtyend, VAR_5 - VAR_12 * VAR_9);
 }
out:
 if (VAR_10)
  FUNC_5(VAR_10);
 FUNC_9(VAR_4, VAR_5);
 return VAR_11;
}
