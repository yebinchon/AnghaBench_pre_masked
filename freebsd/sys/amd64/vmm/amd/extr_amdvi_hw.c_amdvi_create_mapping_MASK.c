
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint64_t ;
struct amdvi_domain {scalar_t__ ptp; scalar_t__ id; } ;


 int FUNC_0 (struct amdvi_domain*,int ,int ,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static uint64_t
FUNC_2(void *VAR_0, vm_paddr_t VAR_1, vm_paddr_t VAR_2,
    uint64_t VAR_3)
{
 struct amdvi_domain *VAR_4;

 VAR_4 = (struct amdvi_domain *)VAR_0;

 if (VAR_4->id && !VAR_4->ptp) {
  FUNC_1("ptp is NULL");
  return (-1);
 }





 if (VAR_4->ptp)
  return (FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3, 1));
 else
  return (VAR_3);
}
