
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mem_address {void* symbol; void* offset; void* step; void* index; void* base; } ;
struct affine_tree_combination {int offset; unsigned int n; int* coefs; scalar_t__ rest; scalar_t__* elts; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct mem_address*,int ) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct mem_address*,struct affine_tree_combination*) ;
 int FUNC_5 (struct mem_address*,struct affine_tree_combination*) ;
 int FUNC_6 (struct mem_address*,struct affine_tree_combination*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7 (struct affine_tree_combination *VAR_3, struct mem_address *VAR_4)
{
  unsigned VAR_5;
  tree VAR_6;

  VAR_4->symbol = VAR_1;
  VAR_4->base = VAR_1;
  VAR_4->index = VAR_1;
  VAR_4->step = VAR_1;

  if (VAR_3->offset)
    VAR_4->offset = FUNC_1 (VAR_2, VAR_3->offset);
  else
    VAR_4->offset = VAR_1;


  FUNC_5 (VAR_4, VAR_3);



  FUNC_4 (VAR_4, VAR_3);




  if (!VAR_4->symbol)
    FUNC_6 (VAR_4, VAR_3);


  for (VAR_5 = 0; VAR_5 < VAR_3->n; VAR_5++)
    {
      VAR_6 = FUNC_3 (VAR_2, VAR_3->elts[VAR_5]);
      if (VAR_3->coefs[VAR_5] != 1)
 VAR_6 = FUNC_2 (VAR_0, VAR_2, VAR_6,
       FUNC_1 (VAR_2, VAR_3->coefs[VAR_5]));
      FUNC_0 (VAR_4, VAR_6);
    }
  if (VAR_3->rest)
    FUNC_0 (VAR_4, FUNC_3 (VAR_2, VAR_3->rest));
}
