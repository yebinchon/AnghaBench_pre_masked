
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_tdma_desc {int dummy; } ;
struct cesa_softc {int sc_sram_base_pa; } ;
struct cesa_sa_hdesc {int dummy; } ;
struct cesa_sa_desc {int csd_cshd_paddr; } ;


 struct cesa_tdma_desc* FUNC_0 (struct cesa_softc*,int ,int ,int) ;

__attribute__((used)) static struct cesa_tdma_desc *
FUNC_1(struct cesa_softc *VAR_0, struct cesa_sa_desc *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_0->sc_sram_base_pa, VAR_1->csd_cshd_paddr,
     sizeof(struct cesa_sa_hdesc)));
}
