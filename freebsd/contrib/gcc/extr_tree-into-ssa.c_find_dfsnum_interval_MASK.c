
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_dfsnum {unsigned int dfs_num; int bb_index; } ;



__attribute__((used)) static unsigned
FUNC_0 (struct dom_dfsnum *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
  unsigned VAR_3 = 0, VAR_4 = VAR_1, VAR_5;

  while (VAR_4 > VAR_3 + 1)
    {
      VAR_5 = (VAR_3 + VAR_4) / 2;
      if (VAR_0[VAR_5].dfs_num <= VAR_2)
 VAR_3 = VAR_5;
      else
 VAR_4 = VAR_5;
    }

  return VAR_0[VAR_3].bb_index;
}
