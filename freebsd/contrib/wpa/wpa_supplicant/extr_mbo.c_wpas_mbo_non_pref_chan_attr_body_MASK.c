
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* non_pref_chan; } ;
struct TYPE_2__ {int reason; int preference; int chan; int oper_class; } ;


 int FUNC_0 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_1(struct wpa_supplicant *VAR_0,
          struct wpabuf *VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 FUNC_0(VAR_1, VAR_0->non_pref_chan[VAR_2].oper_class);

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_1, VAR_0->non_pref_chan[VAR_4].chan);

 FUNC_0(VAR_1, VAR_0->non_pref_chan[VAR_2].preference);
 FUNC_0(VAR_1, VAR_0->non_pref_chan[VAR_2].reason);
}
