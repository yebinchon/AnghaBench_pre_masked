
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_17__ {TYPE_1__* os_phys; int os_flags; } ;
typedef TYPE_2__ objset_t ;
typedef int dsl_dataset_t ;
struct TYPE_18__ {scalar_t__ dn_datablkshift; int dn_indblkshift; int* dn_next_nlevels; int dn_nlevels; scalar_t__ dn_nblkptr; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_19__ {size_t tx_txg; } ;
typedef TYPE_4__ dmu_tx_t ;
typedef scalar_t__ dmu_objset_type_t ;
typedef int blkptr_t ;
struct TYPE_16__ {int os_flags; scalar_t__ os_type; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__**) ;
 int FUNC_4 (int *,int *,int *,TYPE_2__**) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,int ,int ,int ,TYPE_4__*) ;
 int FUNC_8 (int *,TYPE_4__*) ;

objset_t *
FUNC_9(spa_t *VAR_13, dsl_dataset_t *VAR_14, blkptr_t *VAR_15,
    dmu_objset_type_t VAR_16, dmu_tx_t *VAR_17)
{
 objset_t *VAR_18;
 dnode_t *VAR_19;

 FUNC_0(FUNC_6(VAR_17));

 if (VAR_14 != ((void*)0))
  FUNC_2(FUNC_3(VAR_14, &VAR_18));
 else
  FUNC_2(FUNC_4(VAR_13, ((void*)0), VAR_15, &VAR_18));

 VAR_19 = FUNC_1(VAR_18);

 FUNC_7(VAR_19, VAR_3, VAR_5, VAR_8,
     VAR_4, 0, VAR_6, VAR_17);
 if (VAR_14 != ((void*)0)) {
  int VAR_20 = 1;
  while ((uint64_t)VAR_19->dn_nblkptr <<
      (VAR_19->dn_datablkshift - VAR_7 +
      (VAR_20 - 1) * (VAR_19->dn_indblkshift - VAR_11)) <
      VAR_9)
   VAR_20++;

  VAR_19->dn_next_nlevels[VAR_17->tx_txg & VAR_12] =
      VAR_19->dn_nlevels = VAR_20;
 }

 FUNC_0(VAR_16 != VAR_1);
 FUNC_0(VAR_16 != VAR_0);
 FUNC_0(VAR_16 < VAR_2);
 VAR_18->os_phys->os_type = VAR_16;
 if (FUNC_5(VAR_18)) {
  VAR_18->os_phys->os_flags |= VAR_10;
  VAR_18->os_flags = VAR_18->os_phys->os_flags;
 }

 FUNC_8(VAR_14, VAR_17);

 return (VAR_18);
}
