
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int io_flags; int io_spa; TYPE_6__* io_vsd; TYPE_1__* io_vd; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_16__ {int zbc_injected; scalar_t__ zbc_has_cksum; } ;
typedef TYPE_4__ zio_bad_cksum_t ;
struct TYPE_14__ {int vs_checksum_errors; } ;
struct TYPE_17__ {int vdev_stat_lock; TYPE_2__ vdev_stat; } ;
typedef TYPE_5__ vdev_t ;
struct TYPE_18__ {int rm_ecksuminjected; } ;
typedef TYPE_6__ raidz_map_t ;
struct TYPE_19__ {size_t rc_devidx; int rc_size; int rc_abd; int rc_offset; } ;
typedef TYPE_7__ raidz_col_t ;
struct TYPE_13__ {TYPE_5__** vdev_child; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_5__*,TYPE_3__*,int ,int ,void*,void*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_1, raidz_col_t *VAR_2, void *VAR_3)
{
 void *VAR_4;
 vdev_t *VAR_5 = VAR_1->io_vd->vdev_child[VAR_2->rc_devidx];

 if (!(VAR_1->io_flags & VAR_0)) {
  zio_bad_cksum_t VAR_6;
  raidz_map_t *VAR_7 = VAR_1->io_vsd;

  FUNC_2(&VAR_5->vdev_stat_lock);
  VAR_5->vdev_stat.vs_checksum_errors++;
  FUNC_3(&VAR_5->vdev_stat_lock);

  VAR_6.zbc_has_cksum = 0;
  VAR_6.zbc_injected = VAR_7->rm_ecksuminjected;

  VAR_4 = FUNC_0(VAR_2->rc_abd, VAR_2->rc_size);
  FUNC_4(VAR_1->io_spa, VAR_5, VAR_1,
      VAR_2->rc_offset, VAR_2->rc_size, VAR_4, VAR_3,
      &VAR_6);
  FUNC_1(VAR_2->rc_abd, VAR_4, VAR_2->rc_size);
 }
}
