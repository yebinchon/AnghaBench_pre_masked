
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_info {scalar_t__* key; size_t* path_min; size_t* set_child; int* set_size; size_t* set_chain; } ;
typedef size_t TBB ;



__attribute__((used)) static void
FUNC_0 (struct dom_info *VAR_0, TBB VAR_1, TBB VAR_2)
{
  TBB VAR_3 = VAR_2;


  while (VAR_0->key[VAR_0->path_min[VAR_2]] < VAR_0->key[VAR_0->path_min[VAR_0->set_child[VAR_3]]])
    {
      if (VAR_0->set_size[VAR_3] + VAR_0->set_size[VAR_0->set_child[VAR_0->set_child[VAR_3]]]
   >= 2 * VAR_0->set_size[VAR_0->set_child[VAR_3]])
 {
   VAR_0->set_chain[VAR_0->set_child[VAR_3]] = VAR_3;
   VAR_0->set_child[VAR_3] = VAR_0->set_child[VAR_0->set_child[VAR_3]];
 }
      else
 {
   VAR_0->set_size[VAR_0->set_child[VAR_3]] = VAR_0->set_size[VAR_3];
   VAR_3 = VAR_0->set_chain[VAR_3] = VAR_0->set_child[VAR_3];
 }
    }

  VAR_0->path_min[VAR_3] = VAR_0->path_min[VAR_2];
  VAR_0->set_size[VAR_1] += VAR_0->set_size[VAR_2];
  if (VAR_0->set_size[VAR_1] < 2 * VAR_0->set_size[VAR_2])
    {
      TBB VAR_4 = VAR_3;
      VAR_3 = VAR_0->set_child[VAR_1];
      VAR_0->set_child[VAR_1] = VAR_4;
    }


  while (VAR_3)
    {
      VAR_0->set_chain[VAR_3] = VAR_1;
      VAR_3 = VAR_0->set_child[VAR_3];
    }
}
