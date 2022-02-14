
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct TYPE_2__ {int ru_inblock; } ;
struct thread {TYPE_1__ td_ru; } ;
struct buf {int b_flags; void (* b_ckhashcalc ) (struct buf*) ;int b_blkno; int b_iooffset; struct ucred* b_rcred; int b_iocmd; int b_ioflags; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ucred* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 struct ucred* FUNC_5 (struct ucred*) ;
 int VAR_8 ;
 struct thread* VAR_9 ;
 int FUNC_6 (int ) ;
 struct buf* FUNC_7 (struct vnode*,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct vnode*,int ) ;
 int FUNC_9 (int ,struct buf*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (struct buf*,int ) ;

__attribute__((used)) static void
FUNC_11(struct vnode * VAR_11, daddr_t * VAR_12, int * VAR_13, int VAR_14,
    struct ucred * VAR_15, int VAR_16, void (*VAR_17)(struct buf *))
{
 struct buf *VAR_18;
 struct thread *VAR_19;
 int VAR_20;

 VAR_19 = VAR_9;

 for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++, VAR_12++, VAR_13++) {
  if (FUNC_8(VAR_11, *VAR_12))
   continue;
  VAR_18 = FUNC_7(VAR_11, *VAR_12, *VAR_13, 0, 0, 0);
  if ((VAR_18->b_flags & VAR_3) != 0) {
   FUNC_3(VAR_18);
   continue;
  }







  VAR_19->td_ru.ru_inblock++;
  VAR_18->b_flags |= VAR_2;
  VAR_18->b_flags &= ~VAR_5;
  if ((VAR_16 & VAR_6) != 0) {
   VAR_18->b_flags |= VAR_4;
   VAR_18->b_ckhashcalc = VAR_17;
  }
  VAR_18->b_ioflags &= ~VAR_0;
  VAR_18->b_iocmd = VAR_1;
  if (VAR_18->b_rcred == VAR_7 && VAR_15 != VAR_7)
   VAR_18->b_rcred = FUNC_5(VAR_15);
  FUNC_10(VAR_18, 0);
  FUNC_0(VAR_18);
  VAR_18->b_iooffset = FUNC_6(VAR_18->b_blkno);
  FUNC_4(VAR_18);
 }
}
