
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int digits; scalar_t__* lsu; scalar_t__ exponent; scalar_t__ bits; } ;
typedef TYPE_1__ decNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int ) ;

decNumber *
FUNC_1 (decNumber * VAR_1)
{






  VAR_1->bits = 0;
  VAR_1->exponent = 0;
  VAR_1->digits = 1;
  VAR_1->lsu[0] = 0;
  return VAR_1;
}
