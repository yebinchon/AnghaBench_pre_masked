
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_int_map {unsigned short to; int from; } ;


 int VAR_0 ;
 struct tree_int_map* FUNC_0 (int) ;
 void** FUNC_1 (int ,struct tree_int_map*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

void
FUNC_3 (tree VAR_2, unsigned short VAR_3)
{
  struct tree_int_map *VAR_4;
  void **VAR_5;

  VAR_4 = FUNC_0 (sizeof (struct tree_int_map));
  VAR_4->from = VAR_2;
  VAR_4->to = VAR_3;
  VAR_5 = FUNC_1 (VAR_1, VAR_4,
      FUNC_2 (VAR_2), VAR_0);
  *(struct tree_int_map **) VAR_5 = VAR_4;
}
