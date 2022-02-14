
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_12__ {int exponent; } ;
typedef TYPE_1__ decNumber ;
typedef int decContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*,int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_1__ const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int *) ;

decNumber *
FUNC_4 (decNumber * VAR_1, const decNumber * VAR_2, decContext * VAR_3)
{
  decNumber VAR_4;
  uInt VAR_5 = 0;






  FUNC_2 (&VAR_4);
  VAR_4.exponent = VAR_2->exponent;
  FUNC_0 (VAR_1, &VAR_4, VAR_2, VAR_3, 0, &VAR_5);
  if (VAR_5 != 0)
    FUNC_3 (VAR_1, VAR_5, VAR_3);
  return VAR_1;
}
