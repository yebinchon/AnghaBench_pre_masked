
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int dummy; } ;


 int FUNC_0 (struct vm_struct*) ;
 int FUNC_1 (struct vm_struct**) ;

void FUNC_2(struct vm_struct **VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2]);
 FUNC_1(VAR_0);
}
