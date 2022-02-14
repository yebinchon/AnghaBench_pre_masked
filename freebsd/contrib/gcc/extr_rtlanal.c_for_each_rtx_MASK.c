
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* rtx_function ) (scalar_t__*,void*) ;
typedef scalar_t__ rtx ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int,int (*) (scalar_t__*,void*),void*) ;
 int* VAR_1 ;
 int FUNC_2 (scalar_t__*,void*) ;

int
FUNC_3 (rtx *VAR_2, rtx_function VAR_3, void *VAR_4)
{
  int VAR_5;
  int VAR_6;


  VAR_5 = (*VAR_3) (VAR_2, VAR_4);
  if (VAR_5 == -1)

    return 0;
  else if (VAR_5 != 0)

    return VAR_5;

  if (*VAR_2 == VAR_0)

    return 0;

  VAR_6 = VAR_1[FUNC_0 (*VAR_2)];
  if (VAR_6 < 0)
    return 0;

  return FUNC_1 (*VAR_2, VAR_6, VAR_3, VAR_4);
}
