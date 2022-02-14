
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zio_t ;
typedef int uint64_t ;
struct TYPE_11__ {int dn_maxblkid; int dn_datablksz; int dn_datablkshift; int dn_nlevels; int dn_indblkshift; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_12__ {scalar_t__ tx_txg; int tx_err; TYPE_1__* tx_pool; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_13__ {int txh_memory_tohold; TYPE_2__* txh_dnode; TYPE_3__* txh_tx; } ;
typedef TYPE_4__ dmu_tx_hold_t ;
struct TYPE_10__ {int dp_spa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int*,int,int,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int * FUNC_7 (int ,int *,int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(dmu_tx_hold_t *VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 dmu_tx_t *VAR_8;
 dnode_t *VAR_9;
 int VAR_10;

 VAR_8 = VAR_5->txh_tx;
 FUNC_0(VAR_8->tx_txg == 0);

 VAR_9 = VAR_5->txh_dnode;
 FUNC_3(VAR_5);

 if (VAR_6 >= (VAR_9->dn_maxblkid + 1) * VAR_9->dn_datablksz)
  return;
 if (VAR_7 == VAR_0)
  VAR_7 = (VAR_9->dn_maxblkid + 1) * VAR_9->dn_datablksz - VAR_6;
 if (VAR_9->dn_datablkshift == 0) {
  if (VAR_6 != 0 || VAR_7 < VAR_9->dn_datablksz)
   FUNC_4(VAR_5, 0, VAR_9->dn_datablksz);
 } else {

  if (!FUNC_1(VAR_6, 1 << VAR_9->dn_datablkshift))
   FUNC_4(VAR_5, VAR_6, 1);

  if (!FUNC_1(VAR_6 + VAR_7, 1 << VAR_9->dn_datablkshift))
   FUNC_4(VAR_5, VAR_6 + VAR_7, 1);
 }




 if (VAR_9->dn_nlevels > 1) {
  int VAR_11 = VAR_9->dn_datablkshift + VAR_9->dn_indblkshift -
      VAR_3;
  uint64_t VAR_12 = VAR_6 >> VAR_11;
  uint64_t VAR_13 = (VAR_6 + VAR_7) >> VAR_11;

  FUNC_0(VAR_9->dn_indblkshift != 0);






  if (VAR_9->dn_datablkshift == 0)
   VAR_12 = VAR_13 = 0;

  zio_t *VAR_14 = FUNC_7(VAR_8->tx_pool->dp_spa,
      ((void*)0), ((void*)0), VAR_4);
  for (uint64_t VAR_15 = VAR_12; VAR_15 <= VAR_13; VAR_15++) {
   uint64_t VAR_16 = VAR_15 << VAR_11;
   VAR_10 = FUNC_5(VAR_9, 0, &VAR_16, 2, 1, 0);
   VAR_15 = VAR_16 >> VAR_11;
   if (VAR_10 == VAR_1 || VAR_15 > VAR_13)
    break;
   if (VAR_10 != 0) {
    VAR_8->tx_err = VAR_10;
    (void) FUNC_8(VAR_14);
    return;
   }

   (void) FUNC_6(&VAR_5->txh_memory_tohold,
       1 << VAR_9->dn_indblkshift, VAR_2);

   VAR_10 = FUNC_2(VAR_14, VAR_9, 1, VAR_15);
   if (VAR_10 != 0) {
    VAR_8->tx_err = VAR_10;
    (void) FUNC_8(VAR_14);
    return;
   }
  }
  VAR_10 = FUNC_8(VAR_14);
  if (VAR_10 != 0) {
   VAR_8->tx_err = VAR_10;
   return;
  }
 }
}
