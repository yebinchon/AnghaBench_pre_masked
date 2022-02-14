
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef scalar_t__ addressT ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

symbolS *
FUNC_3 (int VAR_0, symbolS *VAR_1, addressT VAR_2)
{
  addressT VAR_3 = 0;

  if (VAR_0)
    {
      VAR_3 = FUNC_2 (VAR_0 - 1);
      if (VAR_3 == (addressT) -1)
 return ((void*)0);
    }
  else

    FUNC_0 (VAR_2, VAR_3);

  FUNC_1 (VAR_1, VAR_2, VAR_3);
  return VAR_1;
}
