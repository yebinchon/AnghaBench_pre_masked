
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int rsvd1; scalar_t__ rssi_a; scalar_t__ rssi_b; scalar_t__ rssi_c; int nf_c; int nf_b; int nf_a; } ;
struct mwl_node {TYPE_2__ mn_ai; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_mimo_info {TYPE_1__* ch; } ;
typedef int int8_t ;
struct TYPE_3__ {int * noise; int * rssi; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct mwl_node* FUNC_1 (struct ieee80211_node const*) ;

__attribute__((used)) static void
FUNC_2(const struct ieee80211_node *VAR_0,
 struct ieee80211_mimo_info *VAR_1)
{




 static const int8_t VAR_2[32] = {
        0, 0, 24, 38, 48, 56, 62, 68,
       72, 76, 80, 83, 86, 89, 92, 94,
       96, 98, 100, 102, 104, 106, 107, 109,
      110, 112, 113, 115, 116, 117, 118, 119
 };
 const struct mwl_node *VAR_3 = FUNC_1(VAR_0);
 uint8_t VAR_4 = VAR_3->mn_ai.rsvd1/2;
 uint32_t VAR_5;

 VAR_5 = VAR_3->mn_ai.rssi_a;
 if (VAR_3->mn_ai.rssi_b > VAR_5)
  VAR_5 = VAR_3->mn_ai.rssi_b;
 if (VAR_3->mn_ai.rssi_c > VAR_5)
  VAR_5 = VAR_3->mn_ai.rssi_c;

 do { (VAR_1->ch[0].rssi[0]) = VAR_4 + ((VAR_2[VAR_3->mn_ai.rssi_a] - VAR_2[VAR_5]) >> 2); (VAR_1->ch[0].rssi[0]) = (VAR_1->ch[0].rssi[0]) > 64 ? 127 : ((VAR_1->ch[0].rssi[0]) << 1); } while (0);
 do { (VAR_1->ch[1].rssi[0]) = VAR_4 + ((VAR_2[VAR_3->mn_ai.rssi_b] - VAR_2[VAR_5]) >> 2); (VAR_1->ch[1].rssi[0]) = (VAR_1->ch[1].rssi[0]) > 64 ? 127 : ((VAR_1->ch[1].rssi[0]) << 1); } while (0);
 do { (VAR_1->ch[2].rssi[0]) = VAR_4 + ((VAR_2[VAR_3->mn_ai.rssi_c] - VAR_2[VAR_5]) >> 2); (VAR_1->ch[2].rssi[0]) = (VAR_1->ch[2].rssi[0]) > 64 ? 127 : ((VAR_1->ch[2].rssi[0]) << 1); } while (0);

 VAR_1->ch[0].noise[0] = VAR_3->mn_ai.nf_a;
 VAR_1->ch[1].noise[0] = VAR_3->mn_ai.nf_b;
 VAR_1->ch[2].noise[0] = VAR_3->mn_ai.nf_c;

}
