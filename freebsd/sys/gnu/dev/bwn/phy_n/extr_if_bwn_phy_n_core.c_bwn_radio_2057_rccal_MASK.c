
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int rf_rev; } ;
struct bwn_mac {int mac_sc; struct bwn_phy mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct bwn_mac*,int ,int,int,int,int) ;

__attribute__((used)) static uint16_t FUNC_7(struct bwn_mac *VAR_6)
{
 struct bwn_phy *VAR_7 = &VAR_6->mac_phy;
 bool VAR_8 = (VAR_7->rf_rev == 3 || VAR_7->rf_rev == 4 ||
   VAR_7->rf_rev == 6);
 uint16_t VAR_9;


 if (VAR_8) {
  FUNC_4(VAR_6, VAR_1, 0x61);
  FUNC_4(VAR_6, VAR_3, 0xC0);
 } else {
  FUNC_4(VAR_6, VAR_5, 0x61);
  FUNC_4(VAR_6, VAR_3, 0xE9);
 }
 FUNC_4(VAR_6, VAR_4, 0x6E);


 FUNC_4(VAR_6, VAR_2, 0x55);
 if (!FUNC_6(VAR_6, VAR_0, 2, 2, 500,
      5000000))
  FUNC_0(VAR_6, "Radio 0x2057 rccal timeout\n");

 FUNC_5(70);
 FUNC_4(VAR_6, VAR_2, 0x15);

 FUNC_5(140);


 if (VAR_8) {
  FUNC_4(VAR_6, VAR_1, 0x69);
  FUNC_4(VAR_6, VAR_3, 0xB0);
 } else {
  FUNC_4(VAR_6, VAR_5, 0x69);
  FUNC_4(VAR_6, VAR_3, 0xD5);
 }
 FUNC_4(VAR_6, VAR_4, 0x6E);



 FUNC_5(70);
 FUNC_4(VAR_6, VAR_2, 0x55);

 FUNC_5(140);
 if (!FUNC_6(VAR_6, VAR_0, 2, 2, 500,
      5000000))
  FUNC_0(VAR_6, "Radio 0x2057 rccal timeout\n");

 FUNC_5(70);
 FUNC_4(VAR_6, VAR_2, 0x15);

 FUNC_5(140);


 if (VAR_8) {
  FUNC_4(VAR_6, VAR_1, 0x73);
  FUNC_4(VAR_6, VAR_4, 0x28);
  FUNC_4(VAR_6, VAR_3, 0xB0);
 } else {
  FUNC_4(VAR_6, VAR_5, 0x73);
  FUNC_4(VAR_6, VAR_4, 0x6E);
  FUNC_4(VAR_6, VAR_3, 0x99);
 }



 FUNC_5(70);
 FUNC_4(VAR_6, VAR_2, 0x55);

 FUNC_5(140);
 if (!FUNC_6(VAR_6, VAR_0, 2, 2, 500,
      5000000)) {
  FUNC_1(VAR_6->mac_sc, "Radio 0x2057 rcal timeout\n");
  return 0;
 }
 VAR_9 = FUNC_3(VAR_6, VAR_0);

 FUNC_5(70);
 FUNC_4(VAR_6, VAR_2, 0x15);

 FUNC_5(140);

 if (VAR_8)
  FUNC_2(VAR_6, VAR_1, ~0x1);
 else
  FUNC_2(VAR_6, VAR_5, ~0x1);

 return VAR_9;
}
