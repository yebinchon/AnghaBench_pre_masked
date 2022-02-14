
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_2)
{

 if (VAR_2->mac_phy.rev < 2)
  FUNC_0(VAR_2, VAR_1, 0x100);
 else {
  FUNC_0(VAR_2, VAR_1, 0x80);
  FUNC_0(VAR_2, VAR_1, 0x4000);
 }
 FUNC_0(VAR_2, VAR_0, 0x40);
}
