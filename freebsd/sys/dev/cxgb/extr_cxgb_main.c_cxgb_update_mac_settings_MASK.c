
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_rx_mode {int dummy; } ;
struct cmac {int dummy; } ;
struct port_info {int tx_chan; int hw_addr; int adapter; struct cmac mac; struct ifnet* ifp; } ;
struct ifnet {int if_mtu; int if_capenable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct port_info*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct t3_rx_mode*,struct port_info*) ;
 int FUNC_4 (struct cmac*,int ,int ) ;
 int FUNC_5 (struct cmac*,int) ;
 int FUNC_6 (struct cmac*,struct t3_rx_mode*) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static void
FUNC_8(struct port_info *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->ifp;
 struct t3_rx_mode VAR_6;
 struct cmac *VAR_7 = &VAR_4->mac;
 int VAR_8, VAR_9;

 FUNC_1(VAR_4);

 FUNC_2(FUNC_0(VAR_5), VAR_4->hw_addr, VAR_0);

 VAR_8 = VAR_5->if_mtu;
 if (VAR_5->if_capenable & VAR_3)
  VAR_8 += VAR_1;

 VAR_9 = (VAR_5->if_capenable & VAR_2) != 0;

 FUNC_5(VAR_7, VAR_8);
 FUNC_7(VAR_4->adapter, 1 << VAR_4->tx_chan, VAR_9);
 FUNC_4(VAR_7, 0, VAR_4->hw_addr);
 FUNC_3(&VAR_6, VAR_4);
 FUNC_6(VAR_7, &VAR_6);
}
