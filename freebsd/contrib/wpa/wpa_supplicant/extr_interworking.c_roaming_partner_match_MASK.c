
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;
struct roaming_partner {int exact_match; int fqdn; int country; int priority; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_1,
     struct roaming_partner *VAR_2,
     struct wpabuf *VAR_3)
{
 FUNC_2(VAR_0, "Interworking: Comparing roaming_partner info fqdn='%s' exact_match=%d priority=%u country='%s'",
     VAR_2->fqdn, VAR_2->exact_match, VAR_2->priority,
     VAR_2->country);
 FUNC_1(VAR_0, "Interworking: Domain names",
     FUNC_3(VAR_3),
     FUNC_4(VAR_3));
 if (!FUNC_0(VAR_3, VAR_2->fqdn,
           VAR_2->exact_match))
  return 0;

 return 1;
}
