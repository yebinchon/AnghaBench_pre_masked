
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sta_info {int radius_das_match; struct sta_info* next; TYPE_1__* eapol_sm; scalar_t__ acct_session_id; } ;
struct radius_das_attrs {int acct_session_id_len; int acct_multi_session_id_len; char* cui; size_t cui_len; char* user_name; size_t user_name_len; int * acct_multi_session_id; int * acct_session_id; scalar_t__ sta_addr; } ;
struct hostapd_data {struct sta_info* sta_list; } ;
typedef int buf ;
struct TYPE_3__ {scalar_t__ acct_multi_session_id; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,scalar_t__) ;
 int * FUNC_1 (TYPE_1__*,size_t*) ;
 struct wpabuf* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (char*,int,char*,unsigned long long) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (struct wpabuf*) ;
 size_t FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static struct sta_info * FUNC_8(struct hostapd_data *VAR_1,
           struct radius_das_attrs *VAR_2,
           int *VAR_3)
{
 struct sta_info *VAR_4, *VAR_5;
 char VAR_6[128];
 int VAR_7 = 0;
 int VAR_8;

 *VAR_3 = 0;

 for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next)
  VAR_5->radius_das_match = 1;

 if (VAR_2->sta_addr) {
  VAR_7++;
  VAR_5 = FUNC_0(VAR_1, VAR_2->sta_addr);
  if (!VAR_5) {
   FUNC_5(VAR_0,
       "RADIUS DAS: No Calling-Station-Id match");
   return ((void*)0);
  }

  VAR_4 = VAR_5;
  for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next) {
   if (VAR_5 != VAR_4)
    VAR_5->radius_das_match = 0;
  }
  FUNC_5(VAR_0, "RADIUS DAS: Calling-Station-Id match");
 }

 if (VAR_2->acct_session_id) {
  VAR_7++;
  if (VAR_2->acct_session_id_len != 16) {
   FUNC_5(VAR_0,
       "RADIUS DAS: Acct-Session-Id cannot match");
   return ((void*)0);
  }
  VAR_8 = 0;

  for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next) {
   if (!VAR_5->radius_das_match)
    continue;
   FUNC_4(VAR_6, sizeof(VAR_6), "%016llX",
        (unsigned long long) VAR_5->acct_session_id);
   if (FUNC_3(VAR_2->acct_session_id, VAR_6, 16) != 0)
    VAR_5->radius_das_match = 0;
   else
    VAR_8++;
  }

  if (VAR_8 == 0) {
   FUNC_5(VAR_0,
       "RADIUS DAS: No matches remaining after Acct-Session-Id check");
   return ((void*)0);
  }
  FUNC_5(VAR_0, "RADIUS DAS: Acct-Session-Id match");
 }

 if (VAR_2->acct_multi_session_id) {
  VAR_7++;
  if (VAR_2->acct_multi_session_id_len != 16) {
   FUNC_5(VAR_0,
       "RADIUS DAS: Acct-Multi-Session-Id cannot match");
   return ((void*)0);
  }
  VAR_8 = 0;

  for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next) {
   if (!VAR_5->radius_das_match)
    continue;
   if (!VAR_5->eapol_sm ||
       !VAR_5->eapol_sm->acct_multi_session_id) {
    VAR_5->radius_das_match = 0;
    continue;
   }
   FUNC_4(VAR_6, sizeof(VAR_6), "%016llX",
        (unsigned long long)
        VAR_5->eapol_sm->acct_multi_session_id);
   if (FUNC_3(VAR_2->acct_multi_session_id, VAR_6, 16) !=
       0)
    VAR_5->radius_das_match = 0;
   else
    VAR_8++;
  }

  if (VAR_8 == 0) {
   FUNC_5(VAR_0,
       "RADIUS DAS: No matches remaining after Acct-Multi-Session-Id check");
   return ((void*)0);
  }
  FUNC_5(VAR_0,
      "RADIUS DAS: Acct-Multi-Session-Id match");
 }

 if (VAR_2->cui) {
  VAR_7++;
  VAR_8 = 0;

  for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next) {
   struct wpabuf *VAR_9;

   if (!VAR_5->radius_das_match)
    continue;
   VAR_9 = FUNC_2(VAR_5->eapol_sm);
   if (!VAR_9 || FUNC_7(VAR_9) != VAR_2->cui_len ||
       FUNC_3(FUNC_6(VAR_9), VAR_2->cui,
          VAR_2->cui_len) != 0)
    VAR_5->radius_das_match = 0;
   else
    VAR_8++;
  }

  if (VAR_8 == 0) {
   FUNC_5(VAR_0,
       "RADIUS DAS: No matches remaining after Chargeable-User-Identity check");
   return ((void*)0);
  }
  FUNC_5(VAR_0,
      "RADIUS DAS: Chargeable-User-Identity match");
 }

 if (VAR_2->user_name) {
  VAR_7++;
  VAR_8 = 0;

  for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next) {
   u8 *VAR_10;
   size_t VAR_11;

   if (!VAR_5->radius_das_match)
    continue;
   VAR_10 = FUNC_1(VAR_5->eapol_sm,
          &VAR_11);
   if (!VAR_10 ||
       VAR_11 != VAR_2->user_name_len ||
       FUNC_3(VAR_10, VAR_2->user_name, VAR_11)
       != 0)
    VAR_5->radius_das_match = 0;
   else
    VAR_8++;
  }

  if (VAR_8 == 0) {
   FUNC_5(VAR_0,
       "RADIUS DAS: No matches remaining after User-Name check");
   return ((void*)0);
  }
  FUNC_5(VAR_0,
      "RADIUS DAS: User-Name match");
 }

 if (VAR_7 == 0) {





  FUNC_5(VAR_0,
      "RADIUS DAS: No session identification attributes included");
  return ((void*)0);
 }

 VAR_4 = ((void*)0);
 for (VAR_5 = VAR_1->sta_list; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->radius_das_match) {
   if (VAR_4) {
    *VAR_3 = 1;
    return ((void*)0);
   }
   VAR_4 = VAR_5;
  }
 }

 return VAR_4;
}
