
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xlp_port_ivars {int block; int port; scalar_t__ hw_parser_en; int mdio_bus; int phy_addr; int type; int node; } ;
struct nlm_xlpge_softc {int block; int port; int base_addr; scalar_t__ hw_parser_en; int nfree_desc; int rxfreeq; int txq; int xlpge_callout; TYPE_1__* network_sc; int prepad_size; int prepad_en; int flowctrl; int link; int duplexity; int speed; TYPE_2__* portcfg; int mdio_bus; int phy_addr; int * xlpge_if; int type; int node; int * mii_bus; int xlpge_dev; } ;
typedef int device_t ;
struct TYPE_6__ {struct nlm_xlpge_softc* xlpge_sc; } ;
struct TYPE_5__ {int rxfreeq; int txq; int num_free_descs; } ;
struct TYPE_4__ {int prepad_size; int prepad_en; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nlm_xlpge_softc*,int ) ;
 int FUNC_1 (int *,int) ;
 struct xlp_port_ivars* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct nlm_xlpge_softc*) ;
 int FUNC_8 (int ,struct nlm_xlpge_softc*) ;
 int FUNC_9 (int ,struct nlm_xlpge_softc*) ;
 int FUNC_10 (struct nlm_xlpge_softc*,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct xlp_port_ivars *VAR_7;
 struct nlm_xlpge_softc *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_5(VAR_6);
 VAR_8->xlpge_dev = VAR_6;
 VAR_8->mii_bus = ((void*)0);
 VAR_8->block = VAR_7->block;
 VAR_8->node = VAR_7->node;
 VAR_8->port = VAR_7->port;
 VAR_8->type = VAR_7->type;
 VAR_8->xlpge_if = ((void*)0);
 VAR_8->phy_addr = VAR_7->phy_addr;
 VAR_8->mdio_bus = VAR_7->mdio_bus;
 VAR_8->portcfg = VAR_5;
 VAR_8->hw_parser_en = VAR_7->hw_parser_en;


 VAR_8->speed = VAR_3;
 VAR_8->duplexity = VAR_2;
 VAR_8->link = VAR_1;
 VAR_8->flowctrl = VAR_0;

 VAR_8->network_sc = FUNC_5(FUNC_4(VAR_6));
 VAR_8->base_addr = VAR_8->network_sc->base;
 VAR_8->prepad_en = VAR_8->network_sc->prepad_en;
 VAR_8->prepad_size = VAR_8->network_sc->prepad_size;

 FUNC_1(&VAR_8->xlpge_callout, 1);

 FUNC_0(VAR_8, FUNC_3(VAR_6));

 VAR_9 = (VAR_8->block*4)+VAR_8->port;
 VAR_8->nfree_desc = VAR_5[VAR_9].num_free_descs;
 VAR_8->txq = VAR_5[VAR_9].txq;
 VAR_8->rxfreeq = VAR_5[VAR_9].rxfreeq;

 FUNC_10(VAR_8, VAR_8->nfree_desc);
 if (VAR_8->hw_parser_en)
  FUNC_6(VAR_8->base_addr,
      VAR_8->block, VAR_8->port);

 FUNC_7(VAR_8);
 VAR_4[VAR_9].xlpge_sc = VAR_8;
 FUNC_8(VAR_6, VAR_8);

 FUNC_9(VAR_6, VAR_8);

 return (0);
}
