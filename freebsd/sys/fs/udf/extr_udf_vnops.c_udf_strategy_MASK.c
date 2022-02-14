
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vop_strategy_args {struct vnode* a_vp; struct buf* a_bp; } ;
struct vnode {int dummy; } ;
struct udf_node {TYPE_1__* udfmp; } ;
struct bufobj {int dummy; } ;
struct buf {int b_blkno; int b_lblkno; int b_iooffset; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_2__ {int bshift; struct bufobj* im_bo; } ;


 int FUNC_0 (struct bufobj*,struct buf*) ;
 int VAR_0 ;
 struct udf_node* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct udf_node*,int ,int*,int *) ;

__attribute__((used)) static int
FUNC_7(struct vop_strategy_args *VAR_1)
{
 struct buf *VAR_2;
 struct vnode *VAR_3;
 struct udf_node *VAR_4;
 struct bufobj *VAR_5;
 off_t VAR_6;
 uint32_t VAR_7;
 daddr_t VAR_8;
 int VAR_9;

 VAR_2 = VAR_1->a_bp;
 VAR_3 = VAR_1->a_vp;
 VAR_4 = FUNC_1(VAR_3);

 if (VAR_2->b_blkno == VAR_2->b_lblkno) {
  VAR_6 = FUNC_5(VAR_4->udfmp, VAR_2->b_lblkno);
  VAR_9 = FUNC_6(VAR_4, VAR_6, &VAR_8, &VAR_7);
  if (VAR_9) {
   FUNC_3(VAR_2);
   VAR_2->b_blkno = -1;
   FUNC_2(VAR_2);
   return (0);
  }

  VAR_2->b_blkno = VAR_8 << (VAR_4->udfmp->bshift - VAR_0);
 }
 VAR_5 = VAR_4->udfmp->im_bo;
 VAR_2->b_iooffset = FUNC_4(VAR_2->b_blkno);
 FUNC_0(VAR_5, VAR_2);
 return (0);
}
