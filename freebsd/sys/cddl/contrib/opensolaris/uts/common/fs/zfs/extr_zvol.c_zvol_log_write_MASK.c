
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ zv_volblocksize; scalar_t__ zv_sync_cnt; int zv_dn; TYPE_2__* zv_zilog; } ;
typedef TYPE_1__ zvol_state_t ;
struct TYPE_13__ {scalar_t__ zl_logbias; int zl_spa; } ;
typedef TYPE_2__ zilog_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ ssize_t ;
typedef int offset_t ;
struct TYPE_14__ {int lr_blkptr; scalar_t__ lr_blkoff; scalar_t__ lr_length; int lr_offset; int lr_foid; } ;
typedef TYPE_3__ lr_write_t ;
typedef scalar_t__ itx_wr_state_t ;
struct TYPE_15__ {int itx_sync; TYPE_1__* itx_private; scalar_t__ itx_wr_state; int itx_lr; } ;
typedef TYPE_4__ itx_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_9(zvol_state_t *VAR_10, dmu_tx_t *VAR_11, offset_t VAR_12, ssize_t VAR_13,
    boolean_t VAR_14)
{
 uint32_t VAR_15 = VAR_10->zv_volblocksize;
 zilog_t *VAR_16 = VAR_10->zv_zilog;
 itx_wr_state_t VAR_17;

 if (FUNC_8(VAR_16, VAR_11))
  return;

 if (VAR_16->zl_logbias == VAR_6)
  VAR_17 = VAR_4;
 else if (!FUNC_4(VAR_16->zl_spa) &&
     VAR_13 >= VAR_15 && VAR_15 > VAR_9)
  VAR_17 = VAR_4;
 else if (VAR_14)
  VAR_17 = VAR_3;
 else
  VAR_17 = VAR_5;

 while (VAR_13) {
  itx_t *VAR_18;
  lr_write_t *VAR_19;
  itx_wr_state_t VAR_20 = VAR_17;
  ssize_t VAR_21 = VAR_13;

  if (VAR_20 == VAR_3 && VAR_13 > VAR_7)
   VAR_20 = VAR_5;
  else if (VAR_20 == VAR_4)
   VAR_21 = FUNC_1(VAR_15 - FUNC_2(VAR_12, VAR_15), VAR_13);

  VAR_18 = FUNC_6(VAR_2, sizeof (*VAR_19) +
      (VAR_20 == VAR_3 ? VAR_21 : 0));
  VAR_19 = (lr_write_t *)&VAR_18->itx_lr;
  if (VAR_20 == VAR_3 && FUNC_3(VAR_10->zv_dn,
      VAR_12, VAR_21, VAR_19 + 1, VAR_1) != 0) {
   FUNC_7(VAR_18);
   VAR_18 = FUNC_6(VAR_2, sizeof (*VAR_19));
   VAR_19 = (lr_write_t *)&VAR_18->itx_lr;
   VAR_20 = VAR_5;
  }

  VAR_18->itx_wr_state = VAR_20;
  VAR_19->lr_foid = VAR_8;
  VAR_19->lr_offset = VAR_12;
  VAR_19->lr_length = VAR_21;
  VAR_19->lr_blkoff = 0;
  FUNC_0(&VAR_19->lr_blkptr);

  VAR_18->itx_private = VAR_10;

  if (!VAR_14 && (VAR_10->zv_sync_cnt == 0))
   VAR_18->itx_sync = VAR_0;

  FUNC_5(VAR_16, VAR_18, VAR_11);

  VAR_12 += VAR_21;
  VAR_13 -= VAR_21;
 }
}
