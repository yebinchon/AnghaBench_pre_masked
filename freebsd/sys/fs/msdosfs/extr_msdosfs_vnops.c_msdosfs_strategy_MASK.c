
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_strategy_args {int a_vp; struct buf* a_bp; } ;
struct denode {TYPE_1__* de_pmp; } ;
struct bufobj {int dummy; } ;
struct buf {int b_blkno; int b_lblkno; int b_error; int b_iooffset; int b_ioflags; } ;
typedef int daddr_t ;
struct TYPE_2__ {struct bufobj* pm_bo; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufobj*,struct buf*) ;
 struct denode* FUNC_1 (int ) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct denode*,int,int*,int ,int ) ;
 int FUNC_5 (struct buf*) ;

__attribute__((used)) static int
FUNC_6(struct vop_strategy_args *VAR_1)
{
 struct buf *VAR_2 = VAR_1->a_bp;
 struct denode *VAR_3 = FUNC_1(VAR_1->a_vp);
 struct bufobj *VAR_4;
 int VAR_5 = 0;
 daddr_t VAR_6;







 if (VAR_2->b_blkno == VAR_2->b_lblkno) {
  VAR_5 = FUNC_4(VAR_3, VAR_2->b_lblkno, &VAR_6, 0, 0);
  VAR_2->b_blkno = VAR_6;
  if (VAR_5) {
   VAR_2->b_error = VAR_5;
   VAR_2->b_ioflags |= VAR_0;
   FUNC_2(VAR_2);
   return (0);
  }
  if ((long)VAR_2->b_blkno == -1)
   FUNC_5(VAR_2);
 }
 if (VAR_2->b_blkno == -1) {
  FUNC_2(VAR_2);
  return (0);
 }




 VAR_2->b_iooffset = FUNC_3(VAR_2->b_blkno);
 VAR_4 = VAR_3->de_pmp->pm_bo;
 FUNC_0(VAR_4, VAR_2);
 return (0);
}
