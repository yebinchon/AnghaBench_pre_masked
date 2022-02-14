
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bufobj {int dummy; } ;
struct vnode {scalar_t__ v_type; TYPE_2__* v_mount; struct bufobj v_bufobj; } ;
struct buf {int b_lblkno; scalar_t__ b_data; int b_flags; int b_bufsize; scalar_t__ b_blkno; struct vnode* b_vp; } ;
typedef int daddr_t ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct vnode*,int,int,int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (struct vnode*,int,int,scalar_t__) ;

int
FUNC_7(struct buf *VAR_8)
{
 struct bufobj *VAR_9;
 int VAR_10;
 int VAR_11;
 daddr_t VAR_12 = VAR_8->b_lblkno;
 struct vnode *VAR_13 = VAR_8->b_vp;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_9 = &VAR_13->v_bufobj;
 VAR_18 = (VAR_8->b_data == VAR_7) ? VAR_4 : 0;





 if ((VAR_13->v_type == VAR_6) &&
     (VAR_13->v_mount != 0) &&
     (VAR_8->b_flags & (VAR_1 | VAR_2)) == VAR_1) {

  VAR_16 = VAR_13->v_mount->mnt_stat.f_iosize;
  VAR_17 = VAR_5 / VAR_16;

  FUNC_0(VAR_9);
  for (VAR_10 = 1; VAR_10 < VAR_17; VAR_10++)
   if (FUNC_6(VAR_13, VAR_16, VAR_12 + VAR_10,
       VAR_8->b_blkno + ((VAR_10 * VAR_16) >> VAR_3)) == 0)
    break;

  for (VAR_11 = 1; VAR_10 + VAR_11 <= VAR_17 && VAR_11 <= VAR_12; VAR_11++)
   if (FUNC_6(VAR_13, VAR_16, VAR_12 - VAR_11,
       VAR_8->b_blkno - ((VAR_11 * VAR_16) >> VAR_3)) == 0)
    break;
  FUNC_1(VAR_9);
  --VAR_11;
  VAR_14 = VAR_10 + VAR_11;



  if (VAR_14 != 1) {
   FUNC_2(VAR_8);
   VAR_15 = FUNC_5(VAR_13, VAR_16, VAR_12 - VAR_11, VAR_14,
       VAR_18);
   return (VAR_15);
  }
 }
 FUNC_3(VAR_8);
 VAR_8->b_flags |= VAR_0;





 VAR_15 = VAR_8->b_bufsize;
 (void) FUNC_4(VAR_8);

 return (VAR_15);
}
