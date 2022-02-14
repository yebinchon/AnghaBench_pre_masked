
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {size_t non_pref_chan_num; struct wpa_mbo_non_pref_channel* non_pref_chan; } ;
struct wpa_mbo_non_pref_channel {scalar_t__ oper_class; scalar_t__ reason; scalar_t__ preference; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpabuf*,size_t,size_t) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpabuf*,size_t,size_t) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_0,
      struct wpabuf *VAR_1, int VAR_2)
{
 u8 VAR_3, VAR_4 = 0;
 struct wpa_mbo_non_pref_channel *VAR_5;

 if (!VAR_0->non_pref_chan || !VAR_0->non_pref_chan_num) {
  if (VAR_2)
   FUNC_2(VAR_1, 4);
  else
   FUNC_1(VAR_1, 0);
  return;
 }
 VAR_5 = &VAR_0->non_pref_chan[0];

 for (VAR_3 = 1; VAR_3 <= VAR_0->non_pref_chan_num; VAR_3++) {
  struct wpa_mbo_non_pref_channel *VAR_6 = ((void*)0);

  if (VAR_3 < VAR_0->non_pref_chan_num)
   VAR_6 = &VAR_0->non_pref_chan[VAR_3];
  if (!VAR_6 ||
      VAR_6->oper_class != VAR_5->oper_class ||
      VAR_6->reason != VAR_5->reason ||
      VAR_6->preference != VAR_5->preference) {
   if (VAR_2)
    FUNC_3(VAR_0, VAR_1,
          VAR_4, VAR_3);
   else
    FUNC_0(VAR_0, VAR_1, VAR_4,
           VAR_3);

   if (!VAR_6)
    return;

   VAR_4 = VAR_3;
   VAR_5 = VAR_6;
  }
 }
}
