
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int io_spa; int io_flags; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_18__ {int ddt_checksum; } ;
typedef TYPE_2__ ddt_t ;
struct TYPE_19__ {scalar_t__ ddp_phys_birth; int ddp_dva; } ;
typedef TYPE_3__ ddt_phys_t ;
typedef int ddt_key_t ;
struct TYPE_20__ {int dde_repair_abd; int dde_key; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *,TYPE_3__*,int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ,int *,int ,TYPE_4__*,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int ,int ,int *,int ,int ,int *,int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_7(ddt_t *VAR_3, ddt_entry_t *VAR_4, ddt_entry_t *VAR_5, zio_t *VAR_6)
{
 ddt_phys_t *VAR_7 = VAR_4->dde_phys;
 ddt_phys_t *VAR_8 = VAR_5->dde_phys;
 ddt_key_t *VAR_9 = &VAR_4->dde_key;
 ddt_key_t *VAR_10 = &VAR_5->dde_key;
 zio_t *VAR_11;
 blkptr_t VAR_12;

 VAR_11 = FUNC_5(VAR_6, VAR_6->io_spa, ((void*)0),
     VAR_2, VAR_5, VAR_6->io_flags);

 for (int VAR_13 = 0; VAR_13 < VAR_0; VAR_13++, VAR_7++, VAR_8++) {
  if (VAR_7->ddp_phys_birth == 0 ||
      VAR_7->ddp_phys_birth != VAR_8->ddp_phys_birth ||
      FUNC_2(VAR_7->ddp_dva, VAR_8->ddp_dva, sizeof (VAR_7->ddp_dva)))
   continue;
  FUNC_3(VAR_3->ddt_checksum, VAR_9, VAR_7, &VAR_12);
  FUNC_4(FUNC_6(VAR_11, VAR_11->io_spa, 0, &VAR_12,
      VAR_5->dde_repair_abd, FUNC_0(VAR_10), ((void*)0), ((void*)0),
      VAR_1, FUNC_1(VAR_11), ((void*)0)));
 }

 FUNC_4(VAR_11);
}
