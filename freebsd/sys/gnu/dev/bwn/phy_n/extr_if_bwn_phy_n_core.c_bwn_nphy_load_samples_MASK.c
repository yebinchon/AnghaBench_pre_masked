
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy_n {scalar_t__ hang_avoid; } ;
struct TYPE_2__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {int mac_sc; TYPE_1__ mac_phy; } ;
struct bwn_c32 {int i; int q; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bwn_mac*,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int*) ;
 int FUNC_4 (int*,int ) ;
 int* FUNC_5 (int,int ,int) ;

__attribute__((used)) static int FUNC_6(struct bwn_mac *VAR_4,
     struct bwn_c32 *VAR_5, uint16_t VAR_6) {
 struct bwn_phy_n *VAR_7 = VAR_4->mac_phy.phy_n;
 uint16_t VAR_8;
 uint32_t *VAR_9;

 VAR_9 = FUNC_5(VAR_6 * sizeof(uint32_t), VAR_1, VAR_2 | VAR_3);
 if (!VAR_9) {
  FUNC_0(VAR_4->mac_sc, "allocation for samples loading failed\n");
  return -VAR_0;
 }
 if (VAR_7->hang_avoid)
  FUNC_2(VAR_4, 1);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9[VAR_8] = (VAR_5[VAR_8].i & 0x3FF << 10);
  VAR_9[VAR_8] |= VAR_5[VAR_8].q & 0x3FF;
 }
 FUNC_3(VAR_4, FUNC_1(17, 0), VAR_6, VAR_9);

 FUNC_4(VAR_9, VAR_1);
 if (VAR_7->hang_avoid)
  FUNC_2(VAR_4, 0);
 return 0;
}
