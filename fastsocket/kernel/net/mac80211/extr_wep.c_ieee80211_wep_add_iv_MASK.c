
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_local*,int,int,int *) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int * FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static u8 *FUNC_11(struct ieee80211_local *VAR_4,
    struct sk_buff *VAR_5,
    int VAR_6, int VAR_7)
{
 struct ieee80211_hdr *VAR_8 = (struct ieee80211_hdr *)VAR_5->data;
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_5);
 unsigned int VAR_10;
 u8 *VAR_11;

 VAR_8->frame_control |= FUNC_2(VAR_0);

 if (FUNC_1(FUNC_10(VAR_5) < VAR_2 ||
      FUNC_6(VAR_5) < VAR_3))
  return ((void*)0);

 VAR_10 = FUNC_3(VAR_8->frame_control);
 VAR_11 = FUNC_8(VAR_5, VAR_3);
 FUNC_5(VAR_11, VAR_11 + VAR_3, VAR_10);


 if (VAR_9->control.hw_key &&
     (VAR_9->control.hw_key->flags & VAR_1))
  return VAR_11 + VAR_10;

 FUNC_9(VAR_5, FUNC_7(VAR_5) + VAR_3);
 FUNC_4(VAR_4, VAR_6, VAR_7, VAR_11 + VAR_10);
 return VAR_11 + VAR_10;
}
