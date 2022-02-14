
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zap_ismicro; int zap_rwlock; } ;
typedef TYPE_1__ zap_t ;
struct TYPE_12__ {TYPE_1__* zn_zap; int zn_hash; } ;
typedef TYPE_2__ zap_name_t ;
typedef int zap_leaf_t ;
typedef int zap_entry_handle_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int ,int **) ;
 int FUNC_5 (int *,TYPE_2__*,int ,int ,int ,void const*,int *) ;
 int FUNC_6 (TYPE_2__*,int *,void*,int *,int **) ;
 int FUNC_7 (TYPE_1__*,int,int *) ;
 int FUNC_8 (int *,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *,void*,int *) ;

int
FUNC_10(zap_name_t *VAR_4,
    uint64_t VAR_5, uint64_t VAR_6,
    const void *VAR_7, uint32_t VAR_8, void *VAR_9, dmu_tx_t *VAR_10)
{
 zap_leaf_t *VAR_11;
 int VAR_12;
 zap_entry_handle_t VAR_13;
 zap_t *VAR_14 = VAR_4->zn_zap;

 FUNC_0(FUNC_1(&VAR_14->zap_rwlock));
 FUNC_0(!VAR_14->zap_ismicro);
 FUNC_0(FUNC_3(VAR_4, VAR_5, VAR_6) == 0);

 VAR_12 = FUNC_4(VAR_14, VAR_4->zn_hash, VAR_10, VAR_3, &VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);
retry:
 VAR_12 = FUNC_8(VAR_11, VAR_4, &VAR_13);
 if (VAR_12 == 0) {
  VAR_12 = FUNC_2(VAR_1);
  goto out;
 }
 if (VAR_12 != VAR_2)
  goto out;

 VAR_12 = FUNC_5(VAR_11, VAR_4, VAR_8,
     VAR_5, VAR_6, VAR_7, &VAR_13);

 if (VAR_12 == 0) {
  FUNC_7(VAR_14, 1, VAR_10);
 } else if (VAR_12 == VAR_0) {
  VAR_12 = FUNC_6(VAR_4, VAR_11, VAR_9, VAR_10, &VAR_11);
  VAR_14 = VAR_4->zn_zap;
  if (VAR_12 == 0)
   goto retry;
 }

out:
 if (VAR_14 != ((void*)0))
  FUNC_9(VAR_4, VAR_11, VAR_9, VAR_10);
 return (VAR_12);
}
