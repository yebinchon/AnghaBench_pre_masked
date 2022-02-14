
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmap_update_page_arg {int pte; int va; int pmap; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct pmap_update_page_arg *VAR_1 = VAR_0;

 FUNC_0(VAR_1->pmap, VAR_1->va, VAR_1->pte);
}
