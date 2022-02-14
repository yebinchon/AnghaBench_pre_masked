
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct xlpge_tx_desc {int dummy; } ;
struct xlp_nae_ivars {int blockmask; int nblocks; TYPE_2__* block_ivars; int ieee_1588_en; int prepad_size; int prepad_en; int hw_parser_en; int flow_crc_poly; int freq; int sgmiimask; int xauimask; int ilmask; int node; } ;
struct nlm_xlpnae_softc {int blockmask; int nblocks; int ncontexts; int* portmask; int max_ports; int total_num_ports; int per_port_num_flows; int poe_base; int poedv_base; TYPE_4__* portcfg; int base; int node; scalar_t__ total_free_desc; int * cmplx_type; int nucores; int ieee_1588_en; int prepad_size; int prepad_en; int hw_parser_en; int flow_crc_poly; int freq; int sgmiimask; int xauimask; int ilmask; int xlpnae_dev; } ;
typedef int device_t ;
struct TYPE_13__ {scalar_t__ type; int num_channels; int txq; int rxfreeq; int block; int port; } ;
struct TYPE_12__ {TYPE_1__* nodes; } ;
struct TYPE_11__ {int portmask; int * port_ivars; int type; } ;
struct TYPE_10__ {struct xlp_nae_ivars nae_ivars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int* VAR_7 ;
 int FUNC_2 (int ,char*,int) ;
 struct nlm_xlpnae_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,int ,int ,int ,int,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,TYPE_4__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,TYPE_4__*) ;
 int FUNC_19 (int ,int,TYPE_4__*) ;
 int FUNC_20 (struct nlm_xlpnae_softc*,struct xlp_nae_ivars*,int,int) ;
 int FUNC_21 (int ,int,TYPE_4__*) ;
 int FUNC_22 (int ,int,TYPE_4__*) ;
 int FUNC_23 (int ,int ,int*) ;
 int FUNC_24 (int ,int ,int) ;
 int VAR_10 ;
 int FUNC_25 (int,struct nlm_xlpnae_softc*) ;
 int FUNC_26 (struct nlm_xlpnae_softc*) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int,int,int ,struct nlm_xlpnae_softc*) ;
 int FUNC_30 (char*,char*,int,int) ;
 int FUNC_31 (char*,int,int *,int *,int *,int *,int ,int ) ;
 TYPE_3__ VAR_11 ;

__attribute__((used)) static int
FUNC_32(device_t VAR_12)
{
 struct xlp_nae_ivars *VAR_13;
 struct nlm_xlpnae_softc *VAR_14;
 device_t VAR_15;
 uint32_t VAR_16[VAR_1];
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 uint64_t VAR_29, VAR_30;

 VAR_22 = FUNC_28(VAR_12) / 8;
 VAR_13 = &VAR_11.nodes[VAR_22].nae_ivars;

 VAR_14 = FUNC_3(VAR_12);
 VAR_14->xlpnae_dev = VAR_12;
 VAR_14->node = VAR_13->node;
 VAR_14->base = FUNC_8(VAR_14->node);
 VAR_14->poe_base = FUNC_10(VAR_14->node);
 VAR_14->poedv_base = FUNC_11(VAR_14->node);
 VAR_14->portcfg = VAR_8;
 VAR_14->blockmask = VAR_13->blockmask;
 VAR_14->ilmask = VAR_13->ilmask;
 VAR_14->xauimask = VAR_13->xauimask;
 VAR_14->sgmiimask = VAR_13->sgmiimask;
 VAR_14->nblocks = VAR_13->nblocks;
 VAR_14->freq = VAR_13->freq;


 VAR_14->flow_crc_poly = VAR_13->flow_crc_poly;

 VAR_14->hw_parser_en = VAR_13->hw_parser_en;
 VAR_14->prepad_en = VAR_13->prepad_en;
 VAR_14->prepad_size = VAR_13->prepad_size;
 VAR_14->ieee_1588_en = VAR_13->ieee_1588_en;

 VAR_30 = FUNC_7(VAR_14->node);
 VAR_14->ncontexts = FUNC_17(VAR_30, VAR_6);
 VAR_14->nucores = FUNC_12(VAR_30);

 for (VAR_21 = 0; VAR_21 < VAR_14->nblocks; VAR_21++) {
  VAR_14->cmplx_type[VAR_21] = VAR_13->block_ivars[VAR_21].type;
  VAR_14->portmask[VAR_21] = VAR_13->block_ivars[VAR_21].portmask;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14->ncontexts; VAR_18++)
  VAR_7[VAR_18] = 18;

 if (VAR_14->nblocks == 5)
  VAR_14->max_ports = 18;
 else
  VAR_14->max_ports = VAR_14->nblocks * VAR_3;

 for (VAR_18 = 0; VAR_18 < VAR_14->max_ports; VAR_18++)
  VAR_14->portcfg[VAR_18].type = VAR_4;




 VAR_14->total_free_desc = 0;
 VAR_14->total_num_ports = 0;
 VAR_17 = 0;
 VAR_26 = 0;
 VAR_27 = FUNC_15(VAR_30);
 VAR_28 = VAR_27 + VAR_14->ncontexts;
 for (VAR_18 = 0; VAR_18 < VAR_14->nblocks; VAR_18++) {
  uint32_t VAR_31;

  if ((VAR_13->blockmask & (1 << VAR_18)) == 0) {
   VAR_17 += 4;
   continue;
  }
  VAR_31 = VAR_13->block_ivars[VAR_18].portmask;
  for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++, VAR_17++) {
   if ((VAR_31 & (1 << VAR_19)) == 0)
    continue;
   FUNC_20(VAR_14, VAR_13, VAR_18, VAR_17);
   VAR_20 = VAR_14->portcfg[VAR_17].num_channels;
   for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++)
    VAR_7[VAR_26 + VAR_25] = VAR_17;
   VAR_14->portcfg[VAR_17].txq = VAR_27 + VAR_26;
   VAR_14->portcfg[VAR_17].rxfreeq = VAR_28 + VAR_17;
   VAR_26 += VAR_20;
  }
 }

 VAR_29 = FUNC_9(VAR_14->node);
 VAR_14->per_port_num_flows =
     FUNC_13(VAR_29) / VAR_14->total_num_ports;


 VAR_9 = FUNC_31("NL Tx Desc",
     sizeof(struct xlpge_tx_desc), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);




 VAR_23 = FUNC_15(VAR_30);
 VAR_24 = FUNC_16(VAR_30);
 if (FUNC_29(VAR_23, VAR_23 + VAR_24 - 1,
     VAR_10, VAR_14)) {
  FUNC_27("Couldn't register NAE msgring handler\n");
 }




 VAR_23 = FUNC_15(VAR_29);
 VAR_24 = FUNC_16(VAR_29);
 if (FUNC_29(VAR_23, VAR_23 + VAR_24 - 1,
     VAR_10, VAR_14)) {
  FUNC_27("Couldn't register POE msgring handler\n");
 }

 FUNC_25(VAR_22, VAR_14);

 for (VAR_18 = 0; VAR_18 < VAR_14->max_ports; VAR_18++) {
  char VAR_32[32];
  int VAR_33, VAR_34;

  if (VAR_14->portcfg[VAR_18].type == VAR_4)
   continue;
  VAR_33 = VAR_14->portcfg[VAR_18].block;
  VAR_34 = VAR_14->portcfg[VAR_18].port;
  VAR_15 = FUNC_2(VAR_12, "xlpge", VAR_18);
  FUNC_5(VAR_15,
      &(VAR_13->block_ivars[VAR_33].port_ivars[VAR_34]));
  FUNC_30(VAR_32, "XLP NAE Port %d,%d", VAR_33, VAR_34);
  FUNC_4(VAR_15, VAR_32);
 }
 FUNC_19(VAR_14->base, VAR_14->max_ports, VAR_14->portcfg);
 FUNC_21(VAR_14->base, VAR_14->max_ports, VAR_14->portcfg);
 FUNC_22(VAR_14->base, VAR_14->max_ports, VAR_14->portcfg);
 FUNC_18(VAR_14->base, VAR_14->portcfg);
 FUNC_14(VAR_14->base, VAR_14->max_ports, VAR_14->portcfg);

 FUNC_26(VAR_14);
 FUNC_1(VAR_12);
 FUNC_0(VAR_12);





 FUNC_24(VAR_14->poe_base, VAR_2, 0);
 FUNC_6(0x1, 0, 0, 0, 0x1 << VAR_5, VAR_16);
 FUNC_23(VAR_14->poedv_base, 0, VAR_16);
 FUNC_24(VAR_14->poe_base, VAR_2, 1);

 return (0);
}
