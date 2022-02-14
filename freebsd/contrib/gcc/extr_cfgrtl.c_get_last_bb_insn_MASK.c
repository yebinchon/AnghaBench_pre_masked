
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,scalar_t__*) ;

rtx
FUNC_4 (basic_block VAR_0)
{
  rtx VAR_1;
  rtx VAR_2 = FUNC_1 (VAR_0);


  if (FUNC_3 (VAR_2, ((void*)0), &VAR_1))
    VAR_2 = VAR_1;


  VAR_1 = FUNC_2 (VAR_2);
  while (VAR_1 && FUNC_0 (VAR_1))
    {
      VAR_2 = VAR_1;
      VAR_1 = FUNC_2 (VAR_2);
    }

  return VAR_2;
}
