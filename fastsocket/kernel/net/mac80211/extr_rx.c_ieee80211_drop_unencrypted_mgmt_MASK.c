
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ieee80211_rx_status {int flag; } ;
struct ieee80211_rx_data {TYPE_2__* skb; scalar_t__ key; TYPE_1__* sdata; scalar_t__ sta; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_7__ {scalar_t__ data; int len; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_rx_data *VAR_3)
{
 struct ieee80211_hdr *VAR_4 = (struct ieee80211_hdr *)VAR_3->skb->data;
 struct ieee80211_rx_status *VAR_5 = FUNC_0(VAR_3->skb);
 __le16 VAR_6 = VAR_4->frame_control;





 if (VAR_5->flag & VAR_1)
  return 0;

 if (VAR_3->sta && FUNC_11(VAR_3->sta, VAR_2)) {
  if (FUNC_12(!FUNC_4(VAR_6) &&
        FUNC_10(VAR_3->skb) &&
        VAR_3->key)) {
   if (FUNC_6(VAR_6))
    FUNC_1(VAR_3->sdata->dev,
           VAR_3->skb->data,
           VAR_3->skb->len);
   else if (FUNC_7(VAR_6))
    FUNC_2(VAR_3->sdata->dev,
             VAR_3->skb->data,
             VAR_3->skb->len);
   return -VAR_0;
  }

  if (FUNC_12(FUNC_8(VAR_3->skb) &&
        FUNC_3(VAR_3->skb) < 0)) {
   if (FUNC_6(VAR_6))
    FUNC_1(VAR_3->sdata->dev,
           VAR_3->skb->data,
           VAR_3->skb->len);
   else if (FUNC_7(VAR_6))
    FUNC_2(VAR_3->sdata->dev,
             VAR_3->skb->data,
             VAR_3->skb->len);
   return -VAR_0;
  }




  if (FUNC_12(FUNC_5(VAR_6) && !VAR_3->key &&
        FUNC_9(
         (struct ieee80211_hdr *) VAR_3->skb->data)))
   return -VAR_0;
 }

 return 0;
}
