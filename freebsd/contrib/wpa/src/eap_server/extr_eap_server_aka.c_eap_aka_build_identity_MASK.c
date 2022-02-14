
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__* identity; scalar_t__ identity_len; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int identity_round; int pending_id; int eap_method; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct eap_aka_data*,struct wpabuf*) ;
 int FUNC_1 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 struct wpabuf* FUNC_2 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 int FUNC_3 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_7(struct eap_sm *VAR_8,
           struct eap_aka_data *VAR_9, u8 VAR_10)
{
 struct eap_sim_msg *VAR_11;
 struct wpabuf *VAR_12;

 FUNC_5(VAR_7, "EAP-AKA: Generating Identity");
 VAR_11 = FUNC_4(VAR_3, VAR_10, VAR_9->eap_method,
          VAR_2);
 VAR_9->identity_round++;
 if (VAR_9->identity_round == 1) {





  FUNC_5(VAR_7, "   AT_ANY_ID_REQ");
  FUNC_1(VAR_11, VAR_4, 0, ((void*)0), 0);
 } else if (VAR_9->identity_round > 3) {

  FUNC_3(VAR_11);
  return ((void*)0);
 } else if (VAR_8->identity && VAR_8->identity_len > 0 &&
     (VAR_8->identity[0] == VAR_1 ||
      VAR_8->identity[0] == VAR_0)) {

  FUNC_5(VAR_7, "   AT_FULLAUTH_ID_REQ");
  FUNC_1(VAR_11, VAR_5, 0, ((void*)0), 0);
 } else {
  FUNC_5(VAR_7, "   AT_PERMANENT_ID_REQ");
  FUNC_1(VAR_11, VAR_6, 0, ((void*)0), 0);
 }
 VAR_12 = FUNC_2(VAR_11, VAR_9->eap_method, ((void*)0), ((void*)0), 0);
 if (FUNC_0(VAR_9, VAR_12) < 0) {
  FUNC_6(VAR_12);
  return ((void*)0);
 }
 VAR_9->pending_id = VAR_10;
 return VAR_12;
}
