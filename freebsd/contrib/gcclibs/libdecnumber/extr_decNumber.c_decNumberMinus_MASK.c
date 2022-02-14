
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
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*,int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,TYPE_1__ const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int *) ;

decNumber *
FUNC_4 (decNumber * VAR_2, const decNumber * VAR_3, decContext * VAR_4)
{
  decNumber VAR_5;
  uInt VAR_6 = 0;






  FUNC_2 (&VAR_5);
  VAR_5.exponent = VAR_3->exponent;
  FUNC_0 (VAR_2, &VAR_5, VAR_3, VAR_4, VAR_0, &VAR_6);
  if (VAR_6 != 0)
    FUNC_3 (VAR_2, VAR_6, VAR_4);
  return VAR_2;
}
