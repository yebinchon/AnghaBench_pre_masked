
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_error; TYPE_2__* io_vd; int * io_private; } ;
typedef TYPE_3__ zio_t ;
typedef int uint64_t ;
struct TYPE_6__ {TYPE_1__* vdev_top; } ;
struct TYPE_5__ {scalar_t__ vdev_ms_array; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(zio_t *VAR_0)
{
 uint64_t *VAR_1 = VAR_0->io_private;

 if (VAR_0->io_error == 0 && VAR_0->io_vd->vdev_top->vdev_ms_array != 0)
  FUNC_0(VAR_1);
}
