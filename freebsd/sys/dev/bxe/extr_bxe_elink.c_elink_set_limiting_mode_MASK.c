
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int type; } ;
struct elink_params {int sc; } ;






 int FUNC_0 (int ,struct elink_phy*,int ) ;
 int FUNC_1 (int ,struct elink_phy*,int ) ;
 int FUNC_2 (struct elink_params*,struct elink_phy*,int ) ;

__attribute__((used)) static void FUNC_3(struct elink_params *VAR_0,
        struct elink_phy *VAR_1,
        uint16_t VAR_2)
{
 switch (VAR_1->type) {
 case 130:
  FUNC_0(VAR_0->sc, VAR_1, VAR_2);
  break;
 case 129:
 case 131:
  FUNC_1(VAR_0->sc, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 }
}
