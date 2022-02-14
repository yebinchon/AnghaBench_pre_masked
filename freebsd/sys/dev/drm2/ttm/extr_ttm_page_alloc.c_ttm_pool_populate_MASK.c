
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; unsigned int num_pages; int page_flags; int * pages; int caching_state; TYPE_1__* glob; } ;
struct ttm_mem_global {int dummy; } ;
struct TYPE_2__ {struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (struct ttm_mem_global*,int ,int,int) ;
 int FUNC_2 (struct ttm_tt*) ;
 int FUNC_3 (struct ttm_tt*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ttm_tt *VAR_4)
{
 struct ttm_mem_global *VAR_5 = VAR_4->glob->mem_glob;
 unsigned VAR_6;
 int VAR_7;

 if (VAR_4->state != VAR_3)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_pages; ++VAR_6) {
  VAR_7 = FUNC_0(&VAR_4->pages[VAR_6], 1,
        VAR_4->page_flags,
        VAR_4->caching_state);
  if (VAR_7 != 0) {
   FUNC_2(VAR_4);
   return -VAR_0;
  }

  VAR_7 = FUNC_1(VAR_5, VAR_4->pages[VAR_6],
      0, 0);
  if (FUNC_4(VAR_7 != 0)) {
   FUNC_2(VAR_4);
   return -VAR_0;
  }
 }

 if (FUNC_4(VAR_4->page_flags & VAR_1)) {
  VAR_7 = FUNC_3(VAR_4);
  if (FUNC_4(VAR_7 != 0)) {
   FUNC_2(VAR_4);
   return VAR_7;
  }
 }

 VAR_4->state = VAR_2;
 return 0;
}
