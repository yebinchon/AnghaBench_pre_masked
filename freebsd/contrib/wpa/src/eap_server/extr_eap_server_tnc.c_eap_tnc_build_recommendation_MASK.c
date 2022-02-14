
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_tnc_data {int recommendation; } ;
struct eap_sm {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 struct wpabuf* FUNC_0 (struct eap_sm*,struct eap_tnc_data*) ;
 int FUNC_1 (struct eap_tnc_data*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_sm *VAR_3,
          struct eap_tnc_data *VAR_4)
{
 switch (VAR_4->recommendation) {
 case 131:
  FUNC_1(VAR_4, VAR_0);
  break;
 case 130:
  FUNC_1(VAR_4, VAR_1);

  break;
 case 129:
  FUNC_1(VAR_4, VAR_1);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_0);
  break;
 default:
  FUNC_2(VAR_2, "EAP-TNC: Unknown recommendation");
  return ((void*)0);
 }

 return FUNC_0(VAR_3, VAR_4);
}
