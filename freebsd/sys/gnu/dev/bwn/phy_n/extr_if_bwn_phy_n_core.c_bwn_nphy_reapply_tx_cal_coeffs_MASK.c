
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ center_freq; scalar_t__ channel_type; } ;
struct bwn_phy_n {scalar_t__* txiqlocal_bestc; TYPE_2__ txiqlocal_chanspec; int txiqlocal_coeffsvalid; } ;
struct TYPE_3__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 scalar_t__ FUNC_2 (struct bwn_mac*,int *) ;
 int FUNC_3 (struct bwn_mac*,int ,int,scalar_t__*) ;
 int FUNC_4 (struct bwn_mac*,int ,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct bwn_mac *VAR_0)
{
 struct bwn_phy_n *VAR_1 = VAR_0->mac_phy.phy_n;
 uint8_t VAR_2;
 uint16_t VAR_3[7];
 bool VAR_4 = 1;

 if (!VAR_1->txiqlocal_coeffsvalid ||
     VAR_1->txiqlocal_chanspec.center_freq != FUNC_1(VAR_0) ||
     VAR_1->txiqlocal_chanspec.channel_type != FUNC_2(VAR_0, ((void*)0)))
  return;

 FUNC_3(VAR_0, FUNC_0(15, 80), 7, VAR_3);
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if (VAR_3[VAR_2] != VAR_1->txiqlocal_bestc[VAR_2]) {
   VAR_4 = 0;
   break;
  }
 }

 if (!VAR_4) {
  FUNC_4(VAR_0, FUNC_0(15, 80), 4,
     VAR_1->txiqlocal_bestc);
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
   VAR_3[VAR_2] = 0;
  FUNC_4(VAR_0, FUNC_0(15, 88), 4,
     VAR_3);
  FUNC_4(VAR_0, FUNC_0(15, 85), 2,
     &VAR_1->txiqlocal_bestc[5]);
  FUNC_4(VAR_0, FUNC_0(15, 93), 2,
     &VAR_1->txiqlocal_bestc[5]);
 }
}
