
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct wmeParams {int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; } ;
struct rum_tx_desc {int plcp_signal; int plcp_service; int plcp_length_hi; int plcp_length_lo; int hdrlen; size_t xflags; int wme; int flags; int iv; scalar_t__ eiv; } ;
struct ieee80211com {int ic_flags; int ic_rt; } ;
struct rum_softc {struct wmeParams* wme_params; struct ieee80211com sc_ic; } ;
struct ieee80211_key {int wk_flags; struct ieee80211_cipher* wk_cipher; } ;
struct ieee80211_cipher {int (* ic_setiv ) (struct ieee80211_key*,size_t*) ;scalar_t__ ic_miclen; scalar_t__ ic_trailer; scalar_t__ ic_header; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ieee80211_key*,size_t*) ;

__attribute__((used)) static void
FUNC_10(struct rum_softc *VAR_7, struct rum_tx_desc *VAR_8,
    struct ieee80211_key *VAR_9, uint32_t VAR_10, uint8_t VAR_11, uint8_t VAR_12,
    int VAR_13, int VAR_14, int VAR_15)
{
 struct ieee80211com *VAR_16 = &VAR_7->sc_ic;
 struct wmeParams *VAR_17 = &VAR_7->wme_params[VAR_12];
 uint16_t VAR_18;
 int VAR_19;

 VAR_10 |= VAR_6;
 VAR_10 |= VAR_14 << 16;

 if (VAR_9 != ((void*)0) && !(VAR_9->wk_flags & VAR_2)) {
  const struct ieee80211_cipher *VAR_20 = VAR_9->wk_cipher;

  VAR_14 += VAR_20->ic_header + VAR_20->ic_trailer + VAR_20->ic_miclen;

  VAR_8->eiv = 0;
  VAR_20->ic_setiv(VAR_9, (uint8_t *)&VAR_8->iv);
 }


 VAR_8->plcp_signal = FUNC_8(VAR_15);
 VAR_8->plcp_service = 4;

 VAR_14 += VAR_0;
 if (FUNC_7(VAR_16->ic_rt, VAR_15) == VAR_3) {
  VAR_10 |= VAR_5;

  VAR_18 = VAR_14 & 0xfff;
  VAR_8->plcp_length_hi = VAR_18 >> 6;
  VAR_8->plcp_length_lo = VAR_18 & 0x3f;
 } else {
  if (VAR_15 == 0)
   VAR_15 = 2;
  VAR_18 = FUNC_4(16 * VAR_14, VAR_15);
  if (VAR_15 == 22) {
   VAR_19 = (16 * VAR_14) % 22;
   if (VAR_19 != 0 && VAR_19 < 7)
    VAR_8->plcp_service |= VAR_4;
  }
  VAR_8->plcp_length_hi = VAR_18 >> 8;
  VAR_8->plcp_length_lo = VAR_18 & 0xff;

  if (VAR_15 != 2 && (VAR_16->ic_flags & VAR_1))
   VAR_8->plcp_signal |= 0x08;
 }

 VAR_8->flags = FUNC_6(VAR_10);
 VAR_8->hdrlen = VAR_13;
 VAR_8->xflags = VAR_11;

 VAR_8->wme = FUNC_5(FUNC_3(VAR_12) |
     FUNC_0(VAR_17->wmep_aifsn) |
     FUNC_2(VAR_17->wmep_logcwmin) |
     FUNC_1(VAR_17->wmep_logcwmax));
}
