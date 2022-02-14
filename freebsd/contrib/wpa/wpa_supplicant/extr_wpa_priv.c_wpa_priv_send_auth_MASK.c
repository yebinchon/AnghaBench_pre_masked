
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ies_len; int ies; int status_code; int auth_transaction; int auth_type; int bssid; int peer; } ;
union wpa_event_data {TYPE_1__ auth; } ;
typedef int u8 ;
struct wpa_priv_interface {int dummy; } ;
struct privsep_event_auth {int ies_len; int status_code; int auth_transaction; int auth_type; int * bssid; int * peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (struct wpa_priv_interface*,int ,int *,size_t) ;

__attribute__((used)) static void FUNC_4(struct wpa_priv_interface *VAR_2,
          union wpa_event_data *VAR_3)
{
 size_t VAR_4 = sizeof(struct privsep_event_auth) + VAR_3->auth.ies_len;
 struct privsep_event_auth *VAR_5;
 u8 *VAR_6, *VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0))
  return;

 VAR_5 = (struct privsep_event_auth *) VAR_6;
 VAR_7 = (u8 *) (VAR_5 + 1);

 FUNC_1(VAR_5->peer, VAR_3->auth.peer, VAR_0);
 FUNC_1(VAR_5->bssid, VAR_3->auth.bssid, VAR_0);
 VAR_5->auth_type = VAR_3->auth.auth_type;
 VAR_5->auth_transaction = VAR_3->auth.auth_transaction;
 VAR_5->status_code = VAR_3->auth.status_code;
 if (VAR_3->auth.ies) {
  FUNC_1(VAR_7, VAR_3->auth.ies, VAR_3->auth.ies_len);
  VAR_5->ies_len = VAR_3->auth.ies_len;
 }

 FUNC_3(VAR_2, VAR_1, VAR_6, VAR_4);

 FUNC_0(VAR_6);
}
