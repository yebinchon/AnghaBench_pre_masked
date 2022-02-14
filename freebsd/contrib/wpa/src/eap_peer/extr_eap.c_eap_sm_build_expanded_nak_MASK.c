
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ reqVendor; scalar_t__ reqVendorMethod; } ;
struct eap_method {scalar_t__ vendor; scalar_t__ method; struct eap_method* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct eap_sm*,scalar_t__,scalar_t__) ;
 struct wpabuf* FUNC_1 (scalar_t__,int ,int,int ,int) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpabuf*,scalar_t__) ;
 int FUNC_5 (struct wpabuf*,scalar_t__) ;
 int FUNC_6 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_7(
 struct eap_sm *VAR_6, int VAR_7, const struct eap_method *VAR_8,
 size_t VAR_9)
{
 struct wpabuf *VAR_10;
 int VAR_11 = 0;
 const struct eap_method *VAR_12;

 FUNC_3(VAR_5, "EAP: Building expanded EAP-Nak");


 VAR_10 = FUNC_1(VAR_4, VAR_1,
        8 + 8 * (VAR_9 + 1), VAR_0, VAR_7);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_10, VAR_4);
 FUNC_5(VAR_10, VAR_2);

 for (VAR_12 = VAR_8; VAR_12; VAR_12 = VAR_12->next) {
  if (VAR_6->reqVendor == VAR_12->vendor &&
      VAR_6->reqVendorMethod == VAR_12->method)
   continue;
  if (FUNC_0(VAR_6, VAR_12->vendor, VAR_12->method)) {
   FUNC_3(VAR_5, "EAP: allowed type: "
       "vendor=%u method=%u",
       VAR_12->vendor, VAR_12->method);
   FUNC_6(VAR_10, VAR_1);
   FUNC_4(VAR_10, VAR_12->vendor);
   FUNC_5(VAR_10, VAR_12->method);

   VAR_11++;
  }
 }
 if (!VAR_11) {
  FUNC_3(VAR_5, "EAP: no more allowed methods");
  FUNC_6(VAR_10, VAR_1);
  FUNC_4(VAR_10, VAR_4);
  FUNC_5(VAR_10, VAR_3);
 }

 FUNC_2(VAR_10);

 return VAR_10;
}
