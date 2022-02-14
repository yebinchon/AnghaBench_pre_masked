
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_hdr {int length; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct eap_hdr* FUNC_2 (struct wpabuf const*) ;
 size_t FUNC_3 (struct wpabuf const*) ;

int FUNC_4(const struct wpabuf *VAR_1, size_t VAR_2)
{
 const struct eap_hdr *VAR_3;
 size_t VAR_4;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_3 = FUNC_2(VAR_1);

 if (FUNC_3(VAR_1) < sizeof(*VAR_3)) {
  FUNC_1(VAR_0, "EAP: Too short EAP frame");
  return 0;
 }

 VAR_4 = FUNC_0(VAR_3->length);
 if (VAR_4 < sizeof(*VAR_3) + VAR_2 || VAR_4 > FUNC_3(VAR_1)) {
  FUNC_1(VAR_0, "EAP: Invalid EAP length");
  return 0;
 }

 return 1;
}
