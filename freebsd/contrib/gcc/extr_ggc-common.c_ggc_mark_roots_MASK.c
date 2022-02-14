
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ggc_root_tab {size_t stride; size_t nelt; int * base; int (* cb ) (void*) ;} ;
struct ggc_cache_tab {TYPE_1__** base; } ;
struct TYPE_3__ {struct TYPE_3__* entries; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 struct ggc_cache_tab** VAR_1 ;
 struct ggc_root_tab** VAR_2 ;
 struct ggc_root_tab** VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,void*) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (void*) ;

void
FUNC_5 (void)
{
  const struct ggc_root_tab *const *VAR_4;
  const struct ggc_root_tab *VAR_5;
  const struct ggc_cache_tab *const *VAR_6;
  const struct ggc_cache_tab *VAR_7;
  size_t VAR_8;

  for (VAR_4 = VAR_2; *VAR_4; VAR_4++)
    for (VAR_5 = *VAR_4; VAR_5->base != ((void*)0); VAR_5++)
      FUNC_3 (VAR_5->base, 0, VAR_5->stride);

  for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
    for (VAR_5 = *VAR_4; VAR_5->base != ((void*)0); VAR_5++)
      for (VAR_8 = 0; VAR_8 < VAR_5->nelt; VAR_8++)
 (*VAR_5->cb)(*(void **)((char *)VAR_5->base + VAR_5->stride * VAR_8));

  FUNC_0 ();



  for (VAR_6 = VAR_1; *VAR_6; VAR_6++)
    for (VAR_7 = *VAR_6; VAR_7->base != ((void*)0); VAR_7++)
      if (*VAR_7->base)
 {
   FUNC_1 (*VAR_7->base);
   FUNC_2 (*VAR_7->base, VAR_0, (void *) VAR_7);
   FUNC_1 ((*VAR_7->base)->entries);
 }
}
