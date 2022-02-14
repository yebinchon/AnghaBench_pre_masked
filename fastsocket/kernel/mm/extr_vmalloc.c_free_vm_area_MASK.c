
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_struct*) ;
 struct vm_struct* FUNC_2 (int ) ;

void FUNC_3(struct vm_struct *VAR_0)
{
 struct vm_struct *VAR_1;
 VAR_1 = FUNC_2(VAR_0->addr);
 FUNC_0(VAR_1 != VAR_0);
 FUNC_1(VAR_0);
}
