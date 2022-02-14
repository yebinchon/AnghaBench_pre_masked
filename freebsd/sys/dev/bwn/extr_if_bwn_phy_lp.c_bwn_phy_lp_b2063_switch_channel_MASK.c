
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;
struct bwn_b206x_chan {scalar_t__ bc_chan; int* bc_data; int bc_freq; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_34 ;
 int FUNC_6 (struct bwn_b206x_chan*) ;
 int FUNC_7 (int ,int ,int*) ;
 struct bwn_b206x_chan* VAR_35 ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int
FUNC_11(struct bwn_mac *VAR_36, uint8_t VAR_37)
{
 static const struct bwn_b206x_chan *VAR_38 = ((void*)0);
 struct bwn_softc *VAR_39 = VAR_36->mac_sc;
 uint32_t VAR_40, VAR_41, VAR_42, VAR_43[3], VAR_44, VAR_45,
     VAR_46[6];
 uint16_t VAR_47, VAR_48, VAR_49;
 u_int VAR_50;
 int VAR_51, VAR_52, VAR_53;

 for (VAR_52 = 0; VAR_52 < FUNC_6(VAR_35); VAR_52++) {
  if (VAR_35[VAR_52].bc_chan == VAR_37) {
   VAR_38 = &VAR_35[VAR_52];
   break;
  }
 }
 if (VAR_38 == ((void*)0))
  return (VAR_34);

 VAR_51 = FUNC_7(VAR_39->sc_dev, VAR_0, &VAR_50);
 if (VAR_51) {
  FUNC_9(VAR_39->sc_dev, "failed to fetch clock frequency: %d",
      VAR_51);
  return (VAR_51);
 }

 FUNC_4(VAR_36, VAR_28, VAR_38->bc_data[0]);
 FUNC_4(VAR_36, VAR_26, VAR_38->bc_data[1]);
 FUNC_4(VAR_36, VAR_25, VAR_38->bc_data[2]);
 FUNC_4(VAR_36, VAR_27, VAR_38->bc_data[3]);
 FUNC_4(VAR_36, VAR_1, VAR_38->bc_data[4]);
 FUNC_4(VAR_36, VAR_2, VAR_38->bc_data[5]);
 FUNC_4(VAR_36, VAR_3, VAR_38->bc_data[6]);
 FUNC_4(VAR_36, VAR_4, VAR_38->bc_data[7]);
 FUNC_4(VAR_36, VAR_5, VAR_38->bc_data[8]);
 FUNC_4(VAR_36, VAR_32, VAR_38->bc_data[9]);
 FUNC_4(VAR_36, VAR_33, VAR_38->bc_data[10]);
 FUNC_4(VAR_36, VAR_29, VAR_38->bc_data[11]);

 VAR_47 = FUNC_1(VAR_36, VAR_6);
 FUNC_2(VAR_36, VAR_6, 0x1e);

 VAR_42 = VAR_38->bc_freq << ((VAR_38->bc_freq > 4000) ? 1 : 2);
 VAR_41 = VAR_50 * 3;
 VAR_53 = (VAR_50 <= 26000000 ? 1 : 2);
 VAR_44 = ((((8 * VAR_50) / (VAR_53 * 5000000)) + 1) >> 1) - 1;
 VAR_45 = ((((8 * VAR_50) / (VAR_53 * (VAR_44 + 1))) +
  999999) / 1000000) + 1;

 FUNC_4(VAR_36, VAR_19, 0x2);
 FUNC_3(VAR_36, VAR_21,
     0xfff8, VAR_44 >> 2);
 FUNC_3(VAR_36, VAR_22,
     0xff9f,VAR_44 << 5);
 FUNC_4(VAR_36, VAR_20, VAR_45);

 VAR_43[0] = FUNC_8(VAR_50, 1000000, 16);
 VAR_43[1] = FUNC_8(VAR_50, 1000000 * VAR_53, 16);
 VAR_43[2] = FUNC_8(VAR_42, 3, 16);

 VAR_40 = (FUNC_8(VAR_43[2], VAR_43[1] + 16, 16) * (VAR_44 + 1) *
     (VAR_45 + 1)) - 1;
 FUNC_3(VAR_36, VAR_22,
     0xf0, VAR_40 >> 8);
 FUNC_4(VAR_36, VAR_23, VAR_40 & 0xff);

 VAR_46[0] = ((VAR_43[2] * 62500) / VAR_41) << 4;
 VAR_46[1] = ((VAR_43[2] * 62500) % VAR_41) << 4;
 while (VAR_46[1] >= VAR_41) {
  VAR_46[0]++;
  VAR_46[1] -= VAR_41;
 }
 FUNC_3(VAR_36, VAR_14, 0xffe0, VAR_46[0] >> 4);
 FUNC_3(VAR_36, VAR_15, 0xfe0f, VAR_46[0] << 4);
 FUNC_3(VAR_36, VAR_15, 0xfff0, VAR_46[0] >> 16);
 FUNC_4(VAR_36, VAR_16, (VAR_46[1] >> 8) & 0xff);
 FUNC_4(VAR_36, VAR_17, VAR_46[1] & 0xff);

 FUNC_4(VAR_36, VAR_10, 0xb9);
 FUNC_4(VAR_36, VAR_11, 0x88);
 FUNC_4(VAR_36, VAR_12, 0x28);
 FUNC_4(VAR_36, VAR_13, 0x63);

 VAR_46[2] = ((41 * (VAR_43[2] - 3000)) /1200) + 27;
 VAR_46[3] = FUNC_8(132000 * VAR_46[0], 8451, 16);

 if (FUNC_10(VAR_46[3], VAR_46[2]) > 60) {
  VAR_48 = 1;
  VAR_46[4] = ((VAR_46[3] + VAR_46[2]) / (VAR_46[2] << 1)) - 8;
 } else {
  VAR_48 = 0;
  VAR_46[4] = ((VAR_46[3] + (VAR_46[2] >> 1)) / VAR_46[2]) - 8;
 }
 FUNC_3(VAR_36, VAR_8, 0xffc0, VAR_46[4]);
 FUNC_3(VAR_36, VAR_8, 0xffbf, VAR_48 << 6);

 VAR_46[5] = FUNC_8(100 * VAR_43[0], VAR_43[2], 16) * (VAR_46[4] * 8) *
     (VAR_48 + 1);
 if (VAR_46[5] > 150)
  VAR_46[5] = 0;

 FUNC_3(VAR_36, VAR_9, 0xffe0, VAR_46[5]);
 FUNC_3(VAR_36, VAR_9, 0xffdf, VAR_48 << 5);

 FUNC_3(VAR_36, VAR_24, 0xfffb, 0x4);
 if (VAR_50 > 26000000)
  FUNC_2(VAR_36, VAR_24, 0x2);
 else
  FUNC_0(VAR_36, VAR_24, 0xfd);

 if (VAR_43[0] == 45)
  FUNC_2(VAR_36, VAR_18, 0x2);
 else
  FUNC_0(VAR_36, VAR_18, 0xfd);

 FUNC_2(VAR_36, VAR_31, 0x3);
 FUNC_5(1);
 FUNC_0(VAR_36, VAR_31, 0xfffc);


 FUNC_0(VAR_36, VAR_30, ~0x40);
 VAR_49 = FUNC_1(VAR_36, VAR_7) & 0xf8;
 FUNC_4(VAR_36, VAR_7, VAR_49);
 FUNC_5(1);
 FUNC_4(VAR_36, VAR_7, VAR_49 | 0x4);
 FUNC_5(1);
 FUNC_4(VAR_36, VAR_7, VAR_49 | 0x6);
 FUNC_5(1);
 FUNC_4(VAR_36, VAR_7, VAR_49 | 0x7);
 FUNC_5(300);
 FUNC_2(VAR_36, VAR_30, 0x40);

 FUNC_4(VAR_36, VAR_6, VAR_47);
 return (0);
}
