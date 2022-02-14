
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ural_tx_desc {int plcp_signal; int plcp_service; int plcp_length_hi; int plcp_length_lo; scalar_t__ eiv; scalar_t__ iv; int flags; int wme; } ;
struct ieee80211com {int ic_flags; int ic_rt; } ;
struct ural_softc {struct ieee80211com sc_ic; } ;
struct ieee80211_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct ural_softc *VAR_6, struct ural_tx_desc *VAR_7,
    uint32_t VAR_8, int VAR_9, int VAR_10)
{
 struct ieee80211com *VAR_11 = &VAR_6->sc_ic;
 uint16_t VAR_12;
 int VAR_13;

 VAR_7->flags = FUNC_6(VAR_8);
 VAR_7->flags |= FUNC_6(VAR_4);
 VAR_7->flags |= FUNC_6(VAR_9 << 16);

 VAR_7->wme = FUNC_5(FUNC_0(2) | FUNC_3(3) | FUNC_2(5));
 VAR_7->wme |= FUNC_5(FUNC_1(sizeof (struct ieee80211_frame)));


 VAR_7->plcp_signal = FUNC_8(VAR_10);
 VAR_7->plcp_service = 4;

 VAR_9 += VAR_0;
 if (FUNC_7(VAR_11->ic_rt, VAR_10) == VAR_2) {
  VAR_7->flags |= FUNC_6(VAR_5);

  VAR_12 = VAR_9 & 0xfff;
  VAR_7->plcp_length_hi = VAR_12 >> 6;
  VAR_7->plcp_length_lo = VAR_12 & 0x3f;
 } else {
  if (VAR_10 == 0)
   VAR_10 = 2;
  VAR_12 = FUNC_4(16 * VAR_9, VAR_10);
  if (VAR_10 == 22) {
   VAR_13 = (16 * VAR_9) % 22;
   if (VAR_13 != 0 && VAR_13 < 7)
    VAR_7->plcp_service |= VAR_3;
  }
  VAR_7->plcp_length_hi = VAR_12 >> 8;
  VAR_7->plcp_length_lo = VAR_12 & 0xff;

  if (VAR_10 != 2 && (VAR_11->ic_flags & VAR_1))
   VAR_7->plcp_signal |= 0x08;
 }

 VAR_7->iv = 0;
 VAR_7->eiv = 0;
}
