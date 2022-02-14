
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {int zp_copies; int zp_checksum; } ;
struct TYPE_29__ {int io_txg; int io_size; int io_flags; scalar_t__ io_priority; size_t io_allocator; int io_error; scalar_t__ io_ready; int io_pipeline; int io_bookmark; int io_abd; TYPE_1__ io_prop; TYPE_5__** io_private; TYPE_5__* io_gang_tree; int io_alloc_list; int * io_bp; struct TYPE_29__* io_gang_leader; int * io_spa; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_30__ {int zp_copies; void* zp_nopwrite; void* zp_dedup_verify; void* zp_dedup; scalar_t__ zp_level; int zp_type; int zp_compress; int zp_checksum; } ;
typedef TYPE_3__ zio_prop_t ;
struct TYPE_31__ {int * zg_blkptr; } ;
typedef TYPE_4__ zio_gbh_phys_t ;
struct TYPE_32__ {int * gn_child; TYPE_4__* gn_gbh; } ;
typedef TYPE_5__ zio_gang_node_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_33__ {int * mc_alloc_slots; } ;
typedef TYPE_6__ metaslab_class_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int * FUNC_5 (TYPE_4__*,int ) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int *,TYPE_6__*,int ,int *,int,int,int *,int,int *,TYPE_2__*,size_t) ;
 int FUNC_9 (TYPE_6__*,int,size_t,TYPE_2__*,int) ;
 int FUNC_10 (TYPE_6__*,int,size_t,TYPE_2__*) ;
 int FUNC_11 (int *) ;
 TYPE_6__* FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 TYPE_5__* FUNC_14 (TYPE_5__**) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 (TYPE_2__*,int *,int,int *,int *,int ,int ,int *,scalar_t__,int ,int *) ;
 TYPE_2__* FUNC_17 (TYPE_2__*,int *,int,int *,int *,int,int,TYPE_3__*,scalar_t__,int *,int *,int ,int *,scalar_t__,int ,int *) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static zio_t *
FUNC_18(zio_t *VAR_15)
{
 spa_t *VAR_16 = VAR_15->io_spa;
 metaslab_class_t *VAR_17 = FUNC_12(VAR_16);
 blkptr_t *VAR_18 = VAR_15->io_bp;
 zio_t *VAR_19 = VAR_15->io_gang_leader;
 zio_t *VAR_20;
 zio_gang_node_t *VAR_21, **VAR_22;
 zio_gbh_phys_t *VAR_23;
 abd_t *VAR_24;
 uint64_t VAR_25 = VAR_15->io_txg;
 uint64_t VAR_26 = VAR_15->io_size;
 uint64_t VAR_27;
 int VAR_28 = VAR_19->io_prop.zp_copies;
 int VAR_29 = FUNC_1(VAR_28 + 1, FUNC_11(VAR_16));
 zio_prop_t VAR_30;
 int VAR_31;
 boolean_t VAR_32 = !(VAR_15->io_flags & VAR_10);

 int VAR_33 = VAR_4 | VAR_3;
 if (VAR_15->io_flags & VAR_9) {
  FUNC_0(VAR_15->io_priority == VAR_12);
  FUNC_0(VAR_32);

  VAR_33 |= VAR_2;
  FUNC_3(FUNC_13(&VAR_17->mc_alloc_slots[VAR_15->io_allocator],
      VAR_15));
  FUNC_3(FUNC_9(VAR_17, VAR_29 - VAR_28,
      VAR_15->io_allocator, VAR_15, VAR_33));
 }

 VAR_31 = FUNC_8(VAR_16, VAR_17, VAR_5,
     VAR_18, VAR_29, VAR_25, VAR_15 == VAR_19 ? ((void*)0) : VAR_19->io_bp, VAR_33,
     &VAR_15->io_alloc_list, VAR_15, VAR_15->io_allocator);
 if (VAR_31) {
  if (VAR_15->io_flags & VAR_9) {
   FUNC_0(VAR_15->io_priority == VAR_12);
   FUNC_0(VAR_32);
   FUNC_10(VAR_17,
       VAR_29 - VAR_28, VAR_15->io_allocator, VAR_15);
  }
  VAR_15->io_error = VAR_31;
  return (VAR_15);
 }

 if (VAR_15 == VAR_19) {
  VAR_22 = &VAR_19->io_gang_tree;
 } else {
  VAR_22 = VAR_15->io_private;
  FUNC_0(VAR_15->io_ready == VAR_14);
 }

 VAR_21 = FUNC_14(VAR_22);
 VAR_23 = VAR_21->gn_gbh;
 FUNC_7(VAR_23, VAR_5);
 VAR_24 = FUNC_5(VAR_23, VAR_5);




 VAR_20 = FUNC_16(VAR_15, VAR_16, VAR_25, VAR_18, VAR_24, VAR_5,
     VAR_13, ((void*)0), VAR_15->io_priority,
     FUNC_4(VAR_15), &VAR_15->io_bookmark);




 for (int VAR_34 = 0; VAR_26 != 0; VAR_26 -= VAR_27, VAR_34++) {
  VAR_27 = FUNC_2(VAR_26 / (VAR_6 - VAR_34),
      VAR_7);
  FUNC_0(VAR_27 >= VAR_7 && VAR_27 <= VAR_26);

  VAR_30.zp_checksum = VAR_19->io_prop.zp_checksum;
  VAR_30.zp_compress = VAR_8;
  VAR_30.zp_type = VAR_1;
  VAR_30.zp_level = 0;
  VAR_30.zp_copies = VAR_19->io_prop.zp_copies;
  VAR_30.zp_dedup = VAR_0;
  VAR_30.zp_dedup_verify = VAR_0;
  VAR_30.zp_nopwrite = VAR_0;

  zio_t *VAR_35 = FUNC_17(VAR_20, VAR_16, VAR_25, &VAR_23->zg_blkptr[VAR_34],
      VAR_32 ? FUNC_6(VAR_15->io_abd, VAR_15->io_size -
      VAR_26) : ((void*)0), VAR_27, VAR_27, &VAR_30,
      VAR_14, ((void*)0), ((void*)0),
      VAR_13, &VAR_21->gn_child[VAR_34], VAR_15->io_priority,
      FUNC_4(VAR_15), &VAR_15->io_bookmark);

  if (VAR_15->io_flags & VAR_9) {
   FUNC_0(VAR_15->io_priority == VAR_12);
   FUNC_0(VAR_32);






   FUNC_3(FUNC_9(VAR_17,
       VAR_30.zp_copies, VAR_35->io_allocator, VAR_35, VAR_33));
  }
  FUNC_15(VAR_35);
 }




 VAR_15->io_pipeline = VAR_11;

 FUNC_15(VAR_20);

 return (VAR_15);
}
