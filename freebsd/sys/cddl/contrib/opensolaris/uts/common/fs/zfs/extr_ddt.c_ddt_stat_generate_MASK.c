
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_9__ {int * ddt_spa; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_10__ {int dds_blocks; int dds_lsize; int dds_psize; int dds_dsize; int dds_ref_blocks; int dds_ref_lsize; int dds_ref_psize; int dds_ref_dsize; } ;
typedef TYPE_2__ ddt_stat_t ;
struct TYPE_11__ {int ddp_refcnt; scalar_t__ ddp_phys_birth; int * ddp_dva; } ;
typedef TYPE_3__ ddt_phys_t ;
typedef int ddt_key_t ;
struct TYPE_12__ {int dde_key; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(ddt_t *VAR_2, ddt_entry_t *VAR_3, ddt_stat_t *VAR_4)
{
 spa_t *VAR_5 = VAR_2->ddt_spa;
 ddt_phys_t *VAR_6 = VAR_3->dde_phys;
 ddt_key_t *VAR_7 = &VAR_3->dde_key;
 uint64_t VAR_8 = FUNC_0(VAR_7);
 uint64_t VAR_9 = FUNC_1(VAR_7);

 FUNC_2(VAR_4, sizeof (*VAR_4));

 for (int VAR_10 = 0; VAR_10 < VAR_0; VAR_10++, VAR_6++) {
  uint64_t VAR_11 = 0;
  uint64_t VAR_12 = VAR_6->ddp_refcnt;

  if (VAR_6->ddp_phys_birth == 0)
   continue;

  for (int VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   VAR_11 += FUNC_3(VAR_5, &VAR_6->ddp_dva[VAR_13]);

  VAR_4->dds_blocks += 1;
  VAR_4->dds_lsize += VAR_8;
  VAR_4->dds_psize += VAR_9;
  VAR_4->dds_dsize += VAR_11;

  VAR_4->dds_ref_blocks += VAR_12;
  VAR_4->dds_ref_lsize += VAR_8 * VAR_12;
  VAR_4->dds_ref_psize += VAR_9 * VAR_12;
  VAR_4->dds_ref_dsize += VAR_11 * VAR_12;
 }
}
