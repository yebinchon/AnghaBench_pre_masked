
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* vdev_initialize_tree; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_11__ {int rs_end; int rs_start; } ;
typedef TYPE_3__ range_seg_t ;
typedef int avl_tree_t ;
typedef int abd_t ;
struct TYPE_9__ {int rt_root; } ;


 TYPE_3__* FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(vdev_t *VAR_2, abd_t *VAR_3)
{
 avl_tree_t *VAR_4 = &VAR_2->vdev_initialize_tree->rt_root;

 for (range_seg_t *VAR_5 = FUNC_2(VAR_4); VAR_5 != ((void*)0);
     VAR_5 = FUNC_0(VAR_4, VAR_5)) {
  uint64_t VAR_6 = VAR_5->rs_end - VAR_5->rs_start;


  uint64_t VAR_7 =
      ((VAR_6 - 1) / VAR_1) + 1;

  for (uint64_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   int VAR_9;

   VAR_9 = FUNC_3(VAR_2,
       VAR_0 + VAR_5->rs_start +
       (VAR_8 * VAR_1),
       FUNC_1(VAR_6 - (VAR_8 * VAR_1),
       VAR_1), VAR_3);
   if (VAR_9 != 0)
    return (VAR_9);
  }
 }
 return (0);
}
