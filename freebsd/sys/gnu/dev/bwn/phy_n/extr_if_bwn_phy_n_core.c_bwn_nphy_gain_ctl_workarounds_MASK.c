
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_4(struct bwn_mac *VAR_0)
{
 if (VAR_0->mac_phy.rev >= 19)
  FUNC_0(VAR_0);
 else if (VAR_0->mac_phy.rev >= 7)
  FUNC_3(VAR_0);
 else if (VAR_0->mac_phy.rev >= 3)
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);
}
