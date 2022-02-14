
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
struct ttm_tt {int caching_state; scalar_t__ state; int num_pages; int ** pages; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int FUNC_0 (int **,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ttm_tt *VAR_2,
         enum ttm_caching_state VAR_3)
{
 int VAR_4, VAR_5;
 vm_page_t VAR_6;
 int VAR_7;

 if (VAR_2->caching_state == VAR_3)
  return 0;

 if (VAR_2->state == VAR_1) {

  VAR_2->caching_state = VAR_3;
  return 0;
 }

 if (VAR_2->caching_state == VAR_0)
  FUNC_0(VAR_2->pages, VAR_2->num_pages);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_pages; ++VAR_4) {
  VAR_6 = VAR_2->pages[VAR_4];
  if (FUNC_1(VAR_6 != ((void*)0))) {
   VAR_7 = FUNC_2(VAR_6,
            VAR_2->caching_state,
            VAR_3);
   if (FUNC_3(VAR_7 != 0))
    goto out_err;
  }
 }

 VAR_2->caching_state = VAR_3;

 return 0;

out_err:
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_6 = VAR_2->pages[VAR_5];
  if (VAR_6 != ((void*)0)) {
   (void)FUNC_2(VAR_6, VAR_3,
            VAR_2->caching_state);
  }
 }

 return VAR_7;
}
