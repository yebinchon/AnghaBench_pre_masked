
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int io_priority; int io_type; int io_abd; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_12__ {int iv_reconstruct; int iv_splits; } ;
typedef TYPE_2__ indirect_vsd_t ;
struct TYPE_13__ {int is_children; int is_size; int is_target_offset; TYPE_4__* is_child; } ;
typedef TYPE_3__ indirect_split_t ;
struct TYPE_14__ {int ic_data; int ic_vdev; int * ic_duplicate; } ;
typedef TYPE_4__ indirect_child_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_6(zio_t *VAR_2)
{
 indirect_vsd_t *VAR_3 = VAR_2->io_vsd;

 for (indirect_split_t *VAR_4 = FUNC_1(&VAR_3->iv_splits);
     VAR_4 != ((void*)0); VAR_4 = FUNC_2(&VAR_3->iv_splits, VAR_4)) {
  for (int VAR_5 = 0; VAR_5 < VAR_4->is_children; VAR_5++) {
   indirect_child_t *VAR_6 = &VAR_4->is_child[VAR_5];

   if (!FUNC_3(VAR_6->ic_vdev))
    continue;
   VAR_6->ic_data = FUNC_0(VAR_2->io_abd,
       VAR_4->is_size);
   VAR_6->ic_duplicate = ((void*)0);

   FUNC_4(FUNC_5(VAR_2, ((void*)0),
       VAR_6->ic_vdev, VAR_4->is_target_offset, VAR_6->ic_data,
       VAR_4->is_size, VAR_2->io_type, VAR_2->io_priority, 0,
       VAR_1, VAR_6));
  }
 }
 VAR_3->iv_reconstruct = VAR_0;
}
