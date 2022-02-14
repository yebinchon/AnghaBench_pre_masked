
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_method_type {scalar_t__ vendor; int method; } ;
struct eap_hdr {int identifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (scalar_t__,int ,size_t,int ,int ) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (int ,char*,int *,size_t) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct wpabuf*,int) ;

int FUNC_5(struct eap_method_type *VAR_4, size_t VAR_5,
       struct eap_hdr *VAR_6, struct wpabuf **VAR_7)
{
 u8 *VAR_8 = (u8 *) (VAR_6 + 1);
 size_t VAR_9;


 FUNC_3(VAR_3, "TLS: Phase 2 Request: Nak type=%d", *VAR_8);
 FUNC_2(VAR_3, "TLS: Allowed Phase2 EAP types",
      (u8 *) VAR_4, VAR_5 * sizeof(struct eap_method_type));
 *VAR_7 = FUNC_0(VAR_2, VAR_1, VAR_5,
         VAR_0, VAR_6->identifier);
 if (*VAR_7 == ((void*)0))
  return -1;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_4[VAR_9].vendor == VAR_2 &&
      VAR_4[VAR_9].method < 256)
   FUNC_4(*VAR_7, VAR_4[VAR_9].method);
 }

 FUNC_1(*VAR_7);

 return 0;
}
