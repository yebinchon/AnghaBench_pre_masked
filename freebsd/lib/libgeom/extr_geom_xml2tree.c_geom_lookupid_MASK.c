
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {struct gident* lg_ident; } ;
struct gident {void const* lg_id; } ;



struct gident *
FUNC_0(struct gmesh *VAR_0, const void *VAR_1)
{
 struct gident *VAR_2;

 for (VAR_2 = VAR_0->lg_ident; VAR_2->lg_id != ((void*)0); VAR_2++)
  if (VAR_2->lg_id == VAR_1)
   return (VAR_2);
 return (((void*)0));
}
