
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int zap_num_entries; } ;
struct TYPE_13__ {TYPE_2__ zap_m; TYPE_1__* zap_dbuf; scalar_t__ zap_ismicro; } ;
typedef TYPE_3__ zap_t ;
struct TYPE_14__ {int zs_num_blocks; int zs_num_entries; int zs_blocksize; } ;
typedef TYPE_4__ zap_stats_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {int db_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ,int ,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*,int ) ;

int
FUNC_4(objset_t *VAR_4, uint64_t VAR_5, zap_stats_t *VAR_6)
{
 zap_t *VAR_7;

 int VAR_8 =
     FUNC_2(VAR_4, VAR_5, ((void*)0), VAR_2, VAR_3, VAR_0, VAR_1, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 FUNC_0(VAR_6, sizeof (zap_stats_t));

 if (VAR_7->zap_ismicro) {
  VAR_6->zs_blocksize = VAR_7->zap_dbuf->db_size;
  VAR_6->zs_num_entries = VAR_7->zap_m.zap_num_entries;
  VAR_6->zs_num_blocks = 1;
 } else {
  FUNC_1(VAR_7, VAR_6);
 }
 FUNC_3(VAR_7, VAR_1);
 return (0);
}
