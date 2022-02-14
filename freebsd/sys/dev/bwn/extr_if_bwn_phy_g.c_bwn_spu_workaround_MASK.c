
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int rf_ver; int rf_rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_1, uint8_t VAR_2)
{

 if (VAR_1->mac_phy.rf_ver != 0x2050 || VAR_1->mac_phy.rf_rev >= 6)
  return;
 FUNC_0(VAR_1, VAR_0, (VAR_2 <= 10) ?
     FUNC_2(VAR_2 + 4) : FUNC_2(1));
 FUNC_1(1000);
 FUNC_0(VAR_1, VAR_0, FUNC_2(VAR_2));
}
