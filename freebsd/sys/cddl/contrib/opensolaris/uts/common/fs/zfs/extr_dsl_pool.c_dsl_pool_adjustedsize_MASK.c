
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_space_check_t ;
typedef int uint64_t ;
struct TYPE_10__ {TYPE_1__* bpo_phys; } ;
struct TYPE_11__ {TYPE_2__ spa_deferred_bpobj; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_12__ {TYPE_3__* dp_spa; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_9__ {int bpo_bytes; } ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

uint64_t
FUNC_4(dsl_pool_t *VAR_0, zfs_space_check_t VAR_1)
{
 spa_t *VAR_2 = VAR_0->dp_spa;
 uint64_t VAR_3, VAR_4, VAR_5;
 uint64_t VAR_6 =
     VAR_2->spa_deferred_bpobj.bpo_phys->bpo_bytes;

 VAR_3 = FUNC_2(VAR_2)
     - FUNC_1(VAR_2) - VAR_6;
 VAR_4 = FUNC_3(VAR_2);

 switch (VAR_1) {
 case 129:
  break;
 case 128:
  VAR_4 >>= 1;
  break;
 case 131:
  VAR_4 >>= 2;
  break;
 case 130:
  VAR_4 = 0;
  break;
 default:
  FUNC_0("invalid slop policy value: %d", VAR_1);
  break;
 }
 VAR_5 = (VAR_3 >= VAR_4) ? (VAR_3 - VAR_4) : 0;

 return (VAR_5);
}
