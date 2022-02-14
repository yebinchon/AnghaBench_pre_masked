
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uInt ;
typedef int decNumber ;
typedef int decContext ;


 int FUNC_0 (int *,int const*,int const*,int *,int,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__,int *) ;

decNumber *
FUNC_2 (decNumber * VAR_0, const decNumber * VAR_1,
     const decNumber * VAR_2, decContext * VAR_3)
{
  uInt VAR_4 = 0;
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, 1, &VAR_4);
  if (VAR_4 != 0)
    FUNC_1 (VAR_0, VAR_4, VAR_3);
  return VAR_0;
}
