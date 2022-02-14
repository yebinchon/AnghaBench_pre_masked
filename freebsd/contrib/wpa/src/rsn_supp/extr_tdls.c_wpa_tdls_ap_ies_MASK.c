
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {int tdls_chan_switch_prohibited; int tdls_prohibited; } ;
struct ieee802_11_elems {int ext_capab_len; int * ext_capab; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct ieee802_11_elems*,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct ieee802_11_elems*) ;
 int FUNC_3 (struct ieee802_11_elems*) ;

void FUNC_4(struct wpa_sm *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 struct ieee802_11_elems VAR_5;

 VAR_2->tdls_prohibited = 0;
 VAR_2->tdls_chan_switch_prohibited = 0;

 if (VAR_3 == ((void*)0) ||
     FUNC_0(VAR_3, VAR_4, &VAR_5, 0) == VAR_1 ||
     VAR_5.ext_capab == ((void*)0) || VAR_5.ext_capab_len < 5)
  return;

 VAR_2->tdls_prohibited = FUNC_3(&VAR_5);
 FUNC_1(VAR_0, "TDLS: TDLS is %s in the target BSS",
     VAR_2->tdls_prohibited ? "prohibited" : "allowed");
 VAR_2->tdls_chan_switch_prohibited =
  FUNC_2(&VAR_5);
 FUNC_1(VAR_0, "TDLS: TDLS channel switch %s in the target BSS",
     VAR_2->tdls_chan_switch_prohibited ? "prohibited" : "allowed");
}
