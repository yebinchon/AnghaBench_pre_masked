
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t ies_len; int * ies; int status_code; int auth_transaction; int auth_type; int bssid; int peer; } ;
union wpa_event_data {TYPE_1__ auth; } ;
typedef int u8 ;
struct privsep_event_auth {int ies_len; int status_code; int auth_transaction; int auth_type; int bssid; int peer; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (union wpa_event_data*,int ,int) ;
 int FUNC_2 (void*,int ,union wpa_event_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 union wpa_event_data VAR_5;
 struct privsep_event_auth *VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 if (VAR_4 < sizeof(*VAR_6))
  return;
 VAR_6 = (struct privsep_event_auth *) VAR_3;
 if (VAR_4 < sizeof(*VAR_6) + VAR_6->ies_len)
  return;

 FUNC_0(VAR_5.auth.peer, VAR_6->peer, VAR_0);
 FUNC_0(VAR_5.auth.bssid, VAR_6->bssid, VAR_0);
 VAR_5.auth.auth_type = VAR_6->auth_type;
 VAR_5.auth.auth_transaction = VAR_6->auth_transaction;
 VAR_5.auth.status_code = VAR_6->status_code;
 if (VAR_6->ies_len) {
  VAR_5.auth.ies = (u8 *) (VAR_6 + 1);
  VAR_5.auth.ies_len = VAR_6->ies_len;
 }

 FUNC_2(VAR_2, VAR_1, &VAR_5);
}
