
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int range_tree_t ;
struct TYPE_3__ {int rs_end; int rs_start; } ;
typedef TYPE_1__ range_seg_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;

void
FUNC_4(range_tree_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 range_seg_t *VAR_3;

 if (VAR_2 == 0)
  return;

 while ((VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2)) != ((void*)0)) {
  uint64_t VAR_4 = FUNC_0(VAR_3->rs_start, VAR_1);
  uint64_t VAR_5 = FUNC_1(VAR_3->rs_end, VAR_1 + VAR_2);
  FUNC_3(VAR_0, VAR_4, VAR_5 - VAR_4);
 }
}
