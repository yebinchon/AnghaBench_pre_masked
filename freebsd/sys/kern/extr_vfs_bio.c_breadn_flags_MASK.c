
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct TYPE_2__ {int ru_inblock; } ;
struct thread {TYPE_1__ td_ru; int td_proc; } ;
struct buf {int b_flags; void (* b_ckhashcalc ) (struct buf*) ;int b_blkno; int b_iooffset; struct ucred* b_rcred; int b_ioflags; int b_iocmd; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct vnode*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ucred* VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*,int *,int*,int,struct ucred*,int,void (*) (struct buf*)) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 struct ucred* FUNC_7 (struct ucred*) ;
 struct thread* VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct vnode*,int ,int,int ,int ,int,struct buf**) ;
 int FUNC_10 (int ,struct buf*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (struct buf*,int ) ;

int
FUNC_12(struct vnode *VAR_11, daddr_t VAR_12, int VAR_13, daddr_t *VAR_14,
    int *VAR_15, int VAR_16, struct ucred *VAR_17, int VAR_18,
    void (*VAR_19)(struct buf *), struct buf **VAR_20)
{
 struct buf *VAR_21;
 struct thread *VAR_22;
 int VAR_23, VAR_24, VAR_25;

 FUNC_0(VAR_7, "breadn(%p, %jd, %d)", VAR_11, VAR_12, VAR_13);
 VAR_22 = VAR_9;




 VAR_23 = FUNC_9(VAR_11, VAR_12, VAR_13, 0, 0, VAR_18, &VAR_21);
 if (VAR_23 != 0) {
  *VAR_20 = ((void*)0);
  return (VAR_23);
 }
 VAR_18 &= ~VAR_6;
 *VAR_20 = VAR_21;




 VAR_24 = 0;
 if ((VAR_21->b_flags & VAR_2) == 0) {







  VAR_22->td_ru.ru_inblock++;
  VAR_21->b_iocmd = VAR_1;
  VAR_21->b_flags &= ~VAR_4;
  if ((VAR_18 & VAR_5) != 0) {
   VAR_21->b_flags |= VAR_3;
   VAR_21->b_ckhashcalc = VAR_19;
  }
  VAR_21->b_ioflags &= ~VAR_0;
  if (VAR_21->b_rcred == VAR_8 && VAR_17 != VAR_8)
   VAR_21->b_rcred = FUNC_7(VAR_17);
  FUNC_11(VAR_21, 0);
  VAR_21->b_iooffset = FUNC_8(VAR_21->b_blkno);
  FUNC_5(VAR_21);
  ++VAR_24;
 }




 FUNC_3(VAR_11, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

 VAR_25 = 0;
 if (VAR_24) {
  VAR_25 = FUNC_6(VAR_21);
  if (VAR_25 != 0) {
   FUNC_4(VAR_21);
   *VAR_20 = ((void*)0);
  }
 }
 return (VAR_25);
}
