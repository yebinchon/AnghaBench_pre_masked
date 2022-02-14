
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_error; int io_lock; int * io_abd; TYPE_2__* io_private; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
typedef int ddt_phys_t ;
struct TYPE_8__ {int * dde_repair_abd; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(zio_t *VAR_0)
{
 blkptr_t *VAR_1 = VAR_0->io_bp;
 ddt_entry_t *VAR_2 = VAR_0->io_private;
 ddt_phys_t *VAR_3;
 zio_t *VAR_4 = FUNC_5(VAR_0);

 FUNC_3(&VAR_4->io_lock);
 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_0->io_error == 0)
  FUNC_1(VAR_3);

 if (VAR_0->io_error == 0 && VAR_2->dde_repair_abd == ((void*)0))
  VAR_2->dde_repair_abd = VAR_0->io_abd;
 else
  FUNC_0(VAR_0->io_abd);
 FUNC_4(&VAR_4->io_lock);
}
