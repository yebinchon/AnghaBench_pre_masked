
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int ,int ,int *,int ,int *,void*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_7(zio_t *VAR_9, vdev_t *VAR_10, int VAR_11, abd_t *VAR_12, uint64_t VAR_13,
    uint64_t VAR_14, zio_done_func_t *VAR_15, void *VAR_16, int VAR_17)
{
 FUNC_0(FUNC_2(VAR_9->io_spa, VAR_3, VAR_2) == VAR_3 ||
     (FUNC_2(VAR_9->io_spa, VAR_4 | VAR_5, VAR_1) ==
     (VAR_4 | VAR_5) &&
     FUNC_1(FUNC_3(VAR_9->io_spa))));
 FUNC_0(VAR_17 & VAR_7);

 FUNC_5(FUNC_6(VAR_9, VAR_10,
     FUNC_4(VAR_10->vdev_psize, VAR_11, VAR_13),
     VAR_14, VAR_12, VAR_6, VAR_15, VAR_16,
     VAR_8, VAR_17, VAR_0));
}
