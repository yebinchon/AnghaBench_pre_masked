
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_5__ {scalar_t__ sr_refcnt; unsigned long long sr_offset; } ;
typedef TYPE_1__ space_ref_t ;
typedef int range_tree_t ;
typedef scalar_t__ int64_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long long,unsigned long long) ;
 int FUNC_4 (int *,int *,int *) ;

void
FUNC_5(avl_tree_t *VAR_0, range_tree_t *VAR_1, int64_t VAR_2)
{
 uint64_t VAR_3 = -1ULL;
 int64_t VAR_4 = 0;
 space_ref_t *VAR_5;

 FUNC_4(VAR_1, ((void*)0), ((void*)0));

 for (VAR_5 = FUNC_2(VAR_0); VAR_5 != ((void*)0); VAR_5 = FUNC_1(VAR_0, VAR_5)) {
  VAR_4 += VAR_5->sr_refcnt;
  if (VAR_4 >= VAR_2) {
   if (VAR_3 == -1ULL) {
    VAR_3 = VAR_5->sr_offset;
   }
  } else {
   if (VAR_3 != -1ULL) {
    uint64_t VAR_6 = VAR_5->sr_offset;
    FUNC_0(VAR_3 <= VAR_6);
    if (VAR_6 > VAR_3)
     FUNC_3(VAR_1, VAR_3, VAR_6 - VAR_3);
    VAR_3 = -1ULL;
   }
  }
 }
 FUNC_0(VAR_4 == 0);
 FUNC_0(VAR_3 == -1ULL);
}
