
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_3(struct bwn_mac *VAR_2)
{
 uint16_t VAR_3;

 if (VAR_2->mac_phy.rev < 3 || VAR_2->mac_phy.rev >= 7)
  return;

 if (FUNC_2(VAR_2))
  VAR_3 = FUNC_1(VAR_2) ? 5 : 4;
 else
  VAR_3 = FUNC_1(VAR_2) ? 3 : 1;
 FUNC_0(VAR_2, VAR_1,
        (VAR_3 << 9) | (VAR_3 << 6) | (VAR_3 << 3) | VAR_3);

 if (FUNC_2(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2) ? 4 : 1;
  FUNC_0(VAR_2, VAR_0,
         (VAR_3 << 9) | (VAR_3 << 6) | (VAR_3 << 3) | VAR_3);
 }
}
