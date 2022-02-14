
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong_t ;
typedef int uint_t ;
struct trapframe {int exc; int srr1; int srr0; int ctr; int xer; int cr; int lr; int * fixreg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

ulong_t
FUNC_1(struct trapframe *VAR_1, uint_t VAR_2)
{
 if (VAR_2 < 32)
  return (VAR_1->fixreg[VAR_2]);

 switch (VAR_2) {
 case 32:
  return (VAR_1->lr);
 case 33:
  return (VAR_1->cr);
 case 34:
  return (VAR_1->xer);
 case 35:
  return (VAR_1->ctr);
 case 36:
  return (VAR_1->srr0);
 case 37:
  return (VAR_1->srr1);
 case 38:
  return (VAR_1->exc);
 default:
  FUNC_0(VAR_0);
  return (0);
 }
}
