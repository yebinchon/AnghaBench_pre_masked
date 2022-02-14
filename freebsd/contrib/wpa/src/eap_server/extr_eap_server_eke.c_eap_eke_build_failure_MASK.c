
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_eke_data {int failure_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (struct eap_eke_data*,int ,int,int ) ;
 int FUNC_1 (struct eap_eke_data*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_eke_data *VAR_3, u8 VAR_4)
{
 struct wpabuf *VAR_5;

 FUNC_2(VAR_2, "EAP-EKE: Request/Failure: Failure-Code=0x%x",
     VAR_3->failure_code);

 VAR_5 = FUNC_0(VAR_3, VAR_4, 4, VAR_0);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_3, VAR_1);
  return ((void*)0);
 }
 FUNC_3(VAR_5, VAR_3->failure_code);

 return VAR_5;
}
