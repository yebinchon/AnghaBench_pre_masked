
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bwn_mac *VAR_0)
{
 uint32_t VAR_1 = FUNC_5(FUNC_0(VAR_0), 0);

 if (VAR_0->mac_phy.rev < 2) {
  FUNC_2(VAR_0);
  FUNC_4(VAR_0);
  FUNC_1(VAR_0, VAR_1);
  return;
 }

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
}
