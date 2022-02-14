
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_14__ {scalar_t__ m_dirleafblk; int m_dirblkfsbs; scalar_t__ m_dirfreeblk; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_13__ {scalar_t__ di_nblocks; } ;
struct TYPE_15__ {TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_drfsbno_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_16__ {int whichfork; int total; int flist; int * firstblock; int * trans; TYPE_3__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct TYPE_17__ {scalar_t__ br_startoff; scalar_t__ br_blockcount; } ;
typedef TYPE_5__ xfs_bmbt_irec_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_3__*,int,scalar_t__*,int) ;
 int FUNC_7 (int *,TYPE_3__*,scalar_t__,int,int,int *,int ,TYPE_5__*,int*,int ) ;
 int FUNC_8 (int) ;

int
FUNC_9(xfs_da_args_t *VAR_7, xfs_dablk_t *VAR_8)
{
 xfs_fileoff_t VAR_9, VAR_10;
 xfs_bmbt_irec_t VAR_11;
 xfs_bmbt_irec_t *VAR_12;
 xfs_inode_t *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 xfs_trans_t *VAR_22;
 xfs_mount_t *VAR_23;
 xfs_drfsbno_t VAR_24;

 FUNC_5(VAR_7);

 VAR_13 = VAR_7->dp;
 VAR_23 = VAR_13->i_mount;
 VAR_16 = VAR_7->whichfork;
 VAR_22 = VAR_7->trans;
 VAR_24 = VAR_13->i_d.di_nblocks;




 if (VAR_16 == VAR_6) {
  VAR_9 = VAR_23->m_dirleafblk;
  VAR_17 = VAR_23->m_dirblkfsbs;
 } else {
  VAR_9 = 0;
  VAR_17 = 1;
 }



 if ((VAR_15 = FUNC_6(VAR_22, VAR_13, VAR_17, &VAR_9, VAR_16)))
  return VAR_15;
 if (VAR_16 == VAR_6)
  FUNC_0(VAR_9 >= VAR_23->m_dirleafblk && VAR_9 < VAR_23->m_dirfreeblk);



 VAR_14 = 1;
 FUNC_0(VAR_7->firstblock != ((void*)0));
 if ((VAR_15 = FUNC_7(VAR_22, VAR_13, VAR_9, VAR_17,
   FUNC_8(VAR_16)|VAR_4|VAR_3|
   VAR_2,
   VAR_7->firstblock, VAR_7->total, &VAR_11, &VAR_14,
   VAR_7->flist))) {
  return VAR_15;
 }
 FUNC_0(VAR_14 <= 1);
 if (VAR_14 == 1) {
  VAR_12 = &VAR_11;
  VAR_21 = 1;
 }




 else if (VAR_14 == 0 && VAR_17 > 1) {
  VAR_12 = FUNC_3(sizeof(*VAR_12) * VAR_17, VAR_1);
  for (VAR_10 = VAR_9, VAR_21 = 0; VAR_10 < VAR_9 + VAR_17; ) {
   VAR_14 = FUNC_1(VAR_5, VAR_17);
   VAR_18 = (int)(VAR_9 + VAR_17 - VAR_10);
   if ((VAR_15 = FUNC_7(VAR_22, VAR_13, VAR_10, VAR_18,
     FUNC_8(VAR_16)|VAR_4|
     VAR_3,
     VAR_7->firstblock, VAR_7->total,
     &VAR_12[VAR_21], &VAR_14, VAR_7->flist))) {
    FUNC_4(VAR_12);
    return VAR_15;
   }
   if (VAR_14 < 1)
    break;
   VAR_21 += VAR_14;
   VAR_10 = VAR_12[VAR_21 - 1].br_startoff +
       VAR_12[VAR_21 - 1].br_blockcount;
  }
 } else {
  VAR_21 = 0;
  VAR_12 = ((void*)0);
 }



 for (VAR_20 = 0, VAR_19 = 0; VAR_20 < VAR_21; VAR_20++)
  VAR_19 += VAR_12[VAR_20].br_blockcount;
 if (VAR_19 != VAR_17 || VAR_12[0].br_startoff != VAR_9 ||
     VAR_12[VAR_21 - 1].br_startoff + VAR_12[VAR_21 - 1].br_blockcount !=
     VAR_9 + VAR_17) {
  if (VAR_12 != &VAR_11)
   FUNC_4(VAR_12);
  return FUNC_2(VAR_0);
 }
 if (VAR_12 != &VAR_11)
  FUNC_4(VAR_12);

 VAR_7->total -= VAR_13->i_d.di_nblocks - VAR_24;
 *VAR_8 = (xfs_dablk_t)VAR_9;
 return 0;
}
