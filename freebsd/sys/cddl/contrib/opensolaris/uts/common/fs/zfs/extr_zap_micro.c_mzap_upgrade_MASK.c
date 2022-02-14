
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int zap_num_chunks; } ;
struct TYPE_19__ {scalar_t__* zap_object; int zap_objset; TYPE_2__ zap_m; TYPE_1__* zap_dbuf; int zap_rwlock; } ;
typedef TYPE_3__ zap_t ;
struct TYPE_20__ {TYPE_3__* zn_zap; } ;
typedef TYPE_4__ zap_name_t ;
typedef int zap_flags_t ;
struct TYPE_21__ {TYPE_6__* mz_chunk; } ;
typedef TYPE_5__ mzap_phys_t ;
struct TYPE_22__ {scalar_t__* mze_name; int mze_value; int mze_cd; } ;
typedef TYPE_6__ mzap_ent_phys_t ;
typedef int dmu_tx_t ;
struct TYPE_17__ {int db_size; int db_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_5__*,int) ;
 int FUNC_3 (int ,scalar_t__*,unsigned long long,int ,int *) ;
 int FUNC_4 (char*,scalar_t__*,int) ;
 int FUNC_5 (TYPE_4__*,int,int,int*,int ,void*,int *) ;
 unsigned long long VAR_0 ;
 int FUNC_6 (TYPE_3__*,int *,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_4__* FUNC_8 (TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 TYPE_5__* FUNC_10 (int) ;
 int FUNC_11 (TYPE_5__*,int) ;

__attribute__((used)) static int
FUNC_12(zap_t **VAR_1, void *VAR_2, dmu_tx_t *VAR_3, zap_flags_t VAR_4)
{
 int VAR_5 = 0;
 zap_t *VAR_6 = *VAR_1;

 FUNC_0(FUNC_1(&VAR_6->zap_rwlock));

 int VAR_7 = VAR_6->zap_dbuf->db_size;
 mzap_phys_t *VAR_8 = FUNC_10(VAR_7);
 FUNC_2(VAR_6->zap_dbuf->db_data, VAR_8, VAR_7);
 int VAR_9 = VAR_6->zap_m.zap_num_chunks;

 if (!VAR_4) {
  VAR_5 = FUNC_3(VAR_6->zap_objset, VAR_6->zap_object,
      1ULL << VAR_0, 0, VAR_3);
  if (VAR_5 != 0) {
   FUNC_11(VAR_8, VAR_7);
   return (VAR_5);
  }
 }

 FUNC_4("upgrading obj=%llu with %u chunks\n",
     VAR_6->zap_object, VAR_9);

 FUNC_7(VAR_6);

 FUNC_6(VAR_6, VAR_3, VAR_4);

 for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  mzap_ent_phys_t *VAR_11 = &VAR_8->mz_chunk[VAR_10];
  if (VAR_11->mze_name[0] == 0)
   continue;
  FUNC_4("adding %s=%llu\n",
      VAR_11->mze_name, VAR_11->mze_value);
  zap_name_t *VAR_12 = FUNC_8(VAR_6, VAR_11->mze_name, 0);
  VAR_5 = FUNC_5(VAR_12, 8, 1, &VAR_11->mze_value, VAR_11->mze_cd,
      VAR_2, VAR_3);
  VAR_6 = VAR_12->zn_zap;
  FUNC_9(VAR_12);
  if (VAR_5 != 0)
   break;
 }
 FUNC_11(VAR_8, VAR_7);
 *VAR_1 = VAR_6;
 return (VAR_5);
}
