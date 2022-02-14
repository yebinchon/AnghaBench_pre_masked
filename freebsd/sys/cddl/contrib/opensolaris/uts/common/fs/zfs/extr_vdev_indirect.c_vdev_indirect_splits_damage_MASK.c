
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int zio_t ;
struct TYPE_12__ {int iv_attempts_max; int iv_splits; } ;
typedef TYPE_1__ indirect_vsd_t ;
struct TYPE_13__ {int is_children; scalar_t__ is_unique_children; int is_unique_child; TYPE_3__* is_good_child; TYPE_3__* is_child; } ;
typedef TYPE_2__ indirect_split_t ;
struct TYPE_14__ {TYPE_10__* ic_data; } ;
typedef TYPE_3__ indirect_child_t ;
struct TYPE_11__ {int abd_size; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (TYPE_10__*,int ) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_6(indirect_vsd_t *VAR_1, zio_t *VAR_2)
{

 for (indirect_split_t *VAR_3 = FUNC_1(&VAR_1->iv_splits);
     VAR_3 != ((void*)0); VAR_3 = FUNC_3(&VAR_1->iv_splits, VAR_3)) {
  VAR_3->is_unique_children = 0;

  for (int VAR_4 = 0; VAR_4 < VAR_3->is_children; VAR_4++) {
   indirect_child_t *VAR_5 = &VAR_3->is_child[VAR_4];
   if (VAR_5->ic_data != ((void*)0)) {
    VAR_3->is_unique_children++;
    FUNC_2(&VAR_3->is_unique_child, VAR_5);
   }
  }
 }





 int VAR_6 = FUNC_5(VAR_1, VAR_2);
 if (VAR_6)
  goto out;
 VAR_1->iv_attempts_max = 1;

 for (indirect_split_t *VAR_7 = FUNC_1(&VAR_1->iv_splits);
     VAR_7 != ((void*)0); VAR_7 = FUNC_3(&VAR_1->iv_splits, VAR_7)) {
  for (int VAR_8 = 0; VAR_8 < VAR_7->is_children; VAR_8++) {
   indirect_child_t *VAR_9 = &VAR_7->is_child[VAR_8];

   if (VAR_9 == VAR_7->is_good_child)
    continue;
   if (VAR_9->ic_data == ((void*)0))
    continue;

   FUNC_0(VAR_9->ic_data, VAR_9->ic_data->abd_size);
  }

  VAR_1->iv_attempts_max *= 2;
  if (VAR_1->iv_attempts_max > (1ULL << 16)) {
   VAR_1->iv_attempts_max = VAR_0;
   break;
  }
 }

out:

 for (indirect_split_t *VAR_10 = FUNC_1(&VAR_1->iv_splits);
     VAR_10 != ((void*)0); VAR_10 = FUNC_3(&VAR_1->iv_splits, VAR_10)) {
  indirect_child_t *VAR_11;
  while ((VAR_11 = FUNC_1(&VAR_10->is_unique_child)) != ((void*)0))
   FUNC_4(&VAR_10->is_unique_child, VAR_11);

  VAR_10->is_unique_children = 0;
 }

 return (VAR_6);
}
