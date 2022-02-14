
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct ieee80211_rx_status {int vendor_radiotap_len; int flag; int freq; scalar_t__ band; unsigned char signal; unsigned char antenna; int rate_idx; int vht_nss; int vendor_radiotap_align; int vendor_radiotap_subns; int * vendor_radiotap_oui; int ampdu_delimiter_crc; int ampdu_reference; int vendor_radiotap_bitmap; } ;
struct ieee80211_rate {int bitrate; int flags; } ;
struct ieee80211_radiotap_header {int it_present; int it_len; } ;
struct TYPE_2__ {int flags; int radiotap_vht_details; int radiotap_mcs_details; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 int VAR_23 ;
 unsigned char VAR_24 ;
 int VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 unsigned char VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_rx_status*,int,int ) ;
 scalar_t__ FUNC_5 (struct ieee80211_rx_status*) ;
 int FUNC_6 (struct ieee80211_radiotap_header*,int ,int) ;
 int FUNC_7 (int,unsigned char*) ;
 int FUNC_8 (int ,unsigned char*) ;
 int FUNC_9 (int ,unsigned char*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211_local *VAR_56,
     struct sk_buff *VAR_57,
     struct ieee80211_rate *VAR_58,
     int VAR_59, bool VAR_60)
{
 struct ieee80211_rx_status *VAR_61 = FUNC_1(VAR_57);
 struct ieee80211_radiotap_header *VAR_62;
 unsigned char *VAR_63;
 u16 VAR_64 = 0;
 int VAR_65;

 VAR_65 = VAR_57->len;
 if (!(VAR_60 && (VAR_56->hw.flags & VAR_7)))
  VAR_65 += VAR_0;

 VAR_62 = (struct ieee80211_radiotap_header *)FUNC_10(VAR_57, VAR_59);
 FUNC_6(VAR_62, 0, VAR_59);


 VAR_62->it_present =
  FUNC_3((1 << VAR_20) |
       (1 << VAR_17) |
       (1 << VAR_16) |
       (1 << VAR_30));
 VAR_62->it_len = FUNC_2(VAR_59 + VAR_61->vendor_radiotap_len);

 VAR_63 = (unsigned char *)(VAR_62 + 1);

 if (VAR_61->vendor_radiotap_len) {
  VAR_62->it_present |=
   FUNC_3(FUNC_0(VAR_32)) |
   FUNC_3(FUNC_0(VAR_19));
  FUNC_8(VAR_61->vendor_radiotap_bitmap, VAR_63);
  VAR_63 += 4;
 }




 if (FUNC_5(VAR_61)) {

  while ((VAR_63 - (u8 *)VAR_62) & 7)
   *VAR_63++ = 0;
  FUNC_9(
   FUNC_4(VAR_56, VAR_61,
        VAR_65, 0),
   VAR_63);
  VAR_62->it_present |= FUNC_3(1 << VAR_31);
  VAR_63 += 8;
 }


 if (VAR_60 && (VAR_56->hw.flags & VAR_7))
  *VAR_63 |= VAR_22;
 if (VAR_61->flag & (VAR_48 | VAR_49))
  *VAR_63 |= VAR_21;
 if (VAR_61->flag & VAR_53)
  *VAR_63 |= VAR_24;
 VAR_63++;


 if (!VAR_58 || VAR_61->flag & (VAR_50 | VAR_55)) {






  *VAR_63 = 0;
 } else {
  VAR_62->it_present |= FUNC_3(1 << VAR_29);
  *VAR_63 = VAR_58->bitrate / 5;
 }
 VAR_63++;


 FUNC_7(VAR_61->freq, VAR_63);
 VAR_63 += 2;
 if (VAR_61->band == VAR_1)
  FUNC_7(VAR_6 | VAR_3,
       VAR_63);
 else if (VAR_61->flag & (VAR_50 | VAR_55))
  FUNC_7(VAR_5 | VAR_2,
       VAR_63);
 else if (VAR_58 && VAR_58->flags & VAR_36)
  FUNC_7(VAR_6 | VAR_2,
       VAR_63);
 else if (VAR_58)
  FUNC_7(VAR_4 | VAR_2,
       VAR_63);
 else
  FUNC_7(VAR_2, VAR_63);
 VAR_63 += 2;


 if (VAR_56->hw.flags & VAR_8 &&
     !(VAR_61->flag & VAR_52)) {
  *VAR_63 = VAR_61->signal;
  VAR_62->it_present |=
   FUNC_3(1 << VAR_18);
  VAR_63++;
 }




 *VAR_63 = VAR_61->antenna;
 VAR_63++;





 if ((VAR_63 - (u8 *)VAR_62) & 1)
  *VAR_63++ = 0;
 if (VAR_61->flag & VAR_49)
  VAR_64 |= VAR_23;
 FUNC_7(VAR_64, VAR_63);
 VAR_63 += 2;

 if (VAR_61->flag & VAR_50) {
  VAR_62->it_present |= FUNC_3(1 << VAR_25);
  *VAR_63++ = VAR_56->hw.radiotap_mcs_details;
  *VAR_63 = 0;
  if (VAR_61->flag & VAR_54)
   *VAR_63 |= VAR_28;
  if (VAR_61->flag & VAR_38)
   *VAR_63 |= VAR_26;
  if (VAR_61->flag & VAR_51)
   *VAR_63 |= VAR_27;
  VAR_63++;
  *VAR_63++ = VAR_61->rate_idx;
 }

 if (VAR_61->flag & VAR_43) {
  u16 VAR_66 = 0;


  while ((VAR_63 - (u8 *)VAR_62) & 3)
   VAR_63++;
  VAR_62->it_present |=
   FUNC_3(1 << VAR_15);
  FUNC_8(VAR_61->ampdu_reference, VAR_63);
  VAR_63 += 4;
  if (VAR_61->flag & VAR_47)
   VAR_66 |= VAR_14;
  if (VAR_61->flag & VAR_45)
   VAR_66 |= VAR_12;
  if (VAR_61->flag & VAR_46)
   VAR_66 |= VAR_13;
  if (VAR_61->flag & VAR_44)
   VAR_66 |= VAR_11;
  if (VAR_61->flag & VAR_41)
   VAR_66 |= VAR_9;
  if (VAR_61->flag & VAR_42)
   VAR_66 |= VAR_10;
  FUNC_7(VAR_66, VAR_63);
  VAR_63 += 2;
  if (VAR_61->flag & VAR_42)
   *VAR_63++ = VAR_61->ampdu_delimiter_crc;
  else
   *VAR_63++ = 0;
  *VAR_63++ = 0;
 }

 if (VAR_61->flag & VAR_55) {
  u16 VAR_67 = VAR_56->hw.radiotap_vht_details;

  VAR_62->it_present |= FUNC_3(1 << VAR_33);

  if (VAR_61->flag & VAR_40)
   VAR_67 &= ~VAR_35;
  FUNC_7(VAR_67, VAR_63);
  VAR_63 += 2;

  if (VAR_61->flag & VAR_54)
   *VAR_63 |= VAR_34;
  VAR_63++;

  if (VAR_61->flag & VAR_39)
   *VAR_63++ = 4;
  else if (VAR_61->flag & VAR_40)
   *VAR_63++ = 0;
  else if (VAR_61->flag & VAR_37)
   *VAR_63++ = 11;
  else if (VAR_61->flag & VAR_38)
   *VAR_63++ = 1;
  else
   *VAR_63++ = 0;

  *VAR_63 = (VAR_61->rate_idx << 4) | VAR_61->vht_nss;
  VAR_63 += 4;

  VAR_63++;

  VAR_63++;

  VAR_63 += 2;
 }

 if (VAR_61->vendor_radiotap_len) {

  if ((VAR_63 - (u8 *)VAR_62) & 1)
   *VAR_63++ = 0;
  *VAR_63++ = VAR_61->vendor_radiotap_oui[0];
  *VAR_63++ = VAR_61->vendor_radiotap_oui[1];
  *VAR_63++ = VAR_61->vendor_radiotap_oui[2];
  *VAR_63++ = VAR_61->vendor_radiotap_subns;
  FUNC_7(VAR_61->vendor_radiotap_len, VAR_63);
  VAR_63 += 2;

  while ((VAR_63 - (u8 *)VAR_62) & (VAR_61->vendor_radiotap_align - 1))
   *VAR_63++ = 0;
 }
}
