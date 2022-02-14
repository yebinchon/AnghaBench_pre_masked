
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__* identity; scalar_t__ identity_len; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int start_round; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct eap_sim_msg*,int ,int,scalar_t__*,int) ;
 struct wpabuf* FUNC_1 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 int FUNC_2 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_10,
        struct eap_sim_data *VAR_11, u8 VAR_12)
{
 struct eap_sim_msg *VAR_13;
 u8 VAR_14[2];

 FUNC_4(VAR_9, "EAP-SIM: Generating Start");
 VAR_13 = FUNC_3(VAR_0, VAR_12, VAR_8,
          VAR_6);
 VAR_11->start_round++;
 if (VAR_11->start_round == 1) {




  FUNC_4(VAR_9, "   AT_ANY_ID_REQ");
  FUNC_0(VAR_13, VAR_1, 0, ((void*)0), 0);
 } else if (VAR_11->start_round > 3) {

  FUNC_2(VAR_13);
  return ((void*)0);
 } else if (VAR_11->start_round == 0) {






 } else if (VAR_10->identity && VAR_10->identity_len > 0 &&
     VAR_10->identity[0] == VAR_5) {

  FUNC_4(VAR_9, "   AT_FULLAUTH_ID_REQ");
  FUNC_0(VAR_13, VAR_2, 0, ((void*)0), 0);
 } else {
  FUNC_4(VAR_9, "   AT_PERMANENT_ID_REQ");
  FUNC_0(VAR_13, VAR_3, 0, ((void*)0), 0);
 }
 FUNC_4(VAR_9, "   AT_VERSION_LIST");
 VAR_14[0] = 0;
 VAR_14[1] = VAR_7;
 FUNC_0(VAR_13, VAR_4, sizeof(VAR_14),
   VAR_14, sizeof(VAR_14));
 return FUNC_1(VAR_13, VAR_8, ((void*)0), ((void*)0), 0);
}
