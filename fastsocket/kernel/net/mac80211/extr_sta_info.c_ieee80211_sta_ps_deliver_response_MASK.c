
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {unsigned long driver_buffered_tids; struct sk_buff_head* ps_tx_buf; struct sk_buff_head* tx_filtered; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int total_ps_buffered; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_local*,struct sta_info*,int,int,int,int) ;
 int FUNC_7 (struct ieee80211_local*,struct sta_info*,unsigned long,int,int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct ieee80211_local*,struct sk_buff_head*) ;
 int* FUNC_11 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,struct sta_info*,int,int) ;
 unsigned long FUNC_15 (int) ;
 int FUNC_16 (struct sta_info*,int ) ;
 struct sk_buff* FUNC_17 (struct sk_buff_head*) ;
 scalar_t__ FUNC_18 (struct sk_buff_head*) ;
 int FUNC_19 (struct sk_buff_head*) ;
 int FUNC_20 (struct sta_info*) ;

__attribute__((used)) static void
FUNC_21(struct sta_info *VAR_10,
      int VAR_11, u8 VAR_12,
      enum ieee80211_frame_release_type VAR_13)
{
 struct ieee80211_sub_if_data *VAR_14 = VAR_10->sdata;
 struct ieee80211_local *VAR_15 = VAR_14->local;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 int VAR_18;
 unsigned long VAR_19 = 0;
 struct sk_buff_head VAR_20;


 FUNC_16(VAR_10, VAR_9);

 FUNC_3(&VAR_20);




 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  unsigned long VAR_21;

  if (VAR_12 & FUNC_0(VAR_18))
   continue;

  VAR_21 = FUNC_15(VAR_18);

  if (!VAR_16) {
   VAR_19 = VAR_10->driver_buffered_tids & VAR_21;
   if (VAR_19) {
    VAR_16 = 1;
   } else {
    struct sk_buff *VAR_22;

    while (VAR_11 > 0) {
     VAR_22 = FUNC_17(&VAR_10->tx_filtered[VAR_18]);
     if (!VAR_22) {
      VAR_22 = FUNC_17(
       &VAR_10->ps_tx_buf[VAR_18]);
      if (VAR_22)
       VAR_15->total_ps_buffered--;
     }
     if (!VAR_22)
      break;
     VAR_11--;
     VAR_16 = 1;
     FUNC_4(&VAR_20, VAR_22);
    }
   }






   if (VAR_13 == VAR_1 &&
       FUNC_9(VAR_19) > 1) {
    VAR_17 = 1;
    VAR_19 =
     FUNC_0(FUNC_8(VAR_19) - 1);
    break;
   }
  }

  if (!FUNC_18(&VAR_10->tx_filtered[VAR_18]) ||
      !FUNC_18(&VAR_10->ps_tx_buf[VAR_18])) {
   VAR_17 = 1;
   break;
  }
 }

 if (!VAR_16) {
  int VAR_23;
  VAR_23 = 7 - ((FUNC_8(~VAR_12) - 1) << 1);

  FUNC_14(VAR_14, VAR_10, VAR_23, VAR_13);
  return;
 }

 if (!VAR_19) {
  struct sk_buff_head VAR_24;
  struct sk_buff *VAR_25;
  int VAR_26 = 0;
  u16 VAR_27 = 0;

  FUNC_19(&VAR_24);

  while ((VAR_25 = FUNC_2(&VAR_20))) {
   struct ieee80211_tx_info *VAR_28 = FUNC_1(VAR_25);
   struct ieee80211_hdr *VAR_29 = (void *) VAR_25->data;
   u8 *VAR_30 = ((void*)0);

   VAR_26++;






   VAR_28->flags |= VAR_6;





   if (VAR_17 || !FUNC_18(&VAR_20))
    VAR_29->frame_control |=
     FUNC_5(VAR_0);
   else
    VAR_29->frame_control &=
     FUNC_5(~VAR_0);

   if (FUNC_12(VAR_29->frame_control) ||
       FUNC_13(VAR_29->frame_control))
    VAR_30 = FUNC_11(VAR_29);


   if (FUNC_18(&VAR_20)) {
    if (VAR_13 == VAR_2 &&
        VAR_30)
     *VAR_30 |= VAR_4;

    VAR_28->flags |= VAR_8 |
            VAR_7;
   }

   if (VAR_30)
    VAR_27 |= FUNC_0(*VAR_30 & VAR_5);
   else
    VAR_27 |= FUNC_0(0);

   FUNC_4(&VAR_24, VAR_25);
  }

  FUNC_6(VAR_15, VAR_10, VAR_27, VAR_26,
       VAR_13, VAR_17);

  FUNC_10(VAR_15, &VAR_24);

  FUNC_20(VAR_10);
 } else {
  FUNC_7(VAR_15, VAR_10, VAR_19,
         VAR_11, VAR_13, VAR_17);
 }
}
