
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_address {void* index; void* base; } ;
typedef int block_stmt_iterator ;


 int VAR_0 ;
 void* FUNC_0 (int *,void*,int,int ) ;

__attribute__((used)) static void
FUNC_1 (block_stmt_iterator *VAR_1, struct mem_address *VAR_2)
{
  if (VAR_2->base)
    VAR_2->base = FUNC_0 (VAR_1, VAR_2->base,
         1, VAR_0);
  if (VAR_2->index)
    VAR_2->index = FUNC_0 (VAR_1, VAR_2->index,
          1, VAR_0);
}
