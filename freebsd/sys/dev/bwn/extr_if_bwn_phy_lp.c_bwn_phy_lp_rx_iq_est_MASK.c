
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_lp_iq_est {int ie_iqprod; int ie_ipwr; int ie_qpwr; } ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static uint8_t
FUNC_6(struct bwn_mac *VAR_9, uint16_t VAR_10, uint8_t VAR_11,
    struct bwn_phy_lp_iq_est *VAR_12)
{
 int VAR_13;

 FUNC_0(VAR_9, VAR_0, 0xfff7);
 FUNC_4(VAR_9, VAR_6, VAR_10);
 FUNC_3(VAR_9, VAR_3, 0xff00, VAR_11);
 FUNC_0(VAR_9, VAR_3, 0xfeff);
 FUNC_2(VAR_9, VAR_3, 0x200);

 for (VAR_13 = 0; VAR_13 < 500; VAR_13++) {
  if (!(FUNC_1(VAR_9,
      VAR_3) & 0x200))
   break;
  FUNC_5(1000);
 }
 if ((FUNC_1(VAR_9, VAR_3) & 0x200)) {
  FUNC_2(VAR_9, VAR_0, 0x8);
  return 0;
 }

 VAR_12->ie_iqprod = FUNC_1(VAR_9, VAR_1);
 VAR_12->ie_iqprod <<= 16;
 VAR_12->ie_iqprod |= FUNC_1(VAR_9, VAR_2);
 VAR_12->ie_ipwr = FUNC_1(VAR_9, VAR_4);
 VAR_12->ie_ipwr <<= 16;
 VAR_12->ie_ipwr |= FUNC_1(VAR_9, VAR_5);
 VAR_12->ie_qpwr = FUNC_1(VAR_9, VAR_7);
 VAR_12->ie_qpwr <<= 16;
 VAR_12->ie_qpwr |= FUNC_1(VAR_9, VAR_8);

 FUNC_2(VAR_9, VAR_0, 0x8);
 return 1;
}
