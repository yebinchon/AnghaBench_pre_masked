
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_meshlmetric_ie {int lm_flags; int lm_metric; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_node*,int ,int ,struct ieee80211_meshlmetric_ie*) ;
 int FUNC_1 (struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_node *VAR_3,
 const struct ieee80211_frame *VAR_4,
 const uint8_t *VAR_5, const uint8_t *VAR_6)
{
 const struct ieee80211_meshlmetric_ie *VAR_7 =
     (const struct ieee80211_meshlmetric_ie *)
     (VAR_5+2);
 struct ieee80211_meshlmetric_ie VAR_8;

 if (VAR_7->lm_flags & VAR_2) {
  VAR_8.lm_flags = 0;
  VAR_8.lm_metric = FUNC_1(VAR_3);
  FUNC_0(VAR_3,
      VAR_0,
      VAR_1,
      &VAR_8);
 }

 return 0;
}
