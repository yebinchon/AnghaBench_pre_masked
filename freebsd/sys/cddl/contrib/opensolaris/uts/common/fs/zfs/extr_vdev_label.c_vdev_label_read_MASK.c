
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_done_func_t ;
struct TYPE_8__ {int vdev_psize; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ,int ,int *,int ,int *,void*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_6, vdev_t *VAR_7, int VAR_8, abd_t *VAR_9, uint64_t VAR_10,
    uint64_t VAR_11, zio_done_func_t *VAR_12, void *VAR_13, int VAR_14)
{
 FUNC_0(FUNC_1(VAR_6->io_spa, VAR_2, VAR_1) ==
     VAR_2);
 FUNC_0(VAR_14 & VAR_4);

 FUNC_3(FUNC_4(VAR_6, VAR_7,
     FUNC_2(VAR_7->vdev_psize, VAR_8, VAR_10),
     VAR_11, VAR_9, VAR_3, VAR_12, VAR_13,
     VAR_5, VAR_14, VAR_0));
}
