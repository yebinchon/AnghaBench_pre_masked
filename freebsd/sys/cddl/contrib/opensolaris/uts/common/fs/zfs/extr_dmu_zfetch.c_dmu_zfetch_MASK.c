
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ zs_blkid; scalar_t__ zs_pf_blkid; scalar_t__ zs_ipf_blkid; int zs_lock; int zs_atime; } ;
typedef TYPE_2__ zstream_t ;
struct TYPE_12__ {TYPE_9__* zf_dnode; int zf_rwlock; int zf_stream; } ;
typedef TYPE_3__ zfetch_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int dn_datablkshift; int dn_indblkshift; TYPE_1__* dn_objset; } ;
struct TYPE_10__ {int * os_spa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_9__*,int,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

void
FUNC_15(zfetch_t *VAR_9, uint64_t VAR_10, uint64_t VAR_11, boolean_t VAR_12)
{
 zstream_t *VAR_13;
 int64_t VAR_14, VAR_15, VAR_16, VAR_17;
 int64_t VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 uint64_t VAR_24 = VAR_10 + VAR_11;
 spa_t *VAR_25 = VAR_9->zf_dnode->dn_objset->os_spa;

 if (VAR_8)
  return;
 if (!FUNC_14(VAR_25))
  return;





 if (VAR_10 == 0)
  return;

 FUNC_11(&VAR_9->zf_rwlock, VAR_1);






 for (VAR_13 = FUNC_7(&VAR_9->zf_stream); VAR_13 != ((void*)0);
     VAR_13 = FUNC_8(&VAR_9->zf_stream, VAR_13)) {
  if (VAR_10 == VAR_13->zs_blkid || VAR_10 + 1 == VAR_13->zs_blkid) {
   FUNC_9(&VAR_13->zs_lock);




   if (VAR_10 == VAR_13->zs_blkid) {
    break;
   } else if (VAR_10 + 1 == VAR_13->zs_blkid) {
    VAR_10++;
    VAR_11--;
    if (VAR_11 == 0) {

     FUNC_10(&VAR_13->zs_lock);
     FUNC_12(&VAR_9->zf_rwlock);
     return;
    }
    break;
   }
   FUNC_10(&VAR_13->zs_lock);
  }
 }

 if (VAR_13 == ((void*)0)) {




  FUNC_3(VAR_7);
  if (FUNC_13(&VAR_9->zf_rwlock))
   FUNC_5(VAR_9, VAR_24);
  FUNC_12(&VAR_9->zf_rwlock);
  return;
 }
 VAR_14 = FUNC_0(VAR_13->zs_pf_blkid, VAR_24);





 if (VAR_12) {
  VAR_21 =
      VAR_4 >> VAR_9->zf_dnode->dn_datablkshift;






  VAR_18 = VAR_13->zs_pf_blkid - VAR_10 + VAR_11;
  VAR_19 = VAR_21 - (VAR_14 - VAR_24);
  VAR_22 = FUNC_1(VAR_18, VAR_19);
 } else {
  VAR_22 = 0;
 }

 VAR_13->zs_pf_blkid = VAR_14 + VAR_22;






 VAR_15 = FUNC_0(VAR_13->zs_ipf_blkid, VAR_13->zs_pf_blkid);
 VAR_21 = VAR_5 >> VAR_9->zf_dnode->dn_datablkshift;







 VAR_18 = VAR_13->zs_ipf_blkid - VAR_10 + VAR_11 + VAR_22;
 VAR_19 = VAR_21 - (VAR_15 - VAR_24);
 VAR_23 = FUNC_1(VAR_18, VAR_19);
 VAR_13->zs_ipf_blkid = VAR_15 + VAR_23;

 VAR_20 = VAR_9->zf_dnode->dn_indblkshift - VAR_2;
 VAR_16 = FUNC_2(VAR_15, 1 << VAR_20) >> VAR_20;
 VAR_17 = FUNC_2(VAR_13->zs_ipf_blkid, 1 << VAR_20) >> VAR_20;

 VAR_13->zs_atime = FUNC_6();
 VAR_13->zs_blkid = VAR_24;
 FUNC_10(&VAR_13->zs_lock);
 FUNC_12(&VAR_9->zf_rwlock);







 for (int VAR_26 = 0; VAR_26 < VAR_22; VAR_26++) {
  FUNC_4(VAR_9->zf_dnode, 0, VAR_14 + VAR_26,
      VAR_3, VAR_0);
 }
 for (int64_t VAR_27 = VAR_16; VAR_27 < VAR_17; VAR_27++) {
  FUNC_4(VAR_9->zf_dnode, 1, VAR_27,
      VAR_3, VAR_0);
 }
 FUNC_3(VAR_6);
}
