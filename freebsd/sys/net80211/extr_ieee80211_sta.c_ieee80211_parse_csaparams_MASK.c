
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {size_t iv_state; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; int ic_csa_count; int ic_csa_mode; int ic_csa_newchan; TYPE_1__* ic_bsschan; } ;
struct ieee80211_frame {int dummy; } ;
struct ieee80211_csa_ie {int csa_mode; int csa_count; int csa_newchan; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {int ic_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,char*,char*,int,...) ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211com*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ieee80211vap*,int,struct ieee80211_frame const*,char*,int,int ,int,int,int ,int) ;
 size_t VAR_6 ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct ieee80211com*,int ) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*,struct ieee80211_channel*,int,int) ;
 struct ieee80211_channel* FUNC_9 (struct ieee80211com*,int ,int) ;
 int * VAR_7 ;

__attribute__((used)) static void
FUNC_10(struct ieee80211vap *VAR_8, uint8_t *VAR_9,
 const struct ieee80211_frame *VAR_10)
{
 struct ieee80211com *VAR_11 = VAR_8->iv_ic;
 const struct ieee80211_csa_ie *VAR_12 =
     (const struct ieee80211_csa_ie *) VAR_9;

 FUNC_4(VAR_8->iv_state >= VAR_6,
     ("state %s", VAR_7[VAR_8->iv_state]));

 if (VAR_12->csa_mode > 1) {
  FUNC_0(VAR_8,
      VAR_5 | VAR_4,
      VAR_10, "CSA", "invalid mode %u", VAR_12->csa_mode);
  return;
 }
 FUNC_1(VAR_11);
 if ((VAR_11->ic_flags & VAR_3) == 0) {
  struct ieee80211_channel *VAR_13 =
      FUNC_9(VAR_11, VAR_12->csa_newchan,
   (VAR_11->ic_bsschan->ic_flags & VAR_1));
  if (VAR_13 == ((void*)0)) {
   VAR_13 = FUNC_9(VAR_11,
       VAR_12->csa_newchan,
       (VAR_11->ic_bsschan->ic_flags & VAR_0));
   if (VAR_13 == ((void*)0)) {
    FUNC_0(VAR_8,
        VAR_5 | VAR_4,
        VAR_10, "CSA", "invalid channel %u",
        VAR_12->csa_newchan);
    goto done;
   }
  }
  FUNC_8(VAR_11, VAR_13, VAR_12->csa_mode, VAR_12->csa_count);
 } else {
  if (!(VAR_12->csa_count < VAR_11->ic_csa_count &&
        VAR_12->csa_mode == VAR_11->ic_csa_mode &&
        VAR_12->csa_newchan == FUNC_5(VAR_11, VAR_11->ic_csa_newchan))) {
   FUNC_2(VAR_8, VAR_4, VAR_10,
       "CSA ie mismatch, initial ie <%d,%d,%d>, "
       "this ie <%d,%d,%d>", VAR_11->ic_csa_mode,
       VAR_11->ic_csa_newchan, VAR_11->ic_csa_count,
       VAR_12->csa_mode, VAR_12->csa_newchan, VAR_12->csa_count);
   FUNC_6(VAR_11);
  } else {
   if (VAR_12->csa_count <= 1)
    FUNC_7(VAR_11);
   else
    VAR_11->ic_csa_count = VAR_12->csa_count;
  }
 }
done:
 FUNC_3(VAR_11);
}
