
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ exp; scalar_t__ sig_hi; scalar_t__ sig_lo; scalar_t__ sig; } ;
typedef TYPE_1__ sreal ;



int
FUNC_0 (sreal *VAR_0, sreal *VAR_1)
{
  if (VAR_0->exp > VAR_1->exp)
    return 1;
  if (VAR_0->exp < VAR_1->exp)
    return -1;

  if (VAR_0->sig_hi > VAR_1->sig_hi)
    return 1;
  if (VAR_0->sig_hi < VAR_1->sig_hi)
    return -1;
  if (VAR_0->sig_lo > VAR_1->sig_lo)
    return 1;
  if (VAR_0->sig_lo < VAR_1->sig_lo)
    return -1;






  return 0;
}
