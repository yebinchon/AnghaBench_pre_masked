
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traversal_state {int f; } ;
struct ptr_data {void* new_addr; } ;
struct ggc_root_tab {size_t nelt; size_t stride; int * base; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void**,int,int,int ) ;
 struct ptr_data* FUNC_3 (int ,void*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4 (const struct ggc_root_tab * const *VAR_1,
     struct traversal_state *VAR_2)
{
  const struct ggc_root_tab *const *VAR_3;
  const struct ggc_root_tab *VAR_4;
  size_t VAR_5;

  for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
    for (VAR_4 = *VAR_3; VAR_4->base != ((void*)0); VAR_4++)
      for (VAR_5 = 0; VAR_5 < VAR_4->nelt; VAR_5++)
 {
   void *VAR_6 = *(void **)((char *)VAR_4->base + VAR_4->stride * VAR_5);
   struct ptr_data *VAR_7;
   if (VAR_6 == ((void*)0) || VAR_6 == (void *)1)
     {
       if (FUNC_2 (&VAR_6, sizeof (void *), 1, VAR_2->f)
    != 1)
  FUNC_1 ("can't write PCH file: %m");
     }
   else
     {
       VAR_7 = FUNC_3 (VAR_0, VAR_6,
          FUNC_0 (VAR_6));
       if (FUNC_2 (&VAR_7->new_addr, sizeof (void *), 1, VAR_2->f)
    != 1)
  FUNC_1 ("can't write PCH file: %m");
     }
 }
}
