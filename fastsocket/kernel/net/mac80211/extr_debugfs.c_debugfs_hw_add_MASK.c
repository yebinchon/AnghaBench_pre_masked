
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* keys; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {int tx_status_drop; int rx_handlers_fragments; int rx_expand_skb_head2; int rx_expand_skb_head; int tx_expand_skb_head_cloned; int tx_expand_skb_head; int rx_handlers_drop_short; int rx_handlers_drop_defrag; int rx_handlers_drop_nullfunc; int rx_handlers_queued; int rx_handlers_drop; int tx_handlers_drop_unauth_port; int tx_handlers_drop_not_assoc; int tx_handlers_drop_wep; int tx_handlers_drop_fragment; int tx_handlers_drop_unencrypted; int tx_handlers_queued; int tx_handlers_drop; int dot11TransmittedFrameCount; int dot11MulticastReceivedFrameCount; int dot11ReceivedFragmentCount; int dot11FrameDuplicateCount; int dot11MultipleRetryCount; int dot11RetryCount; int dot11FailedCount; int dot11MulticastTransmittedFrameCount; int dot11TransmittedFragmentCount; TYPE_3__ debugfs; TYPE_2__ hw; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct dentry* debugfsdir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (char*,struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

void FUNC_5(struct ieee80211_local *VAR_38)
{
 struct dentry *VAR_39 = VAR_38->hw.wiphy->debugfsdir;
 struct dentry *VAR_40;

 if (!VAR_39)
  return;

 VAR_38->debugfs.keys = FUNC_4("keys", VAR_39);

 FUNC_0(VAR_23);
 FUNC_0(VAR_37);
 FUNC_0(VAR_11);



 FUNC_0(VAR_6);
 FUNC_0(VAR_36);
 FUNC_0(VAR_10);

 VAR_40 = FUNC_4("statistics", VAR_39);


 if (!VAR_40)
  return;

 FUNC_3(VAR_24,
  VAR_38->dot11TransmittedFragmentCount);
 FUNC_3(VAR_8,
  VAR_38->dot11MulticastTransmittedFrameCount);
 FUNC_3(VAR_4, VAR_38->dot11FailedCount);
 FUNC_3(VAR_14, VAR_38->dot11RetryCount);
 FUNC_3(VAR_9,
  VAR_38->dot11MultipleRetryCount);
 FUNC_3(VAR_5,
  VAR_38->dot11FrameDuplicateCount);
 FUNC_3(VAR_12,
  VAR_38->dot11ReceivedFragmentCount);
 FUNC_3(VAR_7,
  VAR_38->dot11MulticastReceivedFrameCount);
 FUNC_3(VAR_25,
  VAR_38->dot11TransmittedFrameCount);
 FUNC_2(VAR_0);
 FUNC_2(VAR_2);
 FUNC_2(VAR_1);
 FUNC_2(VAR_3);
}
