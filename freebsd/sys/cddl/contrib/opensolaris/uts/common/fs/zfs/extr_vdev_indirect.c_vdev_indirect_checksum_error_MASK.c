
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int io_flags; int io_spa; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_17__ {int member_0; } ;
typedef TYPE_4__ zio_bad_cksum_t ;
struct TYPE_14__ {int vs_checksum_errors; } ;
struct TYPE_18__ {int vdev_stat_lock; TYPE_1__ vdev_stat; } ;
typedef TYPE_5__ vdev_t ;
struct TYPE_19__ {int is_size; int is_target_offset; TYPE_2__* is_good_child; } ;
typedef TYPE_6__ indirect_split_t ;
struct TYPE_20__ {int * ic_data; TYPE_5__* ic_vdev; } ;
typedef TYPE_7__ indirect_child_t ;
typedef int abd_t ;
struct TYPE_15__ {int * ic_data; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_5__*,TYPE_3__*,int ,int ,void*,void*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_1,
    indirect_split_t *VAR_2, indirect_child_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_3->ic_vdev;

 if (VAR_1->io_flags & VAR_0)
  return;

 FUNC_2(&VAR_4->vdev_stat_lock);
 VAR_4->vdev_stat.vs_checksum_errors++;
 FUNC_3(&VAR_4->vdev_stat_lock);

 zio_bad_cksum_t VAR_5 = { 0 };
 void *VAR_6 = FUNC_0(VAR_3->ic_data, VAR_2->is_size);
 abd_t *VAR_7 = VAR_2->is_good_child->ic_data;
 void *VAR_8 = FUNC_0(VAR_7, VAR_2->is_size);
 FUNC_4(VAR_1->io_spa, VAR_4, VAR_1,
     VAR_2->is_target_offset, VAR_2->is_size, VAR_8, VAR_6, &VAR_5);
 FUNC_1(VAR_3->ic_data, VAR_6, VAR_2->is_size);
 FUNC_1(VAR_7, VAR_8, VAR_2->is_size);
}
