
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct eap_method_ret {int allowNotifications; int decision; int methodState; } ;
struct eap_eke_data {int sess; int dh_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wpabuf* FUNC_0 (struct eap_eke_data*,int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct eap_eke_data*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_eke_data *VAR_6,
       struct eap_method_ret *VAR_7,
       u8 VAR_8, u32 VAR_9)
{
 struct wpabuf *VAR_10;

 FUNC_4(VAR_5, "EAP-EKE: Sending EAP-EKE-Failure/Response - code=0x%x",
     VAR_9);

 VAR_10 = FUNC_0(VAR_6, VAR_8, 4, VAR_1);
 if (VAR_10)
  FUNC_5(VAR_10, VAR_9);

 FUNC_3(VAR_6->dh_priv, 0, sizeof(VAR_6->dh_priv));
 FUNC_1(&VAR_6->sess);

 FUNC_2(VAR_6, VAR_2);
 VAR_7->methodState = VAR_4;
 VAR_7->decision = VAR_0;
 VAR_7->allowNotifications = VAR_3;

 return VAR_10;
}
