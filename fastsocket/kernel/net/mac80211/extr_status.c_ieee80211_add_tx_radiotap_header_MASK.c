
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ status; } ;
struct ieee80211_supported_band {TYPE_1__* bitrates; } ;
struct ieee80211_radiotap_header {int it_present; int it_len; } ;
struct ieee80211_hdr {int addr1; } ;
struct TYPE_5__ {size_t idx; int flags; } ;
struct TYPE_4__ {int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_radiotap_header*,int ,int) ;
 int FUNC_5 (int ,unsigned char*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_supported_band
          *VAR_20, struct sk_buff *VAR_21,
          int VAR_22, int VAR_23)
{
 struct ieee80211_tx_info *VAR_24 = FUNC_0(VAR_21);
 struct ieee80211_hdr *VAR_25 = (struct ieee80211_hdr *) VAR_21->data;
 struct ieee80211_radiotap_header *VAR_26;
 unsigned char *VAR_27;
 u16 VAR_28;

 VAR_26 = (struct ieee80211_radiotap_header *) FUNC_6(VAR_21, VAR_23);

 FUNC_4(VAR_26, 0, VAR_23);
 VAR_26->it_len = FUNC_1(VAR_23);
 VAR_26->it_present =
  FUNC_2((1 << VAR_12) |
       (1 << VAR_0));
 VAR_27 = (unsigned char *)(VAR_26 + 1);
 if (VAR_24->status.rates[0].idx >= 0 &&
     !(VAR_24->status.rates[0].flags & VAR_15)) {
  VAR_26->it_present |= FUNC_2(1 << VAR_11);
  *VAR_27 = VAR_20->bitrates[VAR_24->status.rates[0].idx].bitrate / 5;

  VAR_27 += 2;
 }


 VAR_28 = 0;
 if (!(VAR_24->flags & VAR_19) &&
     !FUNC_3(VAR_25->addr1))
  VAR_28 |= VAR_2;

 if ((VAR_24->status.rates[0].flags & VAR_18) ||
     (VAR_24->status.rates[0].flags & VAR_17))
  VAR_28 |= VAR_1;
 else if (VAR_24->status.rates[0].flags & VAR_18)
  VAR_28 |= VAR_3;

 FUNC_5(VAR_28, VAR_27);
 VAR_27 += 2;



 *VAR_27 = VAR_22;
 VAR_27++;


 if (VAR_24->status.rates[0].idx >= 0 &&
     VAR_24->status.rates[0].flags & VAR_15) {
  VAR_26->it_present |= FUNC_2(1 << VAR_4);
  VAR_27[0] = VAR_9 |
    VAR_8 |
    VAR_7;
  if (VAR_24->status.rates[0].flags & VAR_16)
   VAR_27[1] |= VAR_10;
  if (VAR_24->status.rates[0].flags & VAR_13)
   VAR_27[1] |= VAR_5;
  if (VAR_24->status.rates[0].flags & VAR_14)
   VAR_27[1] |= VAR_6;
  VAR_27[2] = VAR_24->status.rates[0].idx;
  VAR_27 += 3;
 }

}
