
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy_lp_iq_est {int ie_ipwr; int ie_qpwr; int ie_iqprod; } ;
struct bwn_mac {int dummy; } ;


 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;
 int FUNC_3 (int,int ,int,int) ;
 int FUNC_4 (int,int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bwn_mac*,int,int,struct bwn_phy_lp_iq_est*) ;
 int FUNC_7 (struct bwn_mac*,int) ;

__attribute__((used)) static int
FUNC_8(struct bwn_mac *VAR_1, uint16_t VAR_2)
{
 struct bwn_phy_lp_iq_est VAR_3;
 uint16_t VAR_4, VAR_5;
 int VAR_6[2], VAR_7;

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 VAR_4 = VAR_5 >> 8;
 VAR_5 |= 0xff;

 FUNC_2(VAR_1, VAR_0, 0xff00, 0x00c0);
 FUNC_0(VAR_1, VAR_0, 0x00ff);

 VAR_7 = FUNC_6(VAR_1, VAR_2, 32, &VAR_3);
 if (VAR_7 == 0)
  goto done;

 if (VAR_3.ie_ipwr + VAR_3.ie_qpwr < 2) {
  VAR_7 = 0;
  goto done;
 }

 do { int VAR_8; VAR_8 = FUNC_5(VAR_3.ie_iqprod) - 20; if (VAR_8 >= 0) { VAR_6[0] = ((VAR_3.ie_iqprod << (30 - FUNC_5(VAR_3.ie_iqprod))) + (VAR_3.ie_ipwr >> (1 + VAR_8))) / (VAR_3.ie_ipwr >> VAR_8); } else { VAR_6[0] = ((VAR_3.ie_iqprod << (30 - FUNC_5(VAR_3.ie_iqprod))) + (VAR_3.ie_ipwr << (-1 - VAR_8))) / (VAR_3.ie_ipwr << -VAR_8); } } while (0);
 do { int VAR_9; VAR_9 = FUNC_5(VAR_3.ie_qpwr) - 11; if (VAR_9 >= 0) VAR_6[1] = (VAR_3.ie_qpwr << (31 - FUNC_5(VAR_3.ie_qpwr))) / (VAR_3.ie_ipwr >> VAR_9); else VAR_6[1] = (VAR_3.ie_qpwr << (31 - FUNC_5(VAR_3.ie_qpwr))) / (VAR_3.ie_ipwr << -VAR_9); } while (0);

 VAR_6[1] = -FUNC_7(VAR_1, VAR_6[1] - (VAR_6[0] * VAR_6[0]));
 VAR_4 = VAR_6[0] >> 3;
 VAR_5 = VAR_6[1] >> 4;
done:
 FUNC_2(VAR_1, VAR_0, 0xff00, VAR_5);
 FUNC_2(VAR_1, VAR_0, 0x00ff, VAR_4 << 8);
 return VAR_7;


}
