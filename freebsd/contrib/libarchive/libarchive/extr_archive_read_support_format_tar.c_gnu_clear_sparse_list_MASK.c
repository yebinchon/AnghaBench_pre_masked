
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int * sparse_last; struct sparse_block* sparse_list; } ;
struct sparse_block {struct sparse_block* next; } ;


 int FUNC_0 (struct sparse_block*) ;

__attribute__((used)) static void
FUNC_1(struct tar *VAR_0)
{
 struct sparse_block *VAR_1;

 while (VAR_0->sparse_list != ((void*)0)) {
  VAR_1 = VAR_0->sparse_list;
  VAR_0->sparse_list = VAR_1->next;
  FUNC_0(VAR_1);
 }
 VAR_0->sparse_last = ((void*)0);
}
