
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_type; scalar_t__ io_error; int io_size; int io_abd; int io_offset; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
typedef int vnode_t ;
struct TYPE_6__ {TYPE_3__* vdev_tsd; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_7__ {int * vf_vnode; } ;
typedef TYPE_3__ vdev_file_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 int FUNC_4 (int ,void*,int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int *,void*,int ,int ,int ,int ,int ,int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_8)
{
 zio_t *VAR_9 = VAR_8;
 vdev_t *VAR_10 = VAR_9->io_vd;
 vdev_file_t *VAR_11;
 vnode_t *VAR_12;
 void *VAR_13;
 ssize_t VAR_14;

 VAR_11 = VAR_10->vdev_tsd;
 VAR_12 = VAR_11->vf_vnode;

 FUNC_0(VAR_9->io_type == VAR_5 || VAR_9->io_type == VAR_6);
 if (VAR_9->io_type == VAR_5) {
  VAR_13 = FUNC_1(VAR_9->io_abd, VAR_9->io_size);
 } else {
  VAR_13 = FUNC_2(VAR_9->io_abd, VAR_9->io_size);
 }

 VAR_9->io_error = FUNC_6(VAR_9->io_type == VAR_5 ?
     VAR_2 : VAR_4, VAR_12, VAR_13, VAR_9->io_size,
     VAR_9->io_offset, VAR_3, 0, VAR_1, VAR_7, &VAR_14);

 if (VAR_9->io_type == VAR_5) {
  FUNC_4(VAR_9->io_abd, VAR_13, VAR_9->io_size);
 } else {
  FUNC_3(VAR_9->io_abd, VAR_13, VAR_9->io_size);
 }

 if (VAR_14 != 0 && VAR_9->io_error == 0)
  VAR_9->io_error = VAR_0;

 FUNC_5(VAR_9);
}
