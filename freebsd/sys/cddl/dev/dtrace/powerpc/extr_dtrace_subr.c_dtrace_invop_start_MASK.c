
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int srr0; int lr; int * fixreg; int ctr; } ;






 int FUNC_0 (int ,struct trapframe*,int ) ;

__attribute__((used)) static int
FUNC_1(struct trapframe *VAR_0)
{

 switch (FUNC_0(VAR_0->srr0, VAR_0, VAR_0->fixreg[3])) {
 case 129:
  break;
 case 131:
  VAR_0->srr0 = VAR_0->ctr;
  break;
 case 130:
  VAR_0->srr0 = VAR_0->lr;
  break;
 case 128:
  VAR_0->fixreg[0] = VAR_0->lr;
  VAR_0->srr0 = VAR_0->srr0 + 4;
  break;
 default:
  return (-1);
 }
 return (0);
}
