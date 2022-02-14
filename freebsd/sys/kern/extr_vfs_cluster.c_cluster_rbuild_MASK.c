
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef TYPE_5__* vm_page_t ;
typedef long vm_offset_t ;
typedef int u_quad_t ;
struct vnode {TYPE_4__* v_mount; } ;
struct TYPE_13__ {int cluster_head; } ;
struct buf {int b_flags; int b_blkno; char* b_data; int b_lblkno; scalar_t__ b_offset; long b_bcount; long b_bufsize; int b_npages; int b_vflags; scalar_t__ b_kvasize; TYPE_5__** b_pages; TYPE_2__ b_cluster; void* b_iocmd; TYPE_3__* b_bufobj; int b_iodone; } ;
typedef long off_t ;
typedef int intmax_t ;
typedef int daddr_t ;
struct TYPE_16__ {int valid; } ;
struct TYPE_12__ {long f_iosize; } ;
struct TYPE_15__ {scalar_t__ mnt_iosize_max; TYPE_1__ mnt_stat; } ;
struct TYPE_14__ {int bo_object; } ;
struct TYPE_11__ {int cluster_entry; } ;


 void* VAR_0 ;
 int FUNC_0 (struct buf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 long VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct buf*,int ) ;
 TYPE_10__ VAR_14 ;
 void* VAR_15 ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (long) ;
 scalar_t__ FUNC_6 (struct buf*) ;
 int VAR_16 ;
 int VAR_17 ;
 struct buf* FUNC_7 (struct vnode*,int,long,int ,int ,int) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct vnode*,struct buf*) ;
 int FUNC_10 (int ,TYPE_5__**,int) ;
 int FUNC_11 (char*,long,long) ;
 scalar_t__ FUNC_12 (long) ;
 int FUNC_13 (long) ;
 struct buf* FUNC_14 (int ,int ) ;
 char* VAR_18 ;
 int FUNC_15 (struct buf*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (int,long) ;
 int FUNC_20 (TYPE_5__*) ;
 scalar_t__ FUNC_21 (TYPE_5__*) ;

__attribute__((used)) static struct buf *
FUNC_22(struct vnode *VAR_19, u_quad_t VAR_20, daddr_t VAR_21,
    daddr_t VAR_22, long VAR_23, int VAR_24, int VAR_25, struct buf *VAR_26)
{
 struct buf *VAR_27, *VAR_28;
 daddr_t VAR_29;
 off_t VAR_30;
 long VAR_31, VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;

 FUNC_1(VAR_23 == VAR_19->v_mount->mnt_stat.f_iosize,
     ("cluster_rbuild: size %ld != f_iosize %jd\n",
     VAR_23, (intmax_t)VAR_19->v_mount->mnt_stat.f_iosize));




 while ((u_quad_t) VAR_23 * (VAR_21 + VAR_24) > VAR_20) {
  --VAR_24;
 }

 if (VAR_26) {
  VAR_28 = VAR_26;
  VAR_28->b_iocmd = VAR_0;
 } else {
  VAR_28 = FUNC_7(VAR_19, VAR_21, VAR_23, 0, 0, VAR_25);
  if (VAR_28->b_flags & VAR_3)
   return VAR_28;
  VAR_28->b_flags |= VAR_2 | VAR_6;
  VAR_28->b_iocmd = VAR_0;
 }
 VAR_28->b_blkno = VAR_22;
 if( (VAR_28->b_flags & VAR_5) ||
  ((VAR_28->b_flags & VAR_7) == 0) || (VAR_24 <= 1) )
  return VAR_28;

 VAR_27 = FUNC_14(VAR_17, VAR_10);
 if (VAR_27 == ((void*)0))
  return VAR_28;







 VAR_27->b_flags = VAR_2 | VAR_4 | VAR_7;
 if ((VAR_25 & VAR_9) != 0) {
  VAR_27->b_data = VAR_18;
 } else {
  VAR_27->b_data = (char *)((vm_offset_t)VAR_27->b_data |
      ((vm_offset_t)VAR_28->b_data & VAR_12));
 }
 VAR_27->b_iocmd = VAR_0;
 VAR_27->b_iodone = VAR_16;
 VAR_27->b_blkno = VAR_22;
 VAR_27->b_lblkno = VAR_21;
 VAR_27->b_offset = VAR_28->b_offset;
 FUNC_1(VAR_27->b_offset != VAR_11, ("cluster_rbuild: no buffer offset"));
 FUNC_9(VAR_19, VAR_27);

 FUNC_2(&VAR_27->b_cluster.cluster_head);

 VAR_27->b_bcount = 0;
 VAR_27->b_bufsize = 0;
 VAR_27->b_npages = 0;

 VAR_34 = FUNC_5(VAR_23);
 for (VAR_29 = VAR_22, VAR_33 = 0; VAR_33 < VAR_24; ++VAR_33, VAR_29 += VAR_34) {
  if (VAR_33 == 0) {
   FUNC_16(VAR_28->b_bufobj->bo_object,
       VAR_28->b_npages);
   FUNC_15(VAR_28);
  } else {
   if ((VAR_27->b_npages * VAR_13) +
       FUNC_12(VAR_23) > VAR_19->v_mount->mnt_iosize_max) {
    break;
   }

   VAR_28 = FUNC_7(VAR_19, VAR_21 + VAR_33, VAR_23, 0, 0, VAR_8 |
       (VAR_25 & VAR_9));


   if (VAR_28 == ((void*)0))
    break;
   if ((VAR_28->b_vflags & VAR_1) ||
       (VAR_28->b_flags & VAR_3) ||
       (VAR_28->b_flags & VAR_7) == 0) {
    FUNC_4(VAR_28);
    break;
   }






   VAR_30 = VAR_28->b_offset;
   VAR_32 = VAR_23;
   for (VAR_35 = 0; VAR_32 > 0; VAR_35++) {
    VAR_37 = VAR_30 & VAR_12;
    VAR_31 = VAR_32;
    if (VAR_37 + VAR_31 > VAR_13)
     VAR_31 = VAR_13 - VAR_37;
    if (FUNC_21(VAR_28->b_pages[VAR_35]) == 0)
     break;
    if ((VAR_28->b_pages[VAR_35]->valid &
        FUNC_19(VAR_37, VAR_31)) != 0) {
     FUNC_20(VAR_28->b_pages[VAR_35]);
     break;
    }
    FUNC_16(VAR_28->b_bufobj->bo_object, 1);
    VAR_30 += VAR_31;
    VAR_32 -= VAR_31;
   }
   if (VAR_32 > 0) {
clean_sbusy:
    FUNC_17(VAR_28->b_bufobj->bo_object,
        VAR_35);
    for (VAR_36 = 0; VAR_36 < VAR_35; VAR_36++)
     FUNC_20(VAR_28->b_pages[VAR_36]);
    FUNC_4(VAR_28);
    break;
   }




   if ((VAR_26 && (VAR_33 == 1)) || (VAR_33 == (VAR_24 - 1)))
    VAR_28->b_flags |= VAR_6;
   VAR_28->b_flags |= VAR_2;
   VAR_28->b_iocmd = VAR_0;
   if (VAR_28->b_blkno == VAR_28->b_lblkno) {
    VAR_28->b_blkno = VAR_29;
   } else if (VAR_28->b_blkno != VAR_29) {
    goto clean_sbusy;
   }
  }




  FUNC_0(VAR_28);
  FUNC_3(&VAR_27->b_cluster.cluster_head,
   VAR_28, VAR_14.cluster_entry);
  for (VAR_35 = 0; VAR_35 < VAR_28->b_npages; VAR_35 += 1) {
   vm_page_t VAR_38;

   VAR_38 = VAR_28->b_pages[VAR_35];
   if ((VAR_27->b_npages == 0) ||
       (VAR_27->b_pages[VAR_27->b_npages-1] != VAR_38)) {
    VAR_27->b_pages[VAR_27->b_npages] = VAR_38;
    VAR_27->b_npages++;
   }
   if (FUNC_18(VAR_38))
    VAR_28->b_pages[VAR_35] = VAR_15;
  }






  if (VAR_28->b_bcount != VAR_23)
   FUNC_11("warning: tbp->b_bcount wrong %ld vs %ld\n", VAR_28->b_bcount, VAR_23);
  if (VAR_28->b_bufsize != VAR_23)
   FUNC_11("warning: tbp->b_bufsize wrong %ld vs %ld\n", VAR_28->b_bufsize, VAR_23);
  VAR_27->b_bcount += VAR_23;
  VAR_27->b_bufsize += VAR_23;
 }





 for (VAR_35 = 0; VAR_35 < VAR_27->b_npages; VAR_35++) {
  if (FUNC_18(VAR_27->b_pages[VAR_35]))
   VAR_27->b_pages[VAR_35] = VAR_15;
 }
 if (VAR_27->b_bufsize > VAR_27->b_kvasize)
  FUNC_8("cluster_rbuild: b_bufsize(%ld) > b_kvasize(%d)\n",
      VAR_27->b_bufsize, VAR_27->b_kvasize);

 if (FUNC_6(VAR_27)) {
  FUNC_10(FUNC_13((vm_offset_t) VAR_27->b_data),
      (vm_page_t *)VAR_27->b_pages, VAR_27->b_npages);
 }
 return (VAR_27);
}
