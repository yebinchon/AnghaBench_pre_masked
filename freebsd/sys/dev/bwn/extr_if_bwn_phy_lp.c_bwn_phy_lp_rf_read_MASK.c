
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (int,char*) ;

uint16_t
FUNC_3(struct bwn_mac *VAR_2, uint16_t VAR_3)
{

 FUNC_2(VAR_3 != 1, ("unaccessible register %d", VAR_3));
 if (VAR_2->mac_phy.rev < 2 && VAR_3 != 0x4001)
  VAR_3 |= 0x100;
 if (VAR_2->mac_phy.rev >= 2)
  VAR_3 |= 0x200;
 FUNC_1(VAR_2, VAR_0, VAR_3);
 return FUNC_0(VAR_2, VAR_1);
}
