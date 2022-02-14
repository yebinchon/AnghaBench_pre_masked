
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct bwn_softc {int sc_dev; } ;
struct bwn_phy_lp {int plp_div; } ;
struct TYPE_2__ {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;
struct bwn_b206x_chan {scalar_t__ bc_chan; int* bc_data; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct bwn_b206x_chan*) ;
 int FUNC_5 (int ,int ,int*) ;
 struct bwn_b206x_chan* VAR_23 ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_10(struct bwn_mac *VAR_24, uint8_t VAR_25)
{
 struct bwn_softc *VAR_26 = VAR_24->mac_sc;
 struct bwn_phy_lp *VAR_27 = &VAR_24->mac_phy.phy_lp;
 const struct bwn_b206x_chan *VAR_28 = ((void*)0);
 uint32_t VAR_29[9];
 u_int VAR_30;
 int VAR_31, VAR_32;

 for (VAR_32 = 0; VAR_32 < FUNC_4(VAR_23); VAR_32++) {
  if (VAR_23[VAR_32].bc_chan == VAR_25) {
   VAR_28 = &VAR_23[VAR_32];
   break;
  }
 }

 if (VAR_28 == ((void*)0))
  return (VAR_21);

 VAR_31 = FUNC_5(VAR_26->sc_dev, VAR_0, &VAR_30);
 if (VAR_31) {
  FUNC_8(VAR_26->sc_dev, "failed to fetch clock frequency: %d",
      VAR_31);
  return (VAR_31);
 }

 FUNC_2(VAR_24, VAR_10, 0x04);
 FUNC_3(VAR_24, VAR_3, VAR_28->bc_data[0]);
 FUNC_3(VAR_24, VAR_4, VAR_28->bc_data[1]);
 FUNC_3(VAR_24, VAR_5, VAR_28->bc_data[2]);
 FUNC_3(VAR_24, VAR_8, VAR_28->bc_data[3]);
 FUNC_3(VAR_24, VAR_9, VAR_28->bc_data[4]);
 FUNC_3(VAR_24, VAR_1, VAR_28->bc_data[5]);
 FUNC_3(VAR_24, VAR_2, VAR_28->bc_data[6]);
 FUNC_3(VAR_24, VAR_7, VAR_28->bc_data[7]);
 FUNC_3(VAR_24, VAR_6, VAR_28->bc_data[8]);

 FUNC_3(VAR_24, VAR_19, 0xcc);
 FUNC_3(VAR_24, VAR_20, 0x07);
 FUNC_6(VAR_24);
 VAR_29[0] = VAR_30 / 1000;
 VAR_29[1] = VAR_27->plp_div * 1000;
 VAR_29[2] = VAR_29[1] * FUNC_9(VAR_25, 0);
 if (FUNC_9(VAR_25, 0) < 4000)
  VAR_29[2] *= 2;
 VAR_29[3] = 48 * VAR_29[0];
 VAR_29[5] = VAR_29[2] / VAR_29[3];
 VAR_29[6] = VAR_29[2] % VAR_29[3];
 FUNC_3(VAR_24, VAR_14, VAR_29[5]);
 VAR_29[4] = VAR_29[6] * 0x100;
 VAR_29[5] = VAR_29[4] / VAR_29[3];
 VAR_29[6] = VAR_29[4] % VAR_29[3];
 FUNC_3(VAR_24, VAR_15, VAR_29[5]);
 VAR_29[4] = VAR_29[6] * 0x100;
 VAR_29[5] = VAR_29[4] / VAR_29[3];
 VAR_29[6] = VAR_29[4] % VAR_29[3];
 FUNC_3(VAR_24, VAR_16, VAR_29[5]);
 VAR_29[4] = VAR_29[6] * 0x100;
 VAR_29[5] = VAR_29[4] / VAR_29[3];
 VAR_29[6] = VAR_29[4] % VAR_29[3];
 FUNC_3(VAR_24, VAR_17,
     VAR_29[5] + ((2 * VAR_29[6]) / VAR_29[3]));
 VAR_29[7] = FUNC_1(VAR_24, VAR_11);
 VAR_29[8] = ((2 * VAR_29[2] * (VAR_29[7] + 1)) + (3 * VAR_29[0])) / (6 * VAR_29[0]);
 FUNC_3(VAR_24, VAR_12, (VAR_29[8] >> 8) + 16);
 FUNC_3(VAR_24, VAR_13, VAR_29[8] & 0xff);

 FUNC_7(VAR_24);
 if (FUNC_1(VAR_24, VAR_18) & 0x10) {
  FUNC_3(VAR_24, VAR_19, 0xfc);
  FUNC_3(VAR_24, VAR_20, 0);
  FUNC_6(VAR_24);
  FUNC_7(VAR_24);
  if (FUNC_1(VAR_24, VAR_18) & 0x10) {
   FUNC_0(VAR_24, VAR_10, ~0x04);
   return (VAR_22);
  }
 }
 FUNC_0(VAR_24, VAR_10, ~0x04);
 return (0);
}
