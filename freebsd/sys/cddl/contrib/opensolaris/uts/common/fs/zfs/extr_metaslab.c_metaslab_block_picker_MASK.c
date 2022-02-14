
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ rs_end; int rs_start; } ;
typedef TYPE_1__ range_seg_t ;
typedef int avl_tree_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_3(avl_tree_t *VAR_0, uint64_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3)
{
 range_seg_t *VAR_4 = FUNC_2(VAR_0, *VAR_1, VAR_2);

 while (VAR_4 != ((void*)0)) {
  uint64_t VAR_5 = FUNC_1(VAR_4->rs_start, VAR_3);

  if (VAR_5 + VAR_2 <= VAR_4->rs_end) {
   *VAR_1 = VAR_5 + VAR_2;
   return (VAR_5);
  }
  VAR_4 = FUNC_0(VAR_0, VAR_4);
 }





 if (*VAR_1 == 0)
  return (-1ULL);

 *VAR_1 = 0;
 return (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3));
}
