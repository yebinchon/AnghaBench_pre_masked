
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vm_page_t ;
struct ttm_page_pool {scalar_t__ npages; int lock; int list; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_4__ {scalar_t__ max_size; } ;
struct TYPE_6__ {TYPE_1__ options; } ;
struct TYPE_5__ {int q; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_2 ;
 struct ttm_page_pool* FUNC_3 (int,int) ;
 int FUNC_4 (struct ttm_page_pool*,unsigned int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(vm_page_t *VAR_3, unsigned VAR_4, int VAR_5,
     enum ttm_caching_state VAR_6)
{
 struct ttm_page_pool *VAR_7 = FUNC_3(VAR_5, VAR_6);
 unsigned VAR_8;

 if (VAR_7 == ((void*)0)) {

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (VAR_3[VAR_8]) {
    FUNC_5(VAR_3[VAR_8]);
    VAR_3[VAR_8] = ((void*)0);
   }
  }
  return;
 }

 FUNC_1(&VAR_7->lock);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_3[VAR_8]) {
   FUNC_0(&VAR_7->list, VAR_3[VAR_8], VAR_2.q);
   VAR_3[VAR_8] = ((void*)0);
   VAR_7->npages++;
  }
 }

 VAR_4 = 0;
 if (VAR_7->npages > VAR_1->options.max_size) {
  VAR_4 = VAR_7->npages - VAR_1->options.max_size;


  if (VAR_4 < VAR_0)
   VAR_4 = VAR_0;
 }
 FUNC_2(&VAR_7->lock);
 if (VAR_4)
  FUNC_4(VAR_7, VAR_4);
}
