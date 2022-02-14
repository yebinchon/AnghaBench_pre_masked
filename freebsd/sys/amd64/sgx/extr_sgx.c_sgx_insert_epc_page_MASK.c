
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int vm_page_t ;
typedef int uint64_t ;
struct sgx_enclave {int object; } ;
struct epc_page {int phys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct sgx_enclave *VAR_0,
    struct epc_page *VAR_1, uint64_t VAR_2)
{
 vm_pindex_t VAR_3;
 vm_page_t VAR_4;

 FUNC_2(VAR_0->object);

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_1->phys);

 FUNC_3(VAR_4, VAR_0->object, VAR_3);
}
