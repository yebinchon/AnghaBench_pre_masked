
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chain_allocator {int safe_needed; int gfp_mask; int used_space; int * chain; } ;
typedef int gfp_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct chain_allocator *VAR_1, gfp_t VAR_2, int VAR_3)
{
 VAR_1->chain = ((void*)0);
 VAR_1->used_space = VAR_0;
 VAR_1->gfp_mask = VAR_2;
 VAR_1->safe_needed = VAR_3;
}
