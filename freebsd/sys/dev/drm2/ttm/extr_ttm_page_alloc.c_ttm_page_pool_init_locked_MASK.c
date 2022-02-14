
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_page_pool {int fill_lock; int ttm_page_alloc_flags; char* name; scalar_t__ nfrees; scalar_t__ npages; int list; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ttm_page_pool *VAR_1, int VAR_2,
          char *VAR_3)
{
 FUNC_1(&VAR_1->lock, "ttmpool", ((void*)0), VAR_0);
 VAR_1->fill_lock = 0;
 FUNC_0(&VAR_1->list);
 VAR_1->npages = VAR_1->nfrees = 0;
 VAR_1->ttm_page_alloc_flags = VAR_2;
 VAR_1->name = VAR_3;
}
