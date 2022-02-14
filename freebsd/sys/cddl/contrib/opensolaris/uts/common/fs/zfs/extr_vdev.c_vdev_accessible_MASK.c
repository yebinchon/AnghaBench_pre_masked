
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ io_type; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_7__ {int vdev_cant_write; int vdev_cant_read; scalar_t__ vdev_remove_wanted; } ;
typedef TYPE_2__ vdev_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

boolean_t
FUNC_2(vdev_t *VAR_4, zio_t *VAR_5)
{
 FUNC_0(VAR_5->io_vd == VAR_4);

 if (FUNC_1(VAR_4) || VAR_4->vdev_remove_wanted)
  return (VAR_0);

 if (VAR_5->io_type == VAR_2)
  return (!VAR_4->vdev_cant_read);

 if (VAR_5->io_type == VAR_3)
  return (!VAR_4->vdev_cant_write);

 return (VAR_1);
}
