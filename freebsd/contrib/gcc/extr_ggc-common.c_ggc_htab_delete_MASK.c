
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggc_cache_tab {int (* cb ) (void*) ;int * base; int (* marked_p ) (void*) ;} ;


 int FUNC_0 (int ,void**) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3 (void **VAR_0, void *VAR_1)
{
  const struct ggc_cache_tab *VAR_2 = (const struct ggc_cache_tab *) VAR_1;

  if (! (*VAR_2->marked_p) (*VAR_0))
    FUNC_0 (*VAR_2->base, VAR_0);
  else
    (*VAR_2->cb) (*VAR_0);

  return 1;
}
