
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {TYPE_1__* sm_phys; int sm_os; int sm_dbuf; } ;
typedef TYPE_3__ space_map_t ;
typedef int maptype_t ;
struct TYPE_14__ {TYPE_2__* tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;
typedef int dentry ;
struct TYPE_12__ {int dp_spa; } ;
struct TYPE_11__ {int smp_objsize; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int,int,int*,TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_9(space_map_t *VAR_1, maptype_t VAR_2, dmu_tx_t *VAR_3)
{
 FUNC_4(VAR_1->sm_dbuf, VAR_3);

 uint64_t VAR_4 = FUNC_3(VAR_0) |
     FUNC_0(VAR_2) |
     FUNC_1(FUNC_7(VAR_3->tx_pool->dp_spa)) |
     FUNC_2(FUNC_5(VAR_3));

 FUNC_6(VAR_1->sm_os, FUNC_8(VAR_1), VAR_1->sm_phys->smp_objsize,
     sizeof (VAR_4), &VAR_4, VAR_3);

 VAR_1->sm_phys->smp_objsize += sizeof (VAR_4);
}
