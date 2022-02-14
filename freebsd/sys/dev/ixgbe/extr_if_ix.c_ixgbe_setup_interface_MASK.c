
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_mtu; } ;
struct adapter {int media; int hw; int phy_layer; scalar_t__ max_frame_size; } ;
typedef int if_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ifnet*,int ) ;
 struct ifnet* FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_4)
{
 struct ifnet *VAR_5 = FUNC_3(VAR_4);
 struct adapter *VAR_6 = FUNC_4(VAR_4);

 FUNC_1("ixgbe_setup_interface: begin");

 FUNC_2(VAR_5, FUNC_0(10));

 VAR_6->max_frame_size = VAR_5->if_mtu + VAR_1 + VAR_0;

 VAR_6->phy_layer = FUNC_7(&VAR_6->hw);

 FUNC_6(VAR_4);


 FUNC_5(VAR_6->media, VAR_3 | VAR_2);

 return (0);
}
