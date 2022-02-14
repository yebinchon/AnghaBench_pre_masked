
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct mem_address {void* step; int index; scalar_t__ symbol; void* base; void* offset; } ;
struct affine_tree_combination {int dummy; } ;
typedef int block_stmt_iterator ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (struct affine_tree_combination*,struct mem_address*) ;
 void* FUNC_2 (scalar_t__,int ) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void*,struct mem_address*) ;
 int VAR_3 ;
 int FUNC_5 (int ,void*,void*,void*) ;
 void* FUNC_6 (void*,void*) ;
 void* FUNC_7 (int *,int ,int,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,struct mem_address*) ;
 scalar_t__ FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*) ;
 void* VAR_4 ;

tree
FUNC_13 (block_stmt_iterator *VAR_5, tree VAR_6,
  struct affine_tree_combination *VAR_7)
{
  tree VAR_8, VAR_9;
  tree VAR_10 = FUNC_3 (VAR_6), VAR_11;
  struct mem_address VAR_12;

  FUNC_1 (VAR_7, &VAR_12);
  FUNC_10 (VAR_5, &VAR_12);
  VAR_8 = FUNC_4 (VAR_6, &VAR_12);
  if (VAR_8)
    return VAR_8;



  if (VAR_12.step && !FUNC_11 (VAR_12.step))
    {

      FUNC_8 (VAR_12.index);
      VAR_12.index = FUNC_7 (VAR_5,
    FUNC_5 (VAR_0, VAR_4,
          VAR_12.index, VAR_12.step),
    1, VAR_1);
      VAR_12.step = VAR_1;

      VAR_8 = FUNC_4 (VAR_6, &VAR_12);
      if (VAR_8)
 return VAR_8;
    }

  if (VAR_12.symbol)
    {
      VAR_9 = FUNC_6 (VAR_10,
     FUNC_2 (VAR_12.symbol, VAR_3));


      if (VAR_12.base)
 {
   if (VAR_12.index)
     VAR_12.base = FUNC_7 (VAR_5,
   FUNC_5 (VAR_2, VAR_10,
         FUNC_6 (VAR_10, VAR_12.base),
         VAR_9),
   1, VAR_1);
   else
     {
       VAR_12.index = VAR_12.base;
       VAR_12.base = VAR_9;
     }
 }
      else
 VAR_12.base = VAR_9;
      VAR_12.symbol = VAR_1;

      VAR_8 = FUNC_4 (VAR_6, &VAR_12);
      if (VAR_8)
 return VAR_8;
    }

  if (VAR_12.index)
    {

      if (VAR_12.base)
 {
   VAR_11 = FUNC_0 (VAR_12.base);
   VAR_12.base = FUNC_7 (VAR_5,
   FUNC_5 (VAR_2, VAR_11,
         VAR_12.base,
             FUNC_6 (VAR_11, VAR_12.index)),
   1, VAR_1);
 }
      else
 VAR_12.base = VAR_12.index;
      VAR_12.index = VAR_1;

      VAR_8 = FUNC_4 (VAR_6, &VAR_12);
      if (VAR_8)
 return VAR_8;
    }

  if (VAR_12.offset && !FUNC_12 (VAR_12.offset))
    {

      if (VAR_12.base)
 {
   VAR_11 = FUNC_0 (VAR_12.base);
   VAR_12.base = FUNC_7 (VAR_5,
   FUNC_5 (VAR_2, VAR_11,
         VAR_12.base,
         FUNC_6 (VAR_11, VAR_12.offset)),
   1, VAR_1);
 }
      else
 VAR_12.base = VAR_12.offset;

      VAR_12.offset = VAR_1;

      VAR_8 = FUNC_4 (VAR_6, &VAR_12);
      if (VAR_8)
 return VAR_8;
    }




  FUNC_8 (VAR_12.symbol == VAR_1);
  FUNC_8 (VAR_12.index == VAR_1);
  FUNC_8 (!VAR_12.step || FUNC_11 (VAR_12.step));
  FUNC_8 (!VAR_12.offset || FUNC_12 (VAR_12.offset));
  FUNC_9 ();
}
