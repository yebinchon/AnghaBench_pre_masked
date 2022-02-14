
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse_block {struct sparse_block* next; } ;
struct pax {int * sparse_tail; struct sparse_block* sparse_list; } ;


 int FUNC_0 (struct sparse_block*) ;

__attribute__((used)) static void
FUNC_1(struct pax *VAR_0)
{
 while (VAR_0->sparse_list != ((void*)0)) {
  struct sparse_block *VAR_1 = VAR_0->sparse_list;
  VAR_0->sparse_list = VAR_1->next;
  FUNC_0(VAR_1);
 }
 VAR_0->sparse_tail = ((void*)0);
}
