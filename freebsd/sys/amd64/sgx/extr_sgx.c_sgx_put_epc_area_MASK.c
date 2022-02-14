
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgx_softc {int epc_pages; scalar_t__ epc_size; scalar_t__ epc_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct sgx_softc *VAR_1)
{

 FUNC_1(VAR_1->epc_base,
     VAR_1->epc_base + VAR_1->epc_size);

 FUNC_0(VAR_1->epc_pages, VAR_0);
}
