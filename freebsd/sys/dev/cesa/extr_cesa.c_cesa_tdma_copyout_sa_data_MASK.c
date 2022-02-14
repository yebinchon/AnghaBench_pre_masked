
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_tdma_desc {int dummy; } ;
struct cesa_softc {scalar_t__ sc_sram_base_pa; } ;
struct cesa_sa_hdesc {int dummy; } ;
struct cesa_sa_data {int dummy; } ;
struct cesa_request {int cr_csd_paddr; } ;


 struct cesa_tdma_desc* FUNC_0 (struct cesa_softc*,int ,scalar_t__,int) ;

__attribute__((used)) static struct cesa_tdma_desc *
FUNC_1(struct cesa_softc *VAR_0, struct cesa_request *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->cr_csd_paddr, VAR_0->sc_sram_base_pa +
     sizeof(struct cesa_sa_hdesc), sizeof(struct cesa_sa_data)));
}
