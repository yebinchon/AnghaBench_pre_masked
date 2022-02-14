
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_hdr {int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*) ;
 struct eap_hdr* FUNC_2 (struct wpabuf*) ;

void FUNC_3(struct wpabuf *VAR_0)
{
 struct eap_hdr *VAR_1;
 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_1(VAR_0) < sizeof(*VAR_1))
  return;
 VAR_1->length = FUNC_0(FUNC_1(VAR_0));
}
