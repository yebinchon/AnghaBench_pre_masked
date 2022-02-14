
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ zp_compress; int zp_copies; } ;
struct TYPE_28__ {scalar_t__ blk_birth; } ;
struct TYPE_23__ {int io_flags; int io_error; TYPE_1__ io_prop; TYPE_9__* io_bp; TYPE_9__ io_bp_orig; } ;
typedef TYPE_4__ zio_t ;
struct TYPE_24__ {int zgd_bp; int zgd_lwb; } ;
typedef TYPE_5__ zgd_t ;
typedef size_t uint8_t ;
struct TYPE_25__ {TYPE_5__* dsa_zgd; int (* dsa_done ) (TYPE_5__*,int ) ;TYPE_8__* dsa_dr; } ;
typedef TYPE_6__ dmu_sync_arg_t ;
struct TYPE_26__ {int db_mtx; int db_changed; TYPE_9__* db_blkptr; } ;
typedef TYPE_7__ dmu_buf_impl_t ;
struct TYPE_21__ {scalar_t__ dr_override_state; int dr_nopwrite; TYPE_9__ dr_overridden_by; int dr_copies; } ;
struct TYPE_22__ {TYPE_2__ dl; } ;
struct TYPE_27__ {TYPE_3__ dt; TYPE_7__* dr_dbuf; } ;
typedef TYPE_8__ dbuf_dirty_record_t ;
typedef TYPE_9__ blkptr_t ;
typedef int arc_buf_t ;
struct TYPE_19__ {int ci_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*,TYPE_9__*) ;
 size_t FUNC_2 (TYPE_9__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (int ,int ) ;
 TYPE_10__* VAR_6 ;

__attribute__((used)) static void
FUNC_12(zio_t *VAR_7, arc_buf_t *VAR_8, void *VAR_9)
{
 dmu_sync_arg_t *VAR_10 = VAR_9;
 dbuf_dirty_record_t *VAR_11 = VAR_10->dsa_dr;
 dmu_buf_impl_t *VAR_12 = VAR_11->dr_dbuf;
 zgd_t *VAR_13 = VAR_10->dsa_zgd;





 if (VAR_7->io_error == 0) {
  FUNC_11(VAR_13->zgd_lwb, VAR_13->zgd_bp);
 }

 FUNC_8(&VAR_12->db_mtx);
 FUNC_0(VAR_11->dt.dl.dr_override_state == VAR_0);
 if (VAR_7->io_error == 0) {
  VAR_11->dt.dl.dr_nopwrite = !!(VAR_7->io_flags & VAR_5);
  if (VAR_11->dt.dl.dr_nopwrite) {
   blkptr_t *VAR_14 = VAR_7->io_bp;
   blkptr_t *VAR_15 = &VAR_7->io_bp_orig;
   uint8_t VAR_16 = FUNC_2(VAR_15);

   FUNC_0(FUNC_1(VAR_14, VAR_15));
   FUNC_5(FUNC_1(VAR_14, VAR_12->db_blkptr));
   FUNC_0(VAR_7->io_prop.zp_compress != VAR_4);
   FUNC_0(VAR_6[VAR_16].ci_flags &
       VAR_3);
  }
  VAR_11->dt.dl.dr_overridden_by = *VAR_7->io_bp;
  VAR_11->dt.dl.dr_override_state = VAR_2;
  VAR_11->dt.dl.dr_copies = VAR_7->io_prop.zp_copies;
  if (FUNC_3(&VAR_11->dt.dl.dr_overridden_by) &&
      VAR_11->dt.dl.dr_overridden_by.blk_birth == 0)
   FUNC_4(&VAR_11->dt.dl.dr_overridden_by);
 } else {
  VAR_11->dt.dl.dr_override_state = VAR_1;
 }
 FUNC_6(&VAR_12->db_changed);
 FUNC_9(&VAR_12->db_mtx);

 VAR_10->dsa_done(VAR_10->dsa_zgd, VAR_7->io_error);

 FUNC_7(VAR_10, sizeof (*VAR_10));
}
