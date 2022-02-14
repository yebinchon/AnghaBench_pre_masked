
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct buf {int b_flags; int b_dirtyend; int b_error; int b_dirtyoff; } ;
typedef int off_t ;
typedef int daddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct vnode*) ;
 struct buf* FUNC_5 (struct vnode*,int,int,int ,int ,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct vnode*,int,int,int) ;

__attribute__((used)) static int
FUNC_8(struct vnode *VAR_2, off_t VAR_3, off_t VAR_4, off_t VAR_5)
{
 struct buf *VAR_6;
 daddr_t VAR_7, VAR_8, VAR_9;
 off_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = FUNC_4(VAR_2);
 VAR_7 = VAR_4 / VAR_11;
 VAR_8 = FUNC_6(VAR_5, VAR_11);
 VAR_12 = VAR_4 & (VAR_11 - 1);
 if (VAR_12 != 0) {
  VAR_6 = FUNC_5(VAR_2, VAR_7, VAR_11, VAR_1, 0, 0);
  if ((VAR_6->b_flags & VAR_0) != 0 && VAR_6->b_dirtyend >= VAR_12) {





   FUNC_3(VAR_6);
   if (VAR_6->b_error)
    return (VAR_6->b_error);
  } else {
   FUNC_2(VAR_6);
  }
 }
 VAR_13 = VAR_5 & (VAR_11 - 1);
 if (VAR_13 != 0) {
  VAR_9 = VAR_5 / VAR_11;
  VAR_10 = FUNC_0(VAR_3, VAR_5);
  VAR_14 = FUNC_1(VAR_11, VAR_10 - VAR_11 * VAR_9);
  VAR_6 = FUNC_5(VAR_2, VAR_9, VAR_14, VAR_1, 0, 0);
  if ((VAR_6->b_flags & VAR_0) != 0 && VAR_6->b_dirtyoff < VAR_13) {





   FUNC_3(VAR_6);
   if (VAR_6->b_error)
    return (VAR_6->b_error);
  } else {
   FUNC_2(VAR_6);
  }
 }

 FUNC_7(VAR_2, VAR_7, VAR_8, VAR_11);
 return (0);
}
