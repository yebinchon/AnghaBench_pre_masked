
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_typec_phy_softc {int phy_ctrl_id; int grf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct rk_typec_phy_softc *VAR_2, bool VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = FUNC_2(VAR_2->grf, FUNC_1(VAR_2->phy_ctrl_id));
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 VAR_4 |= (VAR_1) << 16;
 FUNC_3(VAR_2->grf, FUNC_1(VAR_2->phy_ctrl_id), VAR_4);


 VAR_4 = FUNC_2(VAR_2->grf, FUNC_0(VAR_2->phy_ctrl_id));
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;

 VAR_4 |= (VAR_0) << 16;
 FUNC_3(VAR_2->grf, FUNC_0(VAR_2->phy_ctrl_id), VAR_4);
}
