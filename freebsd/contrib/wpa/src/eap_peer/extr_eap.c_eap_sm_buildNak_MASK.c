
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ reqMethod; int reqVendorMethod; int reqVendor; } ;
struct eap_method {scalar_t__ vendor; scalar_t__ method; struct eap_method* next; } ;
struct eap_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct eap_sm*,scalar_t__,scalar_t__) ;
 struct wpabuf* FUNC_1 (scalar_t__,int ,int,int ,int) ;
 struct eap_method* FUNC_2 (size_t*) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,int,struct eap_method const*,size_t) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,scalar_t__,int ,int ) ;
 int * FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_sm *VAR_6, int VAR_7)
{
 struct wpabuf *VAR_8;
 u8 *VAR_9;
 int VAR_10 = 0, VAR_11 = 0;
 size_t VAR_12;
 const struct eap_method *VAR_13, *VAR_14;

 FUNC_6(VAR_5, "EAP: Building EAP-Nak (requested type %u "
     "vendor=%u method=%u not allowed)", VAR_6->reqMethod,
     VAR_6->reqVendor, VAR_6->reqVendorMethod);
 VAR_13 = FUNC_2(&VAR_12);
 if (VAR_13 == ((void*)0))
  return ((void*)0);
 if (VAR_6->reqMethod == VAR_1)
  return FUNC_3(VAR_6, VAR_7, VAR_13, VAR_12);


 VAR_8 = FUNC_1(VAR_4, VAR_2,
        sizeof(struct eap_hdr) + 1 + VAR_12 + 1,
        VAR_0, VAR_7);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_9 = FUNC_7(VAR_8, 0);
 for (VAR_14 = VAR_13; VAR_14; VAR_14 = VAR_14->next) {
  if (VAR_14->vendor == VAR_4 && VAR_14->method == VAR_6->reqMethod)
   continue;
  if (FUNC_0(VAR_6, VAR_14->vendor, VAR_14->method)) {
   if (VAR_14->vendor != VAR_4) {
    if (VAR_11)
     continue;
    VAR_11 = 1;
    FUNC_8(VAR_8, VAR_1);
   } else
    FUNC_8(VAR_8, VAR_14->method);
   VAR_10++;
  }
 }
 if (!VAR_10)
  FUNC_8(VAR_8, VAR_3);
 FUNC_5(VAR_5, "EAP: allowed methods", VAR_9, VAR_10);

 FUNC_4(VAR_8);

 return VAR_8;
}
