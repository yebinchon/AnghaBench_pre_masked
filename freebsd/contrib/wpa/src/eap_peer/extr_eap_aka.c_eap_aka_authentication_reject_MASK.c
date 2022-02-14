
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int eap_method; scalar_t__ num_notification; scalar_t__ num_id_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_aka_data*,int ) ;
 struct wpabuf* FUNC_1 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 struct eap_sim_msg* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_aka_data *VAR_4,
           u8 VAR_5)
{
 struct eap_sim_msg *VAR_6;

 FUNC_0(VAR_4, VAR_2);
 VAR_4->num_id_req = 0;
 VAR_4->num_notification = 0;

 FUNC_3(VAR_3, "Generating EAP-AKA Authentication-Reject "
     "(id=%d)", VAR_5);
 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_4->eap_method,
          VAR_0);
 return FUNC_1(VAR_6, VAR_4->eap_method, ((void*)0), ((void*)0), 0);
}
