
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zp_copies; } ;
struct TYPE_10__ {scalar_t__ io_error; TYPE_4__* io_private; int io_bp; int io_spa; TYPE_1__ io_prop; } ;
typedef TYPE_2__ zio_t ;
typedef int zio_link_t ;
typedef int ddt_t ;
struct TYPE_11__ {scalar_t__ ddp_refcnt; } ;
typedef TYPE_3__ ddt_phys_t ;
struct TYPE_12__ {TYPE_2__** dde_lead_zio; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (TYPE_2__*,int **) ;

__attribute__((used)) static void
FUNC_7(zio_t *VAR_0)
{
 int VAR_1 = VAR_0->io_prop.zp_copies;
 ddt_t *VAR_2 = FUNC_5(VAR_0->io_spa, VAR_0->io_bp);
 ddt_entry_t *VAR_3 = VAR_0->io_private;
 ddt_phys_t *VAR_4 = &VAR_3->dde_phys[VAR_1];

 FUNC_1(VAR_2);

 FUNC_0(VAR_4->ddp_refcnt == 0);
 FUNC_0(VAR_3->dde_lead_zio[VAR_1] == VAR_0);
 VAR_3->dde_lead_zio[VAR_1] = ((void*)0);

 if (VAR_0->io_error == 0) {
  zio_link_t *VAR_5 = ((void*)0);
  while (FUNC_6(VAR_0, &VAR_5) != ((void*)0))
   FUNC_3(VAR_4);
 } else {
  FUNC_4(VAR_4);
 }

 FUNC_2(VAR_2);
}
