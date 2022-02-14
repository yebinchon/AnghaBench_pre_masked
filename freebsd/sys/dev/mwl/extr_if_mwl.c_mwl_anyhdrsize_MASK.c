
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_frame_bar {int dummy; } ;
struct ieee80211_frame_min {int dummy; } ;
struct ieee80211_frame_ack {int dummy; } ;
struct ieee80211_frame {int* i_fc; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void const*) ;

__attribute__((used)) static __inline int
FUNC_1(const void *VAR_3)
{
 const struct ieee80211_frame *VAR_4 = VAR_3;

 if ((VAR_4->i_fc[0]&VAR_2) == VAR_1) {
  switch (VAR_4->i_fc[0] & VAR_0) {
  case 128:
  case 130:
   return sizeof(struct ieee80211_frame_ack);
  case 129:
   return sizeof(struct mwl_frame_bar);
  }
  return sizeof(struct ieee80211_frame_min);
 } else
  return FUNC_0(VAR_3);
}
