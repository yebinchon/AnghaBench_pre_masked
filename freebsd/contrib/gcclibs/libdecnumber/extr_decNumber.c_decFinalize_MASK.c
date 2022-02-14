
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_12__ {scalar_t__ exponent; scalar_t__ digits; int lsu; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_13__ {scalar_t__ emin; scalar_t__ emax; scalar_t__ digits; int clamp; } ;
typedef TYPE_2__ decContext ;
typedef scalar_t__ Int ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (decNumber * VAR_1, decContext * VAR_2, Int * VAR_3, uInt * VAR_4)
{
  Int VAR_5;







  if (VAR_1->exponent < 0
      && (VAR_1->exponent < VAR_2->emin - VAR_1->digits + 1))
    {

      FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_4);
      return;
    }


  if (*VAR_3 != 0)
    FUNC_1 (VAR_1, VAR_2, *VAR_3, VAR_4);


  if (VAR_1->exponent <= VAR_2->emax - VAR_2->digits + 1)
    return;


  if (VAR_1->exponent > VAR_2->emax - VAR_1->digits + 1)
    {
      FUNC_2 (VAR_1, VAR_2, VAR_4);
      return;
    }

  if (!VAR_2->clamp)
    return;


  VAR_5 = VAR_1->exponent - (VAR_2->emax - VAR_2->digits + 1);


  if (!FUNC_0 (VAR_1))
    {
      VAR_1->digits = FUNC_4 (VAR_1->lsu, VAR_1->digits, VAR_5);
    }
  VAR_1->exponent -= VAR_5;
  *VAR_4 |= VAR_0;
  return;
}
