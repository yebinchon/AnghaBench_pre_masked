
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uvm_physseg_t ;
struct vm_page {int dummy; } ;
typedef int paddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct vm_page* FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static struct vm_page *
FUNC_3(paddr_t VAR_1)
{
 paddr_t VAR_2 = FUNC_0(VAR_1);
 paddr_t VAR_3;
 uvm_physseg_t VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_4 != VAR_0)
  return FUNC_2(VAR_4, VAR_3);
 return(((void*)0));
}
