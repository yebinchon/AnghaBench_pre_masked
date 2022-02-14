
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_phy_n {int txrx_chain; } ;
struct TYPE_2__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct bwn_mac *VAR_5)
{
 struct bwn_phy_n *VAR_6 = VAR_5->mac_phy.phy_n;

 bool VAR_7 = 0;
 uint16_t VAR_8 = 0x33;

 if (VAR_6->txrx_chain == 0) {
  VAR_8 = 0x11;
  VAR_7 = 1;
 } else if (VAR_6->txrx_chain == 1) {
  VAR_8 = 0x22;
  VAR_7 = 1;
 }

 FUNC_2(VAR_5, VAR_0,
   ~(VAR_2 | VAR_1),
   VAR_8);

 if (VAR_7)
  FUNC_1(VAR_5, VAR_3,
    VAR_4);
 else
  FUNC_0(VAR_5, VAR_3,
    ~VAR_4);
}
