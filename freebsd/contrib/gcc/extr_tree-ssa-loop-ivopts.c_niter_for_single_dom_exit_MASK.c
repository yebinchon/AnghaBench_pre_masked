
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct ivopts_data {int current_loop; } ;
typedef int edge ;


 int * FUNC_0 (struct ivopts_data*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static tree
FUNC_2 (struct ivopts_data *VAR_0)
{
  edge VAR_1 = FUNC_1 (VAR_0->current_loop);

  if (!VAR_1)
    return ((void*)0);

  return FUNC_0 (VAR_0, VAR_1);
}
