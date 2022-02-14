
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {struct wpabuf* eapRespData; } ;



struct wpabuf * FUNC_0(struct eap_sm *VAR_0)
{
 struct wpabuf *VAR_1;

 if (VAR_0 == ((void*)0) || VAR_0->eapRespData == ((void*)0))
  return ((void*)0);

 VAR_1 = VAR_0->eapRespData;
 VAR_0->eapRespData = ((void*)0);

 return VAR_1;
}
