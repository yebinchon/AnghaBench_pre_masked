
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int own_ie_override_len; int wpa; int wpa_key_mgmt; int * own_ie_override; } ;
struct wpa_authenticator {int wpa_ie_len; int * wpa_ie; TYPE_1__ conf; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,char*,int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int * FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int) ;

int FUNC_9(struct wpa_authenticator *VAR_4)
{
 u8 *VAR_5, VAR_6[128];
 int VAR_7;
 VAR_5 = VAR_6;

 if (VAR_4->conf.wpa == VAR_1) {
  VAR_5 = FUNC_6(&VAR_4->conf, VAR_5);
 }
 if (VAR_4->conf.wpa & VAR_2) {
  VAR_7 = FUNC_7(&VAR_4->conf,
           VAR_5, VAR_6 + sizeof(VAR_6) - VAR_5, ((void*)0));
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5 += VAR_7;
 }
 if (VAR_4->conf.wpa & VAR_3) {
  VAR_7 = FUNC_8(&VAR_4->conf,
           VAR_5, VAR_6 + sizeof(VAR_6) - VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5 += VAR_7;
 }

 FUNC_0(VAR_4->wpa_ie);
 VAR_4->wpa_ie = FUNC_1(VAR_5 - VAR_6);
 if (VAR_4->wpa_ie == ((void*)0))
  return -1;
 FUNC_2(VAR_4->wpa_ie, VAR_6, VAR_5 - VAR_6);
 VAR_4->wpa_ie_len = VAR_5 - VAR_6;

 return 0;
}
