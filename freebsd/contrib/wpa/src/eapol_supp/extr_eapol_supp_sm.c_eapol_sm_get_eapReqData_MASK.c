
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eapol_sm {struct wpabuf* eapReqData; } ;



__attribute__((used)) static struct wpabuf * FUNC_0(void *VAR_0)
{
 struct eapol_sm *VAR_1 = VAR_0;
 if (VAR_1 == ((void*)0) || VAR_1->eapReqData == ((void*)0))
  return ((void*)0);

 return VAR_1->eapReqData;
}
