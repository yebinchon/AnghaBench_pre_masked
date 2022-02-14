
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long u_quad_t ;
struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; TYPE_2__* v_mount; } ;
struct ucred {int dummy; } ;
struct TYPE_3__ {int ru_inblock; } ;
struct thread {TYPE_1__ td_ru; int td_proc; } ;
struct buf {int b_flags; long b_offset; long b_bufsize; int b_blkno; void* b_iooffset; int * b_iodone; int b_ioflags; void* b_iocmd; } ;
typedef long off_t ;
typedef int daddr_t ;
struct TYPE_4__ {long mnt_iosize_max; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct buf*) ;
 scalar_t__ FUNC_3 (struct buf*,int,int *) ;
 int FUNC_4 (struct buf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vnode*,int,int *,int*,int*,int *) ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 (struct buf*) ;
 int FUNC_11 (struct buf*) ;
 int FUNC_12 (struct buf*) ;
 struct buf* FUNC_13 (struct vnode*,long,int,int,long,int,int,struct buf*) ;
 struct thread* VAR_13 ;
 void* FUNC_14 (int) ;
 struct buf* FUNC_15 (struct bufobj*,int) ;
 struct buf* FUNC_16 (struct vnode*,int,long,int ,int ,int) ;
 int FUNC_17 (struct vnode*,int,long,int ,int ,int,struct buf**) ;
 int FUNC_18 (long,long) ;
 int FUNC_19 (int,int) ;
 int VAR_14 ;
 int FUNC_20 (int ,struct buf*,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 long VAR_17 ;
 int VAR_18 ;
 int FUNC_21 (struct buf*,int ) ;

int
FUNC_22(struct vnode *VAR_19, u_quad_t VAR_20, daddr_t VAR_21, long VAR_22,
    struct ucred *VAR_23, long VAR_24, int VAR_25, int VAR_26,
    struct buf **VAR_27)
{
 struct buf *VAR_28, *VAR_29, *VAR_30;
 struct bufobj *VAR_31;
 struct thread *VAR_32;
 daddr_t VAR_33, VAR_34;
 int VAR_35, VAR_36;
 int VAR_37, VAR_38;
 int VAR_39;

 VAR_37 = 0;
 VAR_32 = VAR_13;
 VAR_31 = &VAR_19->v_bufobj;
 if (!VAR_18)
  VAR_26 &= ~VAR_9;





 VAR_36 = VAR_19->v_mount->mnt_iosize_max / VAR_22;
 VAR_35 = VAR_25;
 VAR_35 = FUNC_19(VAR_16, VAR_35);
 VAR_35 = FUNC_19(VAR_14/8, VAR_35);
 if (((u_quad_t)(VAR_21 + VAR_35 + 1) * VAR_22) > VAR_20)
  VAR_35 = (VAR_20 / VAR_22) - VAR_21;




 VAR_37 = FUNC_17(VAR_19, VAR_21, VAR_22, 0, 0, VAR_26, &VAR_28);
 if (VAR_37 != 0) {
  *VAR_27 = ((void*)0);
  return (VAR_37);
 }
 VAR_26 &= ~VAR_8;
 VAR_34 = VAR_21;
 *VAR_27 = VAR_30 = VAR_28;






 if (VAR_28->b_flags & VAR_3) {
  if (!VAR_25) {
   return 0;
  } else if ((VAR_28->b_flags & VAR_7) == 0) {
   return 0;
  } else {
   VAR_28->b_flags &= ~VAR_7;
   FUNC_0(VAR_31);
   for (VAR_39 = 1; VAR_39 < VAR_35; VAR_39++) {




    VAR_29 = FUNC_15(&VAR_19->v_bufobj, VAR_21+VAR_39);
    if (VAR_29 == ((void*)0) || (VAR_29->b_flags & VAR_6))
     break;






    if ((((VAR_39 % VAR_36) == (VAR_36 - 1)) ||
        (VAR_39 == (VAR_35 - 1)))
        && (0 == FUNC_3(VAR_29,
     VAR_10 | VAR_11, ((void*)0)))) {
     VAR_29->b_flags |= VAR_7;
     FUNC_4(VAR_29);
    }
   }
   FUNC_1(VAR_31);
   if (VAR_39 >= VAR_35) {
    return 0;
   }
   VAR_21 += VAR_39;
  }
  VAR_30 = VAR_28 = ((void*)0);




 } else {
  off_t VAR_40 = VAR_28->b_offset;
  int VAR_41;
  long VAR_42;

  FUNC_5(VAR_28->b_offset != VAR_12,
      ("cluster_read: no buffer offset"));

  VAR_38 = 0;




  VAR_42 = VAR_17 * VAR_22;
  if (VAR_42 > VAR_24)
   VAR_24 = VAR_42;





  if (VAR_40 + VAR_24 > VAR_20)
   VAR_24 = VAR_20 - VAR_40;
  VAR_41 = FUNC_18(VAR_24, VAR_22);
  if (VAR_41 > VAR_36)
   VAR_41 = VAR_36;




  if (VAR_41 > 1) {
       VAR_37 = FUNC_8(VAR_19, VAR_21, ((void*)0),
    &VAR_33, &VAR_38, ((void*)0));



   if (VAR_37 || VAR_33 == -1)
    VAR_38 = 0;
  }





  if (VAR_38) {

   VAR_38 = FUNC_19(VAR_38 + 1, VAR_41);
   if (VAR_38 < VAR_41)
    VAR_41 = VAR_38;
   VAR_28 = FUNC_13(VAR_19, VAR_20, VAR_21,
       VAR_33, VAR_22, VAR_41, VAR_26, VAR_28);
   VAR_21 += (VAR_28->b_bufsize / VAR_22);
  } else {
   VAR_28->b_flags |= VAR_7;
   VAR_28->b_iocmd = VAR_1;
   VAR_21 += 1;
  }
 }




 if (VAR_28) {
  if ((VAR_28->b_flags & VAR_4) == 0) {
   FUNC_21(VAR_28, 0);
  }
  VAR_28->b_flags &= ~VAR_6;
  VAR_28->b_ioflags &= ~VAR_0;
  if ((VAR_28->b_flags & VAR_2) || VAR_28->b_iodone != ((void*)0))
   FUNC_2(VAR_28);
  VAR_28->b_iooffset = FUNC_14(VAR_28->b_blkno);
  FUNC_11(VAR_28);







  VAR_32->td_ru.ru_inblock++;
 }




 while (VAR_21 < (VAR_34 + VAR_35)) {
  VAR_37 = FUNC_8(VAR_19, VAR_21, ((void*)0), &VAR_33, &VAR_38, ((void*)0));
  if (VAR_37)
   break;

  if (VAR_33 == -1)
   break;






  if (VAR_38) {
   VAR_38 = FUNC_19(VAR_38 + 1, VAR_36);
   VAR_29 = FUNC_13(VAR_19, VAR_20, VAR_21, VAR_33,
       VAR_22, VAR_38, VAR_26, ((void*)0));
   VAR_21 += (VAR_29->b_bufsize / VAR_22);
   if (VAR_29->b_flags & VAR_5) {
    FUNC_9(VAR_29);
    continue;
   }
  } else {
   VAR_29 = FUNC_16(VAR_19, VAR_21, VAR_22, 0, 0, VAR_26);
   VAR_21 += 1;
   if (VAR_29->b_flags & VAR_5) {
    FUNC_9(VAR_29);
    continue;
   }
   VAR_29->b_flags |= VAR_2 | VAR_7;
   VAR_29->b_iocmd = VAR_1;
   VAR_29->b_blkno = VAR_33;
  }
  if (VAR_29->b_flags & VAR_3) {
   VAR_29->b_flags &= ~VAR_2;
   FUNC_9(VAR_29);
   continue;
  }
  if ((VAR_29->b_flags & VAR_4) == 0) {
   FUNC_21(VAR_29, 0);
  }
  VAR_29->b_flags &= ~VAR_6;
  VAR_29->b_ioflags &= ~VAR_0;
  if ((VAR_29->b_flags & VAR_2) || VAR_29->b_iodone != ((void*)0))
   FUNC_2(VAR_29);
  VAR_29->b_iooffset = FUNC_14(VAR_29->b_blkno);
  FUNC_11(VAR_29);







  VAR_32->td_ru.ru_inblock++;
 }

 if (VAR_30) {




  VAR_37 = FUNC_12(VAR_30);
  if (VAR_37 != 0) {
   FUNC_10(VAR_30);
   *VAR_27 = ((void*)0);
  }
 }
 return (VAR_37);
}
