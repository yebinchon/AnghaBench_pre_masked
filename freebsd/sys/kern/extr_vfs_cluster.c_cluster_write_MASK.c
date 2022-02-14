
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_quad_t ;
struct vnode {scalar_t__ v_type; int v_lasta; int v_clen; int v_cstart; int v_lastw; TYPE_2__* v_mount; } ;
struct cluster_save {int bs_nchildren; struct buf** bs_children; } ;
struct buf {int b_bufsize; scalar_t__ b_lblkno; scalar_t__ b_offset; int b_blkno; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {int mnt_iosize_max; TYPE_1__ mnt_stat; } ;


 int FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct vnode*,scalar_t__,int *,int*,int*,int *) ;
 scalar_t__ FUNC_3 (struct vnode*,struct cluster_save*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (int) ;
 struct cluster_save* FUNC_8 (struct vnode*,struct buf*,int) ;
 int FUNC_9 (struct vnode*,int,int,int,int) ;
 int FUNC_10 (struct cluster_save*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 () ;

void
FUNC_12(struct vnode *VAR_5, struct buf *VAR_6, u_quad_t VAR_7, int VAR_8,
    int VAR_9)
{
 daddr_t VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;

 if (!VAR_4)
  VAR_9 &= ~VAR_0;

 if (VAR_5->v_type == VAR_3) {
  VAR_14 = FUNC_0(VAR_5);
  VAR_13 = VAR_5->v_mount->mnt_stat.f_iosize;
 } else {
  VAR_14 = 0;
  VAR_13 = VAR_6->b_bufsize;
 }
 VAR_10 = VAR_6->b_lblkno;
 FUNC_1(VAR_6->b_offset != VAR_2, ("cluster_write: no buffer offset"));


 if (VAR_10 == 0)
  VAR_5->v_lasta = VAR_5->v_clen = VAR_5->v_cstart = VAR_5->v_lastw = 0;

 if (VAR_5->v_clen == 0 || VAR_10 != VAR_5->v_lastw + 1 ||
     (VAR_6->b_blkno != VAR_5->v_lasta + FUNC_7(VAR_13))) {
  VAR_11 = VAR_5->v_mount->mnt_iosize_max / VAR_13 - 1;
  if (VAR_5->v_clen != 0) {
   VAR_12 = VAR_5->v_lastw - VAR_5->v_cstart + 1;
   if (((u_quad_t) VAR_6->b_offset + VAR_13) != VAR_7 ||
       VAR_10 != VAR_5->v_lastw + 1 || VAR_5->v_clen <= VAR_12) {
    if (!VAR_14 && VAR_8 > 0) {
     FUNC_9(VAR_5, VAR_13,
         VAR_5->v_cstart, VAR_12, VAR_9);
    }
   } else {
    struct buf **VAR_15, **VAR_16;
    struct cluster_save *VAR_17;

    VAR_17 = FUNC_8(VAR_5, VAR_6, VAR_9);
    if (VAR_17 == ((void*)0)) {




     FUNC_4(VAR_6);
     return;
    }
    VAR_16 = &VAR_17->bs_children
        [VAR_17->bs_nchildren - 1];
    if (FUNC_3(VAR_5, VAR_17)) {
     for (VAR_15 = VAR_17->bs_children;
          VAR_15 < VAR_16; VAR_15++)
      FUNC_6(*VAR_15);
     FUNC_10(VAR_17, VAR_1);
     if (VAR_8 > 1) {
      FUNC_9(VAR_5,
          VAR_13, VAR_5->v_cstart,
          VAR_12, VAR_9);
     }
    } else {



     for (VAR_15 = VAR_17->bs_children;
          VAR_15 <= VAR_16; VAR_15++)
      FUNC_5(*VAR_15);
     FUNC_10(VAR_17, VAR_1);
     VAR_5->v_lastw = VAR_10;
     VAR_5->v_lasta = VAR_6->b_blkno;
     return;
    }
   }
  }





  if ((VAR_5->v_type == VAR_3) &&
   ((u_quad_t) VAR_6->b_offset + VAR_13) != VAR_7 &&
      (VAR_6->b_blkno == VAR_6->b_lblkno) &&
      (FUNC_2(VAR_5, VAR_10, ((void*)0), &VAR_6->b_blkno, &VAR_11, ((void*)0)) ||
       VAR_6->b_blkno == -1)) {
   FUNC_4(VAR_6);
   VAR_5->v_clen = 0;
   VAR_5->v_lasta = VAR_6->b_blkno;
   VAR_5->v_cstart = VAR_10 + 1;
   VAR_5->v_lastw = VAR_10;
   return;
  }
  VAR_5->v_clen = VAR_11;
  if (!VAR_14 && VAR_11 == 0) {
   VAR_5->v_cstart = VAR_10 + 1;
   FUNC_4(VAR_6);
  } else {
   VAR_5->v_cstart = VAR_10;
   FUNC_5(VAR_6);
  }
 } else if (VAR_10 == VAR_5->v_cstart + VAR_5->v_clen) {





  FUNC_5(VAR_6);
  if (VAR_8 > 1) {
   FUNC_9(VAR_5, VAR_13, VAR_5->v_cstart,
       VAR_5->v_clen + 1, VAR_9);
  }
  VAR_5->v_clen = 0;
  VAR_5->v_cstart = VAR_10 + 1;
 } else if (FUNC_11()) {



  FUNC_4(VAR_6);
 } else {



  FUNC_5(VAR_6);
 }
 VAR_5->v_lastw = VAR_10;
 VAR_5->v_lasta = VAR_6->b_blkno;
}
