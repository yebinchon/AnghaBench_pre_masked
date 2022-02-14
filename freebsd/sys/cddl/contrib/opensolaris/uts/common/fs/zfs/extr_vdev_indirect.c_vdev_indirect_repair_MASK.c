
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int io_flags; int io_spa; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_14__ {int iv_splits; } ;
typedef TYPE_2__ indirect_vsd_t ;
struct TYPE_15__ {int is_children; int is_size; TYPE_4__* is_good_child; int is_target_offset; TYPE_4__* is_child; } ;
typedef TYPE_3__ indirect_split_t ;
struct TYPE_16__ {int * ic_data; int ic_vdev; struct TYPE_16__* ic_duplicate; } ;
typedef TYPE_4__ indirect_child_t ;
typedef enum zio_flag { ____Placeholder_zio_flag } zio_flag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int *,int ,int ,int ,int,int *,int *) ;

__attribute__((used)) static void
FUNC_6(zio_t *VAR_6)
{
 indirect_vsd_t *VAR_7 = VAR_6->io_vsd;

 enum zio_flag VAR_8 = VAR_0;

 if (!(VAR_6->io_flags & (VAR_2 | VAR_1)))
  VAR_8 |= VAR_3;

 if (!FUNC_2(VAR_6->io_spa))
  return;

 for (indirect_split_t *VAR_9 = FUNC_0(&VAR_7->iv_splits);
     VAR_9 != ((void*)0); VAR_9 = FUNC_1(&VAR_7->iv_splits, VAR_9)) {
  for (int VAR_10 = 0; VAR_10 < VAR_9->is_children; VAR_10++) {
   indirect_child_t *VAR_11 = &VAR_9->is_child[VAR_10];
   if (VAR_11 == VAR_9->is_good_child)
    continue;
   if (VAR_11->ic_data == ((void*)0))
    continue;
   if (VAR_11->ic_duplicate == VAR_9->is_good_child)
    continue;

   FUNC_4(FUNC_5(VAR_6, ((void*)0),
       VAR_11->ic_vdev, VAR_9->is_target_offset,
       VAR_9->is_good_child->ic_data, VAR_9->is_size,
       VAR_5, VAR_4,
       VAR_0 | VAR_3,
       ((void*)0), ((void*)0)));

   FUNC_3(VAR_6, VAR_9, VAR_11);
  }
 }
}
