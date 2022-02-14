
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_guid_sum; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ blk_birth; } ;
struct TYPE_8__ {scalar_t__ ub_txg; TYPE_1__ ub_rootbp; scalar_t__ ub_checkpoint_txg; int ub_software_version; int ub_timestamp; int ub_guid_sum; int ub_magic; } ;
typedef TYPE_3__ uberblock_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

boolean_t
FUNC_2(uberblock_t *VAR_2, vdev_t *VAR_3, uint64_t VAR_4)
{
 FUNC_0(VAR_2->ub_txg < VAR_4);





 VAR_2->ub_magic = VAR_1;
 VAR_2->ub_txg = VAR_4;
 VAR_2->ub_guid_sum = VAR_3->vdev_guid_sum;
 VAR_2->ub_timestamp = FUNC_1();
 VAR_2->ub_software_version = VAR_0;
 VAR_2->ub_checkpoint_txg = 0;

 return (VAR_2->ub_rootbp.blk_birth == VAR_4);
}
