
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zap_t ;
typedef scalar_t__ zap_flags_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_7__ {uintptr_t mz_salt; int mz_normflags; int mz_block_type; } ;
typedef TYPE_1__ mzap_phys_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {TYPE_1__* db_data; } ;
typedef TYPE_2__ dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int ,int ,TYPE_2__**,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int **,int ,int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int *,int ,int ,int ,int **) ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(objset_t *VAR_5, uint64_t VAR_6, int VAR_7, zap_flags_t VAR_8,
    dmu_tx_t *VAR_9)
{
 dmu_buf_t *VAR_10;

 FUNC_0(FUNC_1(VAR_5, VAR_6, 0, VAR_2, &VAR_10, VAR_1));

 FUNC_3(VAR_10, VAR_9);
 mzap_phys_t *VAR_11 = VAR_10->db_data;
 VAR_11->mz_block_type = VAR_4;
 VAR_11->mz_salt = ((uintptr_t)VAR_10 ^ (uintptr_t)VAR_9 ^ (VAR_6 << 1)) | 1ULL;
 VAR_11->mz_normflags = VAR_7;

 if (VAR_8 != 0) {
  zap_t *VAR_12;

  FUNC_0(FUNC_5(VAR_10, VAR_2, VAR_9, VAR_3,
      VAR_0, VAR_0, &VAR_12));
  FUNC_0(FUNC_4(&VAR_12, VAR_2, VAR_9, VAR_8));
  FUNC_6(VAR_12, VAR_2);
 } else {
  FUNC_2(VAR_10, VAR_2);
 }
}
