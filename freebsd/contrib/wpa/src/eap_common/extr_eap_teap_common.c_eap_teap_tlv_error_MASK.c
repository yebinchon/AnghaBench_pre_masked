
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum teap_error_codes { ____Placeholder_teap_error_codes } teap_error_codes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*,int) ;
 int FUNC_3 (struct wpabuf*,int) ;

struct wpabuf * FUNC_4(enum teap_error_codes VAR_3)
{
 struct wpabuf *VAR_4;

 VAR_4 = FUNC_1(4 + 4);
 if (!VAR_4)
  return ((void*)0);
 FUNC_0(VAR_0, "EAP-TEAP: Add Error TLV(Error Code=%d)",
     VAR_3);
 FUNC_2(VAR_4, VAR_2 | VAR_1);
 FUNC_2(VAR_4, 4);
 FUNC_3(VAR_4, VAR_3);
 return VAR_4;
}
