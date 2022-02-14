
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct mem_address {void* base; void* offset; void* index; void* step; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*) ;
 void* FUNC_3 (int ,struct mem_address*) ;
 void* FUNC_4 (int ,int ,void*,void*) ;
 void* FUNC_5 (int ,void*) ;
 int FUNC_6 (void*,struct mem_address*) ;
 int VAR_4 ;

tree
FUNC_7 (tree VAR_5)
{
  struct mem_address VAR_6;
  bool VAR_7 = 0;
  tree VAR_8, VAR_9;

  FUNC_6 (VAR_5, &VAR_6);

  if (VAR_6.base && FUNC_0 (VAR_6.base) == VAR_0)
    {
      if (VAR_6.offset)
 VAR_6.offset = FUNC_4 (VAR_3, VAR_4,
   VAR_6.offset,
   FUNC_5 (VAR_4, VAR_6.base));
      else
 VAR_6.offset = VAR_6.base;

      VAR_6.base = VAR_2;
      VAR_7 = 1;
    }

  if (VAR_6.index && FUNC_0 (VAR_6.index) == VAR_0)
    {
      VAR_9 = VAR_6.index;
      if (VAR_6.step)
 {
   VAR_9 = FUNC_4 (VAR_1, VAR_4,
      VAR_9, VAR_6.step);
   VAR_6.step = VAR_2;
 }

      if (VAR_6.offset)
 {
   VAR_6.offset = FUNC_4 (VAR_3, VAR_4,
       VAR_6.offset, VAR_9);
 }
      else
 VAR_6.offset = VAR_9;

      VAR_6.index = VAR_2;
      VAR_7 = 1;
    }

  if (!VAR_7)
    return VAR_2;

  VAR_8 = FUNC_3 (FUNC_1 (VAR_5), &VAR_6);
  if (!VAR_8)
    return VAR_2;

  FUNC_2 (VAR_8, VAR_5);
  return VAR_8;
}
