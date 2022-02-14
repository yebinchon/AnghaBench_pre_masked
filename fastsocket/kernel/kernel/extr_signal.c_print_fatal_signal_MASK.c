
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {scalar_t__ ip; } ;
struct TYPE_3__ {int comm; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char,unsigned char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pt_regs*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_1, int VAR_2)
{
 FUNC_3("%s/%d: potentially unexpected fatal signal %d.\n",
  VAR_0->comm, FUNC_5(VAR_0), VAR_2);
 FUNC_3("\n");
 FUNC_1();
 FUNC_4(VAR_1);
 FUNC_2();
}
