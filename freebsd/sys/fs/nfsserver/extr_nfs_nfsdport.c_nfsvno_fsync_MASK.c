
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_quad_t ;
typedef int u_int64_t ;
struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; scalar_t__ v_object; TYPE_2__* v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct buf {int b_flags; } ;
typedef int daddr_t ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {int mnt_kern_flag; TYPE_1__ mnt_stat; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct bufobj*) ;
 scalar_t__ FUNC_3 (struct buf*,int,int ) ;
 int FUNC_4 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct vnode*,int ,struct thread*) ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 (struct buf*) ;
 struct buf* FUNC_11 (struct bufobj*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int,int,int ) ;

int
FUNC_14(struct vnode *VAR_14, u_int64_t VAR_15, int VAR_16, struct ucred *VAR_17,
    struct thread *VAR_18)
{
 int VAR_19 = 0;
 if (VAR_16 == 0 || VAR_16 > VAR_7 ||
     (VAR_14->v_mount->mnt_kern_flag & VAR_8) == 0) {



  if (VAR_14->v_object && FUNC_12(VAR_14->v_object)) {
   FUNC_6(VAR_14->v_object);
   FUNC_13(VAR_14->v_object, 0, 0, VAR_10);
   FUNC_7(VAR_14->v_object);
  }
  VAR_19 = FUNC_8(VAR_14, VAR_9, VAR_18);
 } else {





  int VAR_20 = VAR_14->v_mount->mnt_stat.f_iosize;
  int VAR_21 = VAR_20 - 1;
  struct bufobj *VAR_22;
  daddr_t VAR_23;




  if (VAR_15 & VAR_21) {
   VAR_16 += VAR_15 & VAR_21;
   VAR_15 &= ~(u_quad_t)VAR_21;
  }
  if (VAR_15 & VAR_11) {
   VAR_16 += VAR_15 & VAR_11;
   VAR_15 &= ~(u_quad_t)VAR_11;
  }
  VAR_23 = VAR_15 / VAR_20;

  if (VAR_14->v_object && FUNC_12(VAR_14->v_object)) {
   FUNC_6(VAR_14->v_object);
   FUNC_13(VAR_14->v_object, VAR_15, VAR_15 + VAR_16,
       VAR_10);
   FUNC_7(VAR_14->v_object);
  }

  VAR_22 = &VAR_14->v_bufobj;
  FUNC_0(VAR_22);
  while (VAR_16 > 0) {
   struct buf *VAR_24;
   if ((VAR_24 = FUNC_11(&VAR_14->v_bufobj, VAR_23)) != ((void*)0)) {
    if (FUNC_3(VAR_24, VAR_4 | VAR_6 |
        VAR_5, FUNC_1(VAR_22)) == VAR_3) {
     FUNC_0(VAR_22);
     continue;
    }
        if ((VAR_24->b_flags & (VAR_1|VAR_2)) ==
        VAR_1) {
     FUNC_9(VAR_24);
     VAR_24->b_flags &= ~VAR_0;
     FUNC_10(VAR_24);
     ++VAR_13;
    } else
     FUNC_4(VAR_24);
    FUNC_0(VAR_22);
   }
   ++VAR_12;
   if (VAR_16 < VAR_20)
    break;
   VAR_16 -= VAR_20;
   ++VAR_23;
  }
  FUNC_2(VAR_22);
 }
 FUNC_5(VAR_19);
 return (VAR_19);
}
