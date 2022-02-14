
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint64_t ;
struct amdvi_domain {scalar_t__ ptp; } ;


 int FUNC_0 (struct amdvi_domain*,int ,int ,int ,int) ;

__attribute__((used)) static uint64_t
FUNC_1(void *VAR_0, vm_paddr_t VAR_1, uint64_t VAR_2)
{
 struct amdvi_domain *VAR_3;

 VAR_3 = (struct amdvi_domain *)VAR_0;




 if (VAR_3->ptp)
  return (FUNC_0(VAR_3, VAR_1, 0, VAR_2, 0));
 return
     (VAR_2);
}
