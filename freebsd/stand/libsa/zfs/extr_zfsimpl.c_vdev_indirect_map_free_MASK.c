
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_10__ {int is_children; int iv_splits; TYPE_4__* is_child; } ;
typedef TYPE_2__ indirect_vsd_t ;
typedef TYPE_2__ indirect_split_t ;
struct TYPE_11__ {TYPE_2__* ic_data; } ;
typedef TYPE_4__ indirect_child_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_0)
{
 indirect_vsd_t *VAR_1 = VAR_0->io_vsd;
 indirect_split_t *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->iv_splits)) != ((void*)0)) {
  for (int VAR_3 = 0; VAR_3 < VAR_2->is_children; VAR_3++) {
   indirect_child_t *VAR_4 = &VAR_2->is_child[VAR_3];
   FUNC_0(VAR_4->ic_data);
  }
  FUNC_2(&VAR_1->iv_splits, VAR_2);
  FUNC_0(VAR_2);
 }
 FUNC_0(VAR_1);
}
