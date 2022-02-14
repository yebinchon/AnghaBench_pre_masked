
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ io_type; int io_size; int io_abd; void* io_error; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_11__ {TYPE_2__* vb_io; } ;
typedef TYPE_3__ vdev_buf_t ;
struct TYPE_9__ {int b_addr; } ;
struct TYPE_12__ {scalar_t__ b_resid; TYPE_1__ b_un; } ;
typedef TYPE_4__ buf_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(buf_t *VAR_2)
{
 vdev_buf_t *VAR_3 = (vdev_buf_t *)VAR_2;
 zio_t *VAR_4 = VAR_3->vb_io;






 VAR_4->io_error = (FUNC_3(VAR_2) != 0 ? FUNC_0(VAR_0) : 0);

 if (VAR_4->io_error == 0 && VAR_2->b_resid != 0)
  VAR_4->io_error = FUNC_0(VAR_0);

 if (VAR_4->io_type == VAR_1) {
  FUNC_2(VAR_4->io_abd, VAR_2->b_un.b_addr, VAR_4->io_size);
 } else {
  FUNC_1(VAR_4->io_abd, VAR_2->b_un.b_addr, VAR_4->io_size);
 }

 FUNC_4(VAR_3, sizeof (vdev_buf_t));

 FUNC_5(VAR_4);
}
