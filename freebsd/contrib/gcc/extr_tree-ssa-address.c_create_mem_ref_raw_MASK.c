
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct mem_address {void* offset; void* step; int index; int base; int symbol; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,void*,int ,int ,int ,void*,void*,int *,int *) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ,struct mem_address*) ;
 scalar_t__ FUNC_4 (void*) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_2, struct mem_address *VAR_3)
{
  if (!FUNC_3 (FUNC_0 (VAR_2), VAR_3))
    return VAR_0;

  if (VAR_3->step && FUNC_2 (VAR_3->step))
    VAR_3->step = VAR_0;

  if (VAR_3->offset && FUNC_4 (VAR_3->offset))
    VAR_3->offset = VAR_0;

  return FUNC_1 (VAR_1, VAR_2,
   VAR_3->symbol, VAR_3->base, VAR_3->index,
   VAR_3->step, VAR_3->offset, ((void*)0), ((void*)0));
}
