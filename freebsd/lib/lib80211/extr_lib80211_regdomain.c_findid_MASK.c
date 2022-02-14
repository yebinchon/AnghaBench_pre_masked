
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regdata {struct ident* ident; } ;
struct ident {void* p; int * id; scalar_t__ type; } ;


 scalar_t__ FUNC_0 (int *,void const*) ;

__attribute__((used)) static void *
FUNC_1(struct regdata *VAR_0, const void *VAR_1, int VAR_2)
{
 struct ident *VAR_3;

 for (VAR_3 = VAR_0->ident; VAR_3->id != ((void*)0); VAR_3++)
  if ((int) VAR_3->type == VAR_2 && FUNC_0(VAR_3->id, VAR_1) == 0)
   return VAR_3->p;
 return ((void*)0);
}
