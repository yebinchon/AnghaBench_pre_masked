
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_last_phy_info; } ;
struct iwm_rx_phy_info {int dummy; } ;
struct iwm_rx_packet {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*) ;
 int FUNC_1 (int *,struct iwm_rx_phy_info*,int) ;

__attribute__((used)) static void
FUNC_2(struct iwm_softc *VAR_1, struct iwm_rx_packet *VAR_2)
{
 struct iwm_rx_phy_info *VAR_3 = (void *)VAR_2->data;

 FUNC_0(VAR_1, VAR_0, "received PHY stats\n");

 FUNC_1(&VAR_1->sc_last_phy_info, VAR_3, sizeof(VAR_1->sc_last_phy_info));
}
