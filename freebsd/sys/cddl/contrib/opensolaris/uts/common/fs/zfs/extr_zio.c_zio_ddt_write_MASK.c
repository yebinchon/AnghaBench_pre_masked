
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_18__ ;


struct TYPE_41__ {int zp_copies; size_t zp_checksum; int zp_dedup; scalar_t__ zp_dedup_verify; } ;
struct TYPE_40__ {scalar_t__ io_txg; int io_flags; int io_size; int io_abd; int io_bookmark; int io_priority; int io_orig_size; int io_orig_abd; int * io_bp_override; void* io_pipeline; void* io_stage; TYPE_2__ io_prop; TYPE_5__* io_bp; int * io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef TYPE_2__ zio_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int ddt_t ;
struct TYPE_42__ {scalar_t__ ddp_phys_birth; } ;
typedef TYPE_3__ ddt_phys_t ;
struct TYPE_43__ {TYPE_1__** dde_lead_zio; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;
struct TYPE_44__ {scalar_t__ blk_birth; } ;
typedef TYPE_5__ blkptr_t ;
struct TYPE_39__ {int ci_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 size_t FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*,scalar_t__) ;
 int FUNC_9 (int *,TYPE_4__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_4__* FUNC_13 (int *,TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_5__*) ;
 int * FUNC_16 (int *,TYPE_5__*) ;
 size_t FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*,TYPE_1__*) ;
 TYPE_18__* VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_19 (TYPE_1__*,int *,TYPE_4__*) ;
 int VAR_11 ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,int ,int ,int ,int *) ;
 TYPE_1__* FUNC_23 (TYPE_1__*,int *,scalar_t__,TYPE_5__*,int ,int ,int ,TYPE_2__*,int *,int *,int *,int ,TYPE_4__*,int ,int ,int *) ;

__attribute__((used)) static zio_t *
FUNC_24(zio_t *VAR_12)
{
 spa_t *VAR_13 = VAR_12->io_spa;
 blkptr_t *VAR_14 = VAR_12->io_bp;
 uint64_t VAR_15 = VAR_12->io_txg;
 zio_prop_t *VAR_16 = &VAR_12->io_prop;
 int VAR_17 = VAR_16->zp_copies;
 int VAR_18;
 zio_t *VAR_19 = ((void*)0);
 zio_t *VAR_20 = ((void*)0);
 ddt_t *VAR_21 = FUNC_16(VAR_13, VAR_14);
 ddt_entry_t *VAR_22;
 ddt_phys_t *VAR_23;

 FUNC_0(FUNC_3(VAR_14));
 FUNC_0(FUNC_2(VAR_14) == VAR_16->zp_checksum);
 FUNC_0(FUNC_4(VAR_14) || VAR_12->io_bp_override);
 FUNC_0(!(VAR_12->io_bp_override && (VAR_12->io_flags & VAR_5)));

 FUNC_11(VAR_21);
 VAR_22 = FUNC_13(VAR_21, VAR_14, VAR_1);
 VAR_23 = &VAR_22->dde_phys[VAR_17];

 if (VAR_16->zp_dedup_verify && FUNC_19(VAR_12, VAR_21, VAR_22)) {






  if (!(VAR_8[VAR_16->zp_checksum].ci_flags &
      VAR_4)) {
   VAR_16->zp_checksum = FUNC_17(VAR_13);
   FUNC_21(VAR_12);
   VAR_12->io_stage = VAR_6;
   FUNC_6(VAR_14);
  } else {
   VAR_16->zp_dedup = VAR_0;
   FUNC_5(VAR_14, VAR_0);
  }
  FUNC_0(!FUNC_3(VAR_14));
  VAR_12->io_pipeline = VAR_7;
  FUNC_12(VAR_21);
  return (VAR_12);
 }

 VAR_18 = FUNC_9(VAR_21, VAR_22, VAR_23);
 FUNC_0(VAR_18 < VAR_3);

 if (VAR_18 > FUNC_10(VAR_22) &&
     VAR_22->dde_lead_zio[VAR_2] == ((void*)0)) {
  zio_prop_t VAR_24 = *VAR_16;

  VAR_24.zp_copies = VAR_18;
  if (VAR_12->io_bp_override) {
   FUNC_21(VAR_12);
   VAR_12->io_stage = VAR_6;
   VAR_12->io_pipeline = VAR_7;
   VAR_12->io_bp_override = ((void*)0);
   FUNC_6(VAR_14);
   FUNC_12(VAR_21);
   return (VAR_12);
  }

  VAR_20 = FUNC_23(VAR_12, VAR_13, VAR_15, VAR_14, VAR_12->io_orig_abd,
      VAR_12->io_orig_size, VAR_12->io_orig_size, &VAR_24, ((void*)0), ((void*)0),
      ((void*)0), VAR_11, VAR_22, VAR_12->io_priority,
      FUNC_7(VAR_12), &VAR_12->io_bookmark);

  FUNC_22(VAR_20, VAR_12->io_abd, VAR_12->io_size, 0, ((void*)0));
  VAR_22->dde_lead_zio[VAR_2] = VAR_20;
 }

 if (VAR_23->ddp_phys_birth != 0 || VAR_22->dde_lead_zio[VAR_17] != ((void*)0)) {
  if (VAR_23->ddp_phys_birth != 0)
   FUNC_8(VAR_23, VAR_14, VAR_15);
  if (VAR_22->dde_lead_zio[VAR_17] != ((void*)0))
   FUNC_18(VAR_12, VAR_22->dde_lead_zio[VAR_17]);
  else
   FUNC_14(VAR_23);
 } else if (VAR_12->io_bp_override) {
  FUNC_0(VAR_14->blk_birth == VAR_15);
  FUNC_0(FUNC_1(VAR_14, VAR_12->io_bp_override));
  FUNC_15(VAR_23, VAR_14);
  FUNC_14(VAR_23);
 } else {
  VAR_19 = FUNC_23(VAR_12, VAR_13, VAR_15, VAR_14, VAR_12->io_orig_abd,
      VAR_12->io_orig_size, VAR_12->io_orig_size, VAR_16,
      VAR_10, ((void*)0), ((void*)0),
      VAR_9, VAR_22, VAR_12->io_priority,
      FUNC_7(VAR_12), &VAR_12->io_bookmark);

  FUNC_22(VAR_19, VAR_12->io_abd, VAR_12->io_size, 0, ((void*)0));
  VAR_22->dde_lead_zio[VAR_17] = VAR_19;
 }

 FUNC_12(VAR_21);

 if (VAR_19)
  FUNC_20(VAR_19);
 if (VAR_20)
  FUNC_20(VAR_20);

 return (VAR_12);
}
