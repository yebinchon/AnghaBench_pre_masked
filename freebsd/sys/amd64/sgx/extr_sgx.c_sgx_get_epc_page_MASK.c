
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_addr_t ;
struct sgx_softc {int epc_base; struct epc_page* epc_pages; int vmem_epc; } ;
struct epc_page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct sgx_softc *VAR_4, struct epc_page **VAR_5)
{
 vmem_addr_t VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_4->vmem_epc, VAR_3, VAR_1 | VAR_2,
     &VAR_6) == 0) {
  VAR_7 = (VAR_6 - VAR_4->epc_base) / VAR_3;
  *VAR_5 = &VAR_4->epc_pages[VAR_7];
  return (0);
 }

 return (VAR_0);
}
