
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exp; int sig; int sig_hi; int sig_lo; } ;
typedef TYPE_1__ sreal ;



__attribute__((used)) static inline void
FUNC_0 (sreal *VAR_0, sreal *VAR_1)
{

  VAR_0->sig_lo = VAR_1->sig_lo;
  VAR_0->sig_hi = VAR_1->sig_hi;



  VAR_0->exp = VAR_1->exp;
}
