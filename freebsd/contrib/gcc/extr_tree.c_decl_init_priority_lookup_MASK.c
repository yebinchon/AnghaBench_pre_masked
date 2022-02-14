
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_int_map {unsigned short to; int from; } ;


 struct tree_int_map* FUNC_0 (int ,struct tree_int_map*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

unsigned short
FUNC_2 (tree VAR_1)
{
  struct tree_int_map *VAR_2, VAR_3;
  VAR_3.from = VAR_1;

  VAR_2 = FUNC_0 (VAR_0,
      &VAR_3, FUNC_1 (VAR_1));
  if (VAR_2)
    return VAR_2->to;
  return 0;
}
