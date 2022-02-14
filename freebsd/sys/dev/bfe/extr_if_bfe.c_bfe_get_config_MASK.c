
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct bfe_softc {int* bfe_enaddr; int bfe_phyaddr; int bfe_mdc_port; int bfe_dma_offset; scalar_t__ bfe_core_unit; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfe_softc*,int*) ;

__attribute__((used)) static void
FUNC_1(struct bfe_softc *VAR_1)
{
 u_int8_t VAR_2[128];

 FUNC_0(VAR_1, VAR_2);

 VAR_1->bfe_enaddr[0] = VAR_2[79];
 VAR_1->bfe_enaddr[1] = VAR_2[78];
 VAR_1->bfe_enaddr[2] = VAR_2[81];
 VAR_1->bfe_enaddr[3] = VAR_2[80];
 VAR_1->bfe_enaddr[4] = VAR_2[83];
 VAR_1->bfe_enaddr[5] = VAR_2[82];

 VAR_1->bfe_phyaddr = VAR_2[90] & 0x1f;
 VAR_1->bfe_mdc_port = (VAR_2[90] >> 14) & 0x1;

 VAR_1->bfe_core_unit = 0;
 VAR_1->bfe_dma_offset = VAR_0;
}
