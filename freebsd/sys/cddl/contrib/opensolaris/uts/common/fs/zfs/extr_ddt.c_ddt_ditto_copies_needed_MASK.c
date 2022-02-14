
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ io_parent_count; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ spa_dedup_ditto; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_11__ {TYPE_2__* ddt_spa; } ;
typedef TYPE_3__ ddt_t ;
struct TYPE_12__ {scalar_t__ ddp_refcnt; } ;
typedef TYPE_4__ ddt_phys_t ;
struct TYPE_13__ {TYPE_1__** dde_lead_zio; TYPE_4__* dde_phys; } ;
typedef TYPE_5__ ddt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;

int
FUNC_1(ddt_t *VAR_3, ddt_entry_t *VAR_4, ddt_phys_t *VAR_5)
{
 spa_t *VAR_6 = VAR_3->ddt_spa;
 uint64_t VAR_7 = 0;
 uint64_t VAR_8 = VAR_6->spa_dedup_ditto;
 int VAR_9 = 0;
 int VAR_10 = 0;

 for (int VAR_11 = VAR_0; VAR_11 <= VAR_1; VAR_11++) {
  ddt_phys_t *VAR_12 = &VAR_4->dde_phys[VAR_11];
  zio_t *VAR_13 = VAR_4->dde_lead_zio[VAR_11];
  uint64_t VAR_14 = VAR_12->ddp_refcnt;
  if (VAR_13 != ((void*)0))
   VAR_14 += VAR_13->io_parent_count;
  if (VAR_12 == VAR_5)
   VAR_14++;
  if (VAR_14 != 0) {
   VAR_7 += VAR_14;
   VAR_9 += VAR_11;
  }
 }

 if (VAR_8 == 0 || VAR_8 > VAR_2)
  VAR_8 = VAR_2;

 if (VAR_7 >= 1)
  VAR_10++;
 if (VAR_7 >= VAR_8)
  VAR_10++;
 if (VAR_7 >= VAR_8 * VAR_8)
  VAR_10++;

 return (FUNC_0(VAR_10, VAR_9) - VAR_9);
}
