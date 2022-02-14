
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_hdr {int identifier; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct eap_hdr* FUNC_1 (struct wpabuf const*) ;
 int FUNC_2 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_3(const struct wpabuf *VAR_1)
{
 const struct eap_hdr *VAR_2;

 if (VAR_1 == ((void*)0) || FUNC_2(VAR_1) < sizeof(*VAR_2))
  return -1;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_0, "EAP: getId: id=%d", VAR_2->identifier);
 return VAR_2->identifier;
}
