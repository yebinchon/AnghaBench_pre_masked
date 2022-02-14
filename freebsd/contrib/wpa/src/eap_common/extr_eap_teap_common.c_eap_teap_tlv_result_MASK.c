
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct teap_tlv_result {void* status; void* length; void* tlv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 struct wpabuf* FUNC_2 (int) ;
 struct teap_tlv_result* FUNC_3 (struct wpabuf*,int) ;

struct wpabuf * FUNC_4(int VAR_6, int VAR_7)
{
 struct wpabuf *VAR_8;
 struct teap_tlv_result *VAR_9;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return ((void*)0);

 VAR_8 = FUNC_2(sizeof(*VAR_9));
 if (!VAR_8)
  return ((void*)0);
 FUNC_1(VAR_0, "EAP-TEAP: Add %sResult TLV(status=%s)",
     VAR_7 ? "Intermediate-" : "",
     VAR_6 == VAR_2 ? "Success" : "Failure");
 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9));
 VAR_9->tlv_type = FUNC_0(VAR_4 |
     (VAR_7 ?
      VAR_3 :
      VAR_5));
 VAR_9->length = FUNC_0(2);
 VAR_9->status = FUNC_0(VAR_6);
 return VAR_8;
}
