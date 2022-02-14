
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dva_t ;
struct TYPE_7__ {int scn_visited_this_txg; TYPE_1__* scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {int * blk_dva; } ;
typedef TYPE_3__ blkptr_t ;
struct TYPE_6__ {int dp_spa; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_1, const blkptr_t *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_scan_t *VAR_4 = VAR_1;
 const dva_t *VAR_5 = &VAR_2->blk_dva[0];

 if (FUNC_4(VAR_4))
  return (FUNC_3(VAR_0));

 FUNC_5(VAR_4->scn_dp->dp_spa,
     FUNC_2(VAR_5), FUNC_1(VAR_5),
     FUNC_0(VAR_5), VAR_3);
 VAR_4->scn_visited_this_txg++;
 return (0);
}
