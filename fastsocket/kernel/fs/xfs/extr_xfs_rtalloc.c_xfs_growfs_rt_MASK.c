
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_suminfo_t ;
struct TYPE_25__ {scalar_t__ sb_rblocks; int sb_rextsize; int sb_blocksize; int sb_logblocks; int sb_rbmblocks; int sb_rextents; int sb_rextslog; } ;
typedef TYPE_2__ xfs_sb_t ;
typedef int xfs_rtblock_t ;
struct TYPE_26__ {int m_blkbit_log; int m_rsumlevels; int m_rsumsize; TYPE_5__* m_rsumip; TYPE_5__* m_rbmip; TYPE_2__ m_sb; int * m_rtdev_targp; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_27__ {scalar_t__ newblocks; int extsize; } ;
typedef TYPE_4__ xfs_growfs_rt_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
typedef scalar_t__ xfs_drtbno_t ;
typedef scalar_t__ xfs_drfsbno_t ;
typedef int xfs_buf_t ;
typedef int uint8_t ;
typedef int uint ;
struct TYPE_24__ {int di_size; } ;
struct TYPE_28__ {TYPE_1__ i_d; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 TYPE_3__* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int * FUNC_12 (TYPE_3__*,int *,int ,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__*,int,int,TYPE_5__*) ;
 void* FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_5__*,int ) ;
 int FUNC_17 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_18 (TYPE_3__*,int *,scalar_t__,scalar_t__,int **,int *) ;
 int FUNC_19 (TYPE_2__*,scalar_t__) ;
 int * FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,TYPE_5__*,int ) ;
 int FUNC_24 (int *,TYPE_5__*,int ) ;
 int FUNC_25 (int *,int ,scalar_t__) ;
 int FUNC_26 (int *,int ,int ,int ,int ,int ) ;

int
FUNC_27(
 xfs_mount_t *VAR_16,
 xfs_growfs_rt_t *VAR_17)
{
 xfs_rtblock_t VAR_18;
 xfs_buf_t *VAR_19;
 int VAR_20;
 xfs_mount_t *VAR_21;
 xfs_drfsbno_t VAR_22;
 xfs_extlen_t VAR_23;
 xfs_drtbno_t VAR_24;
 uint8_t VAR_25;
 xfs_extlen_t VAR_26;
 uint VAR_27;
 uint VAR_28;
 xfs_sb_t *VAR_29;
 xfs_extlen_t VAR_30;
 xfs_extlen_t VAR_31;
 xfs_sb_t *VAR_32;
 xfs_fsblock_t VAR_33;

 VAR_32 = &VAR_16->m_sb;



 if (!FUNC_7(VAR_0))
  return FUNC_2(VAR_3);
 if (VAR_16->m_rtdev_targp == ((void*)0) || VAR_16->m_rbmip == ((void*)0) ||
     (VAR_22 = VAR_17->newblocks) <= VAR_32->sb_rblocks ||
     (VAR_32->sb_rblocks && (VAR_17->extsize != VAR_32->sb_rextsize)))
  return FUNC_2(VAR_1);
 if ((VAR_20 = FUNC_19(VAR_32, VAR_22)))
  return VAR_20;



 VAR_19 = FUNC_12(VAR_16, VAR_16->m_rtdev_targp,
    FUNC_4(VAR_16, VAR_22 - 1),
    FUNC_3(VAR_16, 1), 0);
 if (!VAR_19)
  return VAR_2;
 FUNC_13(VAR_19);




 VAR_24 = VAR_22;
 FUNC_8(VAR_24, VAR_17->extsize);
 VAR_23 = FUNC_9(VAR_24, VAR_5 * VAR_32->sb_blocksize);
 VAR_25 = FUNC_15(VAR_24);
 VAR_27 = VAR_25 + 1;
 VAR_28 = (uint)sizeof(xfs_suminfo_t) * VAR_27 * VAR_23;
 VAR_26 = FUNC_1(VAR_16, VAR_28);
 VAR_28 = FUNC_3(VAR_16, VAR_26);





 if (VAR_26 > (VAR_16->m_sb.sb_logblocks >> 1))
  return FUNC_2(VAR_1);




 VAR_30 = FUNC_1(VAR_16, VAR_16->m_rbmip->i_d.di_size);
 VAR_31 = FUNC_1(VAR_16, VAR_16->m_rsumip->i_d.di_size);



 VAR_20 = FUNC_14(VAR_16, VAR_30, VAR_23, VAR_16->m_rbmip);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_14(VAR_16, VAR_31, VAR_26, VAR_16->m_rsumip);
 if (VAR_20)
  return VAR_20;



 VAR_21 = FUNC_10(sizeof(*VAR_21), VAR_4);






 for (VAR_18 = VAR_32->sb_rbmblocks -
       ((VAR_32->sb_rextents & ((1 << VAR_16->m_blkbit_log) - 1)) != 0);
      VAR_18 < VAR_23;
      VAR_18++) {
  xfs_trans_t *VAR_34;
  int VAR_35 = 0;

  *VAR_21 = *VAR_16;
  VAR_29 = &VAR_21->m_sb;



  VAR_29->sb_rextsize = VAR_17->extsize;
  VAR_29->sb_rbmblocks = VAR_18 + 1;
  VAR_29->sb_rblocks =
   FUNC_6(VAR_22,
      VAR_29->sb_rbmblocks * VAR_5 *
      VAR_29->sb_blocksize * VAR_29->sb_rextsize);
  VAR_29->sb_rextents = VAR_29->sb_rblocks;
  FUNC_8(VAR_29->sb_rextents, VAR_29->sb_rextsize);
  FUNC_0(VAR_29->sb_rextents != 0);
  VAR_29->sb_rextslog = FUNC_15(VAR_29->sb_rextents);
  VAR_27 = VAR_21->m_rsumlevels = VAR_29->sb_rextslog + 1;
  VAR_28 =
   (uint)sizeof(xfs_suminfo_t) * VAR_27 *
   VAR_29->sb_rbmblocks;
  VAR_26 = FUNC_1(VAR_16, VAR_28);
  VAR_21->m_rsumsize = VAR_28 = FUNC_3(VAR_16, VAR_26);



  VAR_34 = FUNC_20(VAR_16, VAR_9);
  if ((VAR_20 = FUNC_26(VAR_34, 0,
    FUNC_5(VAR_21), 0, 0, 0)))
   goto error_cancel;



  FUNC_16(VAR_16->m_rbmip, VAR_6);
  FUNC_23(VAR_34, VAR_16->m_rbmip, VAR_6);



  VAR_16->m_rbmip->i_d.di_size =
   VAR_29->sb_rbmblocks * VAR_29->sb_blocksize;
  FUNC_24(VAR_34, VAR_16->m_rbmip, VAR_7);
  VAR_35 |= VAR_8;



  FUNC_16(VAR_16->m_rsumip, VAR_6);
  FUNC_23(VAR_34, VAR_16->m_rsumip, VAR_6);



  VAR_16->m_rsumip->i_d.di_size = VAR_21->m_rsumsize;
  FUNC_24(VAR_34, VAR_16->m_rsumip, VAR_7);




  if (VAR_32->sb_rbmblocks != VAR_29->sb_rbmblocks ||
      VAR_16->m_rsumlevels != VAR_21->m_rsumlevels) {
   VAR_20 = FUNC_17(VAR_16, VAR_21, VAR_34);
   if (VAR_20)
    goto error_cancel;
  }



  if (VAR_29->sb_rextsize != VAR_32->sb_rextsize)
   FUNC_25(VAR_34, VAR_14,
    VAR_29->sb_rextsize - VAR_32->sb_rextsize);
  if (VAR_29->sb_rbmblocks != VAR_32->sb_rbmblocks)
   FUNC_25(VAR_34, VAR_12,
    VAR_29->sb_rbmblocks - VAR_32->sb_rbmblocks);
  if (VAR_29->sb_rblocks != VAR_32->sb_rblocks)
   FUNC_25(VAR_34, VAR_11,
    VAR_29->sb_rblocks - VAR_32->sb_rblocks);
  if (VAR_29->sb_rextents != VAR_32->sb_rextents)
   FUNC_25(VAR_34, VAR_13,
    VAR_29->sb_rextents - VAR_32->sb_rextents);
  if (VAR_29->sb_rextslog != VAR_32->sb_rextslog)
   FUNC_25(VAR_34, VAR_15,
    VAR_29->sb_rextslog - VAR_32->sb_rextslog);



  VAR_19 = ((void*)0);
  VAR_20 = FUNC_18(VAR_21, VAR_34, VAR_32->sb_rextents,
   VAR_29->sb_rextents - VAR_32->sb_rextents, &VAR_19, &VAR_33);
  if (VAR_20) {
error_cancel:
   FUNC_21(VAR_34, VAR_35);
   break;
  }



  FUNC_25(VAR_34, VAR_10,
   VAR_29->sb_rextents - VAR_32->sb_rextents);



  VAR_16->m_rsumlevels = VAR_27;
  VAR_16->m_rsumsize = VAR_28;

  VAR_20 = FUNC_22(VAR_34, 0);
  if (VAR_20)
   break;
 }




 FUNC_11(VAR_21);

 return VAR_20;
}
