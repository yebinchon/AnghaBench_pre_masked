
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_18__ {int m_dirblkfsbs; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_17__ {scalar_t__ di_size; scalar_t__ di_nblocks; } ;
struct TYPE_19__ {TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_fsize_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_drfsbno_t ;
typedef int xfs_dir2_db_t ;
typedef int xfs_dablk_t ;
struct TYPE_20__ {int total; int flist; int * firstblock; int * trans; TYPE_3__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct TYPE_21__ {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;
typedef TYPE_5__ xfs_bmbt_irec_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 int VAR_9 ;
 TYPE_5__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (int *,TYPE_3__*,int,scalar_t__*,int ) ;
 int FUNC_9 (int *,TYPE_3__*,scalar_t__,int,int,int *,int ,TYPE_5__*,int*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (int *,TYPE_3__*,int ) ;

int
FUNC_12(
 xfs_da_args_t *VAR_10,
 int VAR_11,
 xfs_dir2_db_t *VAR_12)
{
 xfs_fileoff_t VAR_13;
 int VAR_14;
 xfs_inode_t *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 xfs_bmbt_irec_t VAR_19;
 int VAR_20;
 xfs_bmbt_irec_t *VAR_21;
 xfs_mount_t *VAR_22;
 int VAR_23;
 xfs_trans_t *VAR_24;
 xfs_drfsbno_t VAR_25;

 FUNC_7(VAR_10, VAR_11);

 VAR_15 = VAR_10->dp;
 VAR_24 = VAR_10->trans;
 VAR_22 = VAR_15->i_mount;
 VAR_25 = VAR_15->i_d.di_nblocks;



 VAR_13 = FUNC_2(VAR_22, VAR_11 * VAR_8);
 VAR_14 = VAR_22->m_dirblkfsbs;



 if ((VAR_16 = FUNC_8(VAR_24, VAR_15, VAR_14, &VAR_13, VAR_6)))
  return VAR_16;
 VAR_23 = 1;
 FUNC_0(VAR_10->firstblock != ((void*)0));



 if ((VAR_16 = FUNC_9(VAR_24, VAR_15, VAR_13, VAR_14,
   VAR_4|VAR_3|VAR_2,
   VAR_10->firstblock, VAR_10->total, &VAR_19, &VAR_23,
   VAR_10->flist)))
  return VAR_16;
 FUNC_0(VAR_23 <= 1);
 if (VAR_23 == 1) {
  VAR_21 = &VAR_19;
  VAR_20 = 1;
 }




 else if (VAR_23 == 0 && VAR_14 > 1) {
  xfs_fileoff_t VAR_26;




  VAR_21 = FUNC_5(sizeof(*VAR_21) * VAR_14, VAR_1);



  for (VAR_26 = VAR_13, VAR_20 = 0; VAR_26 < VAR_13 + VAR_14; ) {
   int VAR_27;




   VAR_23 = FUNC_1(VAR_5, VAR_14);
   VAR_27 = (int)(VAR_13 + VAR_14 - VAR_26);
   if ((VAR_16 = FUNC_9(VAR_24, VAR_15, VAR_26, VAR_27,
     VAR_4|VAR_3,
     VAR_10->firstblock, VAR_10->total,
     &VAR_21[VAR_20], &VAR_23, VAR_10->flist))) {
    FUNC_6(VAR_21);
    return VAR_16;
   }
   if (VAR_23 < 1)
    break;



   VAR_20 += VAR_23;
   VAR_26 = VAR_21[VAR_20 - 1].br_startoff +
       VAR_21[VAR_20 - 1].br_blockcount;
  }
 }



 else {
  VAR_20 = 0;
  VAR_21 = ((void*)0);
 }



 for (VAR_18 = 0, VAR_17 = 0; VAR_18 < VAR_20; VAR_18++)
  VAR_17 += VAR_21[VAR_18].br_blockcount;



 if (VAR_17 != VAR_14 || VAR_21[0].br_startoff != VAR_13 ||
     VAR_21[VAR_20 - 1].br_startoff + VAR_21[VAR_20 - 1].br_blockcount !=
     VAR_13 + VAR_14) {
  if (VAR_21 != &VAR_19)
   FUNC_6(VAR_21);
  return FUNC_3(VAR_0);
 }



 if (VAR_21 != &VAR_19)
  FUNC_6(VAR_21);


 VAR_10->total -= VAR_15->i_d.di_nblocks - VAR_25;
 *VAR_12 = FUNC_10(VAR_22, (xfs_dablk_t)VAR_13);




 if (VAR_11 == VAR_7) {
  xfs_fsize_t VAR_28;

  VAR_28 = FUNC_4(VAR_22, VAR_13 + VAR_14);
  if (VAR_28 > VAR_15->i_d.di_size) {
   VAR_15->i_d.di_size = VAR_28;
   FUNC_11(VAR_24, VAR_15, VAR_9);
  }
 }
 return 0;
}
