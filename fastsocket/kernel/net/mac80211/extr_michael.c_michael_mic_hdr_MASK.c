
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct michael_mic_ctx {int l; int r; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int const*) ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 int* FUNC_3 (struct ieee80211_hdr*) ;
 int* FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct michael_mic_ctx*,int) ;

__attribute__((used)) static void FUNC_7(struct michael_mic_ctx *VAR_1, const u8 *VAR_2,
       struct ieee80211_hdr *VAR_3)
{
 u8 *VAR_4, *VAR_5, VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_5(VAR_3->frame_control))
  VAR_6 = *FUNC_4(VAR_3) & VAR_0;
 else
  VAR_6 = 0;

 VAR_1->l = FUNC_1(VAR_2);
 VAR_1->r = FUNC_1(VAR_2 + 4);





 FUNC_6(VAR_1, FUNC_1(VAR_4));
 FUNC_6(VAR_1, FUNC_0(&VAR_4[4]) |
       (FUNC_0(VAR_5) << 16));
 FUNC_6(VAR_1, FUNC_1(&VAR_5[2]));
 FUNC_6(VAR_1, VAR_6);
}
