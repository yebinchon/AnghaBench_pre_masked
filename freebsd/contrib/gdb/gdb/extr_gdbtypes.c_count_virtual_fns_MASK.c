
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;

int
FUNC_5 (struct type *VAR_0)
{
  int VAR_1, VAR_2;
  int VAR_3;


  struct type *VAR_4 = FUNC_4 (VAR_0);
  if (VAR_4)
    VAR_3 = FUNC_5 (VAR_4);
  else
    VAR_3 = 0;

  for (VAR_1 = 0; VAR_1 < FUNC_3 (VAR_0); VAR_1++)
    for (VAR_2 = 0; VAR_2 < FUNC_1 (VAR_0, VAR_1); VAR_2++)
      if (FUNC_2 (FUNC_0 (VAR_0, VAR_1), VAR_2))
 VAR_3++;

  return VAR_3;
}
