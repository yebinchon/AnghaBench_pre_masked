
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vmem_addr_t ;
struct sgx_softc {int vmem_epc; scalar_t__ epc_base; } ;
struct epc_page {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct sgx_softc *VAR_1, struct epc_page *VAR_2)
{
 vmem_addr_t VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = (VAR_2->index * VAR_0) + VAR_1->epc_base;
 FUNC_0(VAR_1->vmem_epc, VAR_3, VAR_0);
}
