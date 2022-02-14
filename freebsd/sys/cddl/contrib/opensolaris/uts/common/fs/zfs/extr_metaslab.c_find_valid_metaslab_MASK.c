
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ ms_initializing; int ms_allocator; int ms_primary; scalar_t__ ms_start; int ms_weight; int ms_sm; scalar_t__ ms_condensing; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_16__ {int mg_metaslab_tree; } ;
typedef TYPE_2__ metaslab_group_t ;
typedef int dva_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_1__*,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static metaslab_t *
FUNC_7(metaslab_group_t *VAR_3, uint64_t VAR_4,
    dva_t *VAR_5, int VAR_6, uint64_t VAR_7, uint64_t VAR_8, int VAR_9,
    zio_alloc_list_t *VAR_10, metaslab_t *VAR_11, boolean_t *VAR_12)
{
 avl_index_t VAR_13;
 avl_tree_t *VAR_14 = &VAR_3->mg_metaslab_tree;
 metaslab_t *VAR_15 = FUNC_1(VAR_14, VAR_11, &VAR_13);
 if (VAR_15 == ((void*)0))
  VAR_15 = FUNC_2(VAR_14, VAR_13, VAR_0);

 for (; VAR_15 != ((void*)0); VAR_15 = FUNC_0(VAR_14, VAR_15)) {
  int VAR_16;
  if (!FUNC_4(VAR_15, VAR_8)) {
   FUNC_5(VAR_10, VAR_3, VAR_15, VAR_8, VAR_6,
       VAR_2, VAR_9);
   continue;
  }





  if (VAR_15->ms_condensing || VAR_15->ms_initializing > 0)
   continue;

  *VAR_12 = VAR_15->ms_allocator != -1;







  if (VAR_4 == VAR_1 || *VAR_12)
   break;

  uint64_t VAR_17 = VAR_7
      + (FUNC_6(VAR_15->ms_sm) != 0 ? 0 :
      VAR_7 >> 1);

  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
   if (FUNC_3(VAR_15, &VAR_5[VAR_16]) < VAR_17)
    break;
  }
  if (VAR_16 == VAR_6)
   break;
 }

 if (VAR_15 != ((void*)0)) {
  VAR_11->ms_weight = VAR_15->ms_weight;
  VAR_11->ms_start = VAR_15->ms_start + 1;
  VAR_11->ms_allocator = VAR_15->ms_allocator;
  VAR_11->ms_primary = VAR_15->ms_primary;
 }
 return (VAR_15);
}
