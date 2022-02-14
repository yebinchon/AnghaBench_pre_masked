
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_2__* conf; } ;
struct wpa_cred {scalar_t__ roaming_consortium_len; scalar_t__ num_roaming_consortiums; int roaming_consortium; int eap_method; struct wpa_cred* next; } ;
struct wpa_bss {TYPE_1__* anqp; } ;
struct TYPE_4__ {struct wpa_cred* cred; } ;
struct TYPE_3__ {struct wpabuf* roaming_consortium; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,struct wpa_cred*,struct wpa_bss*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,struct wpa_cred*,struct wpa_bss*) ;
 scalar_t__ FUNC_2 (struct wpa_cred*,struct wpa_bss*) ;
 scalar_t__ FUNC_3 (struct wpa_cred*,struct wpa_bss*) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*,struct wpa_cred*,struct wpa_bss*) ;
 scalar_t__ FUNC_5 (struct wpa_cred*,struct wpa_cred*) ;
 int FUNC_6 (int const*,struct wpabuf const*,struct wpa_cred*) ;
 int FUNC_7 (int const*,struct wpabuf const*,int ,scalar_t__) ;
 int * FUNC_8 (struct wpa_bss*,int ) ;

__attribute__((used)) static struct wpa_cred * FUNC_9(
 struct wpa_supplicant *VAR_1, struct wpa_bss *VAR_2, int VAR_3,
 int *VAR_4)
{
 struct wpa_cred *VAR_5, *VAR_6 = ((void*)0);
 const u8 *VAR_7;
 const struct wpabuf *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_8(VAR_2, VAR_0);
 VAR_8 = VAR_2->anqp ? VAR_2->anqp->roaming_consortium : ((void*)0);

 if (!VAR_7 && !VAR_8)
  return ((void*)0);

 if (VAR_1->conf->cred == ((void*)0))
  return ((void*)0);

 for (VAR_5 = VAR_1->conf->cred; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->roaming_consortium_len == 0 &&
      VAR_5->num_roaming_consortiums == 0)
   continue;

  if (!VAR_5->eap_method)
   continue;

  if ((VAR_5->roaming_consortium_len == 0 ||
       !FUNC_7(VAR_7, VAR_8,
            VAR_5->roaming_consortium,
            VAR_5->roaming_consortium_len)) &&
      !FUNC_6(VAR_7, VAR_8, VAR_5))
   continue;

  if (FUNC_3(VAR_5, VAR_2))
   continue;
  if (!VAR_3 && FUNC_0(VAR_1, VAR_5, VAR_2))
   continue;
  if (!VAR_3 && FUNC_4(VAR_1, VAR_5, VAR_2))
   continue;
  if (!VAR_3 && FUNC_1(VAR_1, VAR_5, VAR_2))
   continue;
  if (FUNC_2(VAR_5, VAR_2)) {
   if (VAR_4 == ((void*)0))
    continue;
   if (VAR_6 == ((void*)0)) {
    VAR_6 = VAR_5;
    VAR_9 = 1;
   }
  } else {
   if (VAR_6 == ((void*)0) || VAR_9 ||
       FUNC_5(VAR_6, VAR_5) < 0) {
    VAR_6 = VAR_5;
    VAR_9 = 0;
   }
  }
 }

 if (VAR_4)
  *VAR_4 = VAR_9;

 return VAR_6;
}
