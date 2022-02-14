
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
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*) ;

__attribute__((used)) static int
FUNC_4(struct bwn_mac *VAR_10)
{

 FUNC_3(VAR_10);
 FUNC_2(VAR_10, VAR_1, 0);
 FUNC_1(VAR_10, VAR_0, 0x38);
 FUNC_2(VAR_10, VAR_6, 0x56);
 FUNC_0(VAR_10, VAR_7, ~0x2);
 FUNC_2(VAR_10, VAR_5, 0);
 FUNC_2(VAR_10, VAR_8, 0x20);
 FUNC_2(VAR_10, VAR_9, 0x40);
 if (VAR_10->mac_phy.rev == 2) {
  FUNC_2(VAR_10, VAR_3, 0xa0);
  FUNC_2(VAR_10, VAR_4, 0xa0);
  FUNC_2(VAR_10, VAR_2, 0x18);
 } else {
  FUNC_2(VAR_10, VAR_3, 0x20);
  FUNC_2(VAR_10, VAR_2, 0x20);
 }

 return (0);
}
