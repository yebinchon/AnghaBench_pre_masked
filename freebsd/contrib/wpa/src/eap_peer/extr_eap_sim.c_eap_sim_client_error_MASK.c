
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {scalar_t__ num_notification; scalar_t__ num_id_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct eap_sim_msg*,int ,int,int *,int ) ;
 struct wpabuf* FUNC_1 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 struct eap_sim_msg* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct eap_sim_data*,int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sim_data *VAR_6, u8 VAR_7,
         int VAR_8)
{
 struct eap_sim_msg *VAR_9;

 FUNC_3(VAR_6, VAR_4);
 VAR_6->num_id_req = 0;
 VAR_6->num_notification = 0;

 FUNC_4(VAR_5, "EAP-SIM: Send Client-Error (error code %d)",
     VAR_8);
 VAR_9 = FUNC_2(VAR_0, VAR_7, VAR_3,
          VAR_2);
 FUNC_0(VAR_9, VAR_1, VAR_8, ((void*)0), 0);
 return FUNC_1(VAR_9, VAR_3, ((void*)0), ((void*)0), 0);
}
