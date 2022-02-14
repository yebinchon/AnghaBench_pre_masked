
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge_list {int dummy; } ;
typedef scalar_t__ basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct edge_list*,int) ;
 scalar_t__ FUNC_1 (struct edge_list*,int) ;
 int FUNC_2 (struct edge_list*) ;

int
FUNC_3 (struct edge_list *VAR_1, basic_block VAR_2, basic_block VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_1); VAR_4++)
    if (FUNC_0 (VAR_1, VAR_4) == VAR_2
 && FUNC_1 (VAR_1, VAR_4) == VAR_3)
      return VAR_4;

  return (VAR_0);
}
