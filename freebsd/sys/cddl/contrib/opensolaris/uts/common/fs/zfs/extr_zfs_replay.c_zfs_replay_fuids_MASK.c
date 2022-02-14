
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int z_id; scalar_t__ z_domidx; int z_logfuid; } ;
typedef TYPE_1__ zfs_fuid_t ;
struct TYPE_10__ {int z_domain_cnt; int z_fuids; int z_domain_table; } ;
typedef TYPE_2__ zfs_fuid_info_t ;
typedef int uint64_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_3 () ;
 void* FUNC_4 (TYPE_2__*,int *,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static zfs_fuid_info_t *
FUNC_6(void *VAR_1, void **VAR_2, int VAR_3, int VAR_4, uint64_t VAR_5,
    uint64_t VAR_6)
{
 uint64_t *VAR_7 = (uint64_t *)VAR_1;
 zfs_fuid_info_t *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3();
 VAR_8->z_domain_cnt = VAR_4;

 VAR_8->z_domain_table =
     FUNC_1(VAR_4 * sizeof (char **), VAR_0);

 for (VAR_9 = 0; VAR_9 != VAR_3; VAR_9++) {
  zfs_fuid_t *VAR_10;

  VAR_10 = FUNC_0(sizeof (zfs_fuid_t), VAR_0);
  VAR_10->z_logfuid = *VAR_7;
  VAR_10->z_id = -1;
  VAR_10->z_domidx = 0;
  FUNC_2(&VAR_8->z_fuids, VAR_10);
  VAR_7++;
 }

 FUNC_5(VAR_8, VAR_5, VAR_6);

 *VAR_2 = FUNC_4(VAR_8, VAR_7, VAR_4);
 return (VAR_8);
}
