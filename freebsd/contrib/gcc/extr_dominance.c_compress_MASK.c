
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_info {size_t* set_chain; scalar_t__* key; size_t* path_min; } ;
typedef size_t TBB ;



__attribute__((used)) static void
FUNC_0 (struct dom_info *VAR_0, TBB VAR_1)
{



  TBB VAR_2 = VAR_0->set_chain[VAR_1];
  if (VAR_0->set_chain[VAR_2])
    {
      FUNC_0 (VAR_0, VAR_2);
      if (VAR_0->key[VAR_0->path_min[VAR_2]] < VAR_0->key[VAR_0->path_min[VAR_1]])
 VAR_0->path_min[VAR_1] = VAR_0->path_min[VAR_2];
      VAR_0->set_chain[VAR_1] = VAR_0->set_chain[VAR_2];
    }
}
