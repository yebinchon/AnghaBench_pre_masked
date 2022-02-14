
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_error; TYPE_2__* io_private; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_5__ {int mc_tried; scalar_t__ mc_skipped; int mc_error; } ;
typedef TYPE_2__ mirror_child_t ;



__attribute__((used)) static void
FUNC_0(zio_t *VAR_0)
{
 mirror_child_t *VAR_1 = VAR_0->io_private;

 VAR_1->mc_error = VAR_0->io_error;
 VAR_1->mc_tried = 1;
 VAR_1->mc_skipped = 0;
}
