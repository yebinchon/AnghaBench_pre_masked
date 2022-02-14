
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int ,int ) ;
 int FUNC_4 (struct bwn_mac*,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct bwn_mac *VAR_10, bool VAR_11)
{
 int VAR_12;

 if (VAR_10->mac_phy.rev >= 7)
  return (0);

 if (VAR_10->mac_phy.rev >= 3) {
  if (!VAR_11)
   return (0);
  if (0 ) {
   FUNC_5(VAR_10, FUNC_0(9, 2), 0x211);
   FUNC_5(VAR_10, FUNC_0(9, 3), 0x222);
   FUNC_5(VAR_10, FUNC_0(9, 8), 0x144);
   FUNC_5(VAR_10, FUNC_0(9, 12), 0x188);
  }
 } else {
  FUNC_1(VAR_10, VAR_5, 0);
  FUNC_1(VAR_10, VAR_4, 0);

  if ((VAR_12 = FUNC_4(VAR_10, 0xfc00)))
   return (VAR_12);

  FUNC_3(VAR_10, VAR_2, ~VAR_3, 0);
  FUNC_2(VAR_10, VAR_1, ~0, 0xFC00);
  FUNC_2(VAR_10, VAR_0, (~0xFC00 & 0xFFFF),
         0);

  if (VAR_11) {
   FUNC_1(VAR_10, VAR_6, 0x2D8);
   FUNC_1(VAR_10, VAR_8, 0x301);
   FUNC_1(VAR_10, VAR_7, 0x2D8);
   FUNC_1(VAR_10, VAR_9, 0x301);
  }
 }

 return (0);
}
