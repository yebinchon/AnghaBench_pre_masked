
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nlm_xlpnae_softc {int nucores; int sgmiimask; int xauimask; int portcfg; int base; scalar_t__ ieee_1588_en; int prepad_size; scalar_t__ prepad_en; scalar_t__ hw_parser_en; int poedv_base; int poe_base; int max_ports; int flow_crc_poly; int ncontexts; int freq; int nblocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct nlm_xlpnae_softc*) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int,int) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int ,int) ;
 int VAR_5 ;
 int FUNC_21 (char*,int) ;

__attribute__((used)) static void
FUNC_22(int VAR_6, struct nlm_xlpnae_softc *VAR_7)
{
 uint64_t VAR_8;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10;
 int VAR_11;

 VAR_8 = VAR_7->base;

 FUNC_5(VAR_8, VAR_7->nblocks);
 FUNC_1(VAR_8, VAR_7->max_ports);
 FUNC_8(VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_7->nucores; VAR_11++)
  VAR_9 |= (0x1 << VAR_11);
 FUNC_21("Loading 0x%x ucores with microcode\n", VAR_9);
 FUNC_18(VAR_8, VAR_9, 1);

 VAR_10 = FUNC_9(VAR_6, VAR_0, VAR_7->freq);
 FUNC_21("Setup NAE frequency to %dMHz\n", VAR_10);

 FUNC_4(VAR_8);

 FUNC_21("Initialze SGMII PCS for blocks 0x%x\n", VAR_7->sgmiimask);
 FUNC_17(VAR_8, VAR_7->sgmiimask);

 FUNC_21("Initialze XAUI PCS for blocks 0x%x\n", VAR_7->xauimask);
 FUNC_20(VAR_8, VAR_7->xauimask);


 FUNC_19(VAR_8, VAR_2, 0x0);


 VAR_10 = FUNC_7(VAR_8, VAR_3);
 VAR_10 &= 0xfffffffe;
 FUNC_19(VAR_8, VAR_3, VAR_10);

 if (FUNC_3() == 0) {
  VAR_10 = FUNC_7(VAR_8, VAR_4);
  VAR_10 &= ~(1 << 3);
  FUNC_19(VAR_8, VAR_4, VAR_10);
 }

 FUNC_13(VAR_8, VAR_1,
     VAR_7->ncontexts, VAR_5);

 FUNC_16(VAR_8);

 FUNC_11(VAR_8, VAR_7->flow_crc_poly);

 FUNC_14(VAR_8, VAR_7->max_ports, VAR_7->portcfg);

 if (!FUNC_3())
  FUNC_15(VAR_8, VAR_7->max_ports, VAR_7->portcfg);

 FUNC_12(VAR_7);
 FUNC_0(VAR_7->poe_base, VAR_7->poedv_base);

 if (VAR_7->hw_parser_en)
  FUNC_2(VAR_8);

 if (VAR_7->prepad_en)
  FUNC_6(VAR_8, VAR_7->prepad_size);

 if (VAR_7->ieee_1588_en)
  FUNC_10(VAR_7->base, VAR_7->portcfg);
}
