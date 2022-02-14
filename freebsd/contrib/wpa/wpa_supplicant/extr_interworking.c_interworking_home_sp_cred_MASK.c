
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {char* imsi; int mnc_len; scalar_t__ scard; } ;
struct wpa_cred {char* imsi; char** domain; size_t num_domain; scalar_t__ pcsc; } ;
typedef int nai ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*,int,int ) ;
 scalar_t__ FUNC_1 (struct wpabuf*,char*,int) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,char*) ;

int FUNC_5(struct wpa_supplicant *VAR_1,
         struct wpa_cred *VAR_2,
         struct wpabuf *VAR_3)
{
 size_t VAR_4;
 int VAR_5 = -1;
 if (VAR_3 == ((void*)0) || VAR_2->domain == ((void*)0))
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_domain; VAR_4++) {
  FUNC_4(VAR_1, VAR_0,
   "Interworking: Search for match with home SP FQDN %s",
   VAR_2->domain[VAR_4]);
  if (FUNC_1(VAR_3, VAR_2->domain[VAR_4], 1))
   return 1;
 }

 return 0;
}
