
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 struct type* FUNC_0 (int *,struct type*,struct type*) ;
 struct type* FUNC_1 (int *,int ,int ,int ) ;

struct type *
FUNC_2 (struct type *VAR_1, int VAR_2)
{
  struct type *VAR_3;

  while (VAR_2-- > 0)
    {
      VAR_3 = FUNC_1 (((void*)0), VAR_0, 0, 0);

      VAR_1 = FUNC_0 (((void*)0), VAR_1, VAR_3);
    }

  return VAR_1;
}
