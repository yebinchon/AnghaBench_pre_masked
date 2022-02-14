
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linked_page {void* data; struct linked_page* next; } ;
struct chain_allocator {unsigned int used_space; struct linked_page* chain; int safe_needed; int gfp_mask; } ;


 unsigned int VAR_0 ;
 struct linked_page* FUNC_0 (int ,int ) ;

__attribute__((used)) static void *FUNC_1(struct chain_allocator *VAR_1, unsigned int VAR_2)
{
 void *VAR_3;

 if (VAR_0 - VAR_1->used_space < VAR_2) {
  struct linked_page *VAR_4;

  VAR_4 = FUNC_0(VAR_1->gfp_mask, VAR_1->safe_needed);
  if (!VAR_4)
   return ((void*)0);

  VAR_4->next = VAR_1->chain;
  VAR_1->chain = VAR_4;
  VAR_1->used_space = 0;
 }
 VAR_3 = VAR_1->chain->data + VAR_1->used_space;
 VAR_1->used_space += VAR_2;
 return VAR_3;
}
