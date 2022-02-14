
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* zap_dbuf; } ;
typedef TYPE_4__ zap_t ;
typedef int zap_leaf_t ;
typedef scalar_t__ uint64_t ;
typedef int krw_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {int zt_shift; } ;
struct TYPE_16__ {scalar_t__ zap_block_type; scalar_t__ zap_magic; TYPE_2__ zap_ptrtbl; } ;
struct TYPE_13__ {scalar_t__ lh_prefix; int lh_prefix_len; } ;
struct TYPE_15__ {TYPE_3__ l_hdr; } ;
struct TYPE_11__ {TYPE_8__* db_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_8__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int *,int ,int **) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 TYPE_5__* FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(zap_t *VAR_4, uint64_t VAR_5, dmu_tx_t *VAR_6, krw_t VAR_7, zap_leaf_t **VAR_8)
{
 uint64_t VAR_9;

 FUNC_0(VAR_4->zap_dbuf == ((void*)0) ||
     FUNC_3(VAR_4) == VAR_4->zap_dbuf->db_data);


 if ((FUNC_3(VAR_4)->zap_block_type != VAR_3 &&
     FUNC_3(VAR_4)->zap_block_type != VAR_2) ||
     FUNC_3(VAR_4)->zap_magic != VAR_1) {
  return (FUNC_1(VAR_0));
 }

 uint64_t VAR_10 = FUNC_2(VAR_5, FUNC_3(VAR_4)->zap_ptrtbl.zt_shift);
 int VAR_11 = FUNC_5(VAR_4, VAR_10, &VAR_9);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_11 = FUNC_4(VAR_4, VAR_9, VAR_6, VAR_7, VAR_8);

 FUNC_0(VAR_11 ||
     FUNC_2(VAR_5, FUNC_6(*VAR_8)->l_hdr.lh_prefix_len) ==
     FUNC_6(*VAR_8)->l_hdr.lh_prefix);
 return (VAR_11);
}
