
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ z_sync_cnt; TYPE_1__* z_zfsvfs; int z_id; scalar_t__ z_unlinked; scalar_t__ z_blksz; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_16__ {scalar_t__ zl_logbias; int zl_spa; } ;
typedef TYPE_3__ zilog_t ;
typedef scalar_t__ uint32_t ;
typedef int ssize_t ;
typedef int offset_t ;
struct TYPE_17__ {int lr_length; int lr_blkptr; scalar_t__ lr_blkoff; int lr_offset; int lr_foid; } ;
typedef TYPE_4__ lr_write_t ;
typedef scalar_t__ itx_wr_state_t ;
struct TYPE_18__ {int itx_sync; TYPE_1__* itx_private; scalar_t__ itx_wr_state; int itx_lr; } ;
typedef TYPE_5__ itx_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {int z_os; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,TYPE_4__*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*,int *) ;
 TYPE_5__* FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *) ;

void
FUNC_11(zilog_t *VAR_11, dmu_tx_t *VAR_12, int VAR_13,
    znode_t *VAR_14, offset_t VAR_15, ssize_t VAR_16, int VAR_17)
{
 uint32_t VAR_18 = VAR_14->z_blksz;
 itx_wr_state_t VAR_19;
 uintptr_t VAR_20;

 if (FUNC_10(VAR_11, VAR_12) || VAR_14->z_unlinked)
  return;

 if (VAR_11->zl_logbias == VAR_7)
  VAR_19 = VAR_5;
 else if (!FUNC_4(VAR_11->zl_spa) &&
     VAR_16 >= VAR_10)
  VAR_19 = VAR_5;
 else if (VAR_17 & (VAR_3 | VAR_2))
  VAR_19 = VAR_4;
 else
  VAR_19 = VAR_6;

 if ((VAR_20 = (uintptr_t)FUNC_5(VAR_9)) != 0) {
  (void) FUNC_6(VAR_9, (void *)(VAR_20 - 1));
 }

 while (VAR_16) {
  itx_t *VAR_21;
  lr_write_t *VAR_22;
  itx_wr_state_t VAR_23 = VAR_19;
  ssize_t VAR_24 = VAR_16;

  if (VAR_23 == VAR_4 && VAR_16 > VAR_8)
   VAR_23 = VAR_6;
  else if (VAR_23 == VAR_5)
   VAR_24 = FUNC_1(VAR_18 - FUNC_2(VAR_15, VAR_18), VAR_16);

  VAR_21 = FUNC_8(VAR_13, sizeof (*VAR_22) +
      (VAR_23 == VAR_4 ? VAR_24 : 0));
  VAR_22 = (lr_write_t *)&VAR_21->itx_lr;
  if (VAR_23 == VAR_4 && FUNC_3(VAR_14->z_zfsvfs->z_os,
      VAR_14->z_id, VAR_15, VAR_24, VAR_22 + 1, VAR_1) != 0) {
   FUNC_9(VAR_21);
   VAR_21 = FUNC_8(VAR_13, sizeof (*VAR_22));
   VAR_22 = (lr_write_t *)&VAR_21->itx_lr;
   VAR_23 = VAR_6;
  }

  VAR_21->itx_wr_state = VAR_23;
  VAR_22->lr_foid = VAR_14->z_id;
  VAR_22->lr_offset = VAR_15;
  VAR_22->lr_length = VAR_24;
  VAR_22->lr_blkoff = 0;
  FUNC_0(&VAR_22->lr_blkptr);

  VAR_21->itx_private = VAR_14->z_zfsvfs;

  if (!(VAR_17 & (VAR_3 | VAR_2)) && (VAR_14->z_sync_cnt == 0) &&
      (VAR_20 == 0))
   VAR_21->itx_sync = VAR_0;

  FUNC_7(VAR_11, VAR_21, VAR_12);

  VAR_15 += VAR_24;
  VAR_16 -= VAR_24;
 }
}
