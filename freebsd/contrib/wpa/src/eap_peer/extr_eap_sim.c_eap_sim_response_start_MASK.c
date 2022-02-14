
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_data {int reauth; size_t* reauth_id; size_t reauth_id_len; size_t* pseudonym; size_t pseudonym_len; size_t const* nonce_mt; size_t selected_version; } ;
typedef enum eap_sim_id_req { ____Placeholder_eap_sim_id_req } eap_sim_id_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t* FUNC_0 (struct eap_sm*,size_t*) ;
 scalar_t__ FUNC_1 (size_t*,size_t) ;
 int FUNC_2 (struct eap_sm*,struct eap_sim_data*,int) ;
 int FUNC_3 (struct eap_sim_msg*,int ,size_t,size_t const*,size_t) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 struct eap_sim_msg* FUNC_5 (int ,size_t,int ,int ) ;
 int FUNC_6 (int ,char*,size_t const*,size_t) ;
 int FUNC_7 (int ,char*,size_t const*,size_t) ;
 int FUNC_8 (int ,char*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_sm *VAR_14,
           struct eap_sim_data *VAR_15, u8 VAR_16,
           enum eap_sim_id_req VAR_17)
{
 const u8 *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;
 struct eap_sim_msg *VAR_20;

 VAR_15->reauth = 0;
 if (VAR_17 == VAR_0 && VAR_15->reauth_id) {
  VAR_18 = VAR_15->reauth_id;
  VAR_19 = VAR_15->reauth_id_len;
  VAR_15->reauth = 1;
 } else if ((VAR_17 == VAR_0 || VAR_17 == VAR_11) &&
     VAR_15->pseudonym &&
     !FUNC_1(VAR_15->pseudonym,
            VAR_15->pseudonym_len)) {
  VAR_18 = VAR_15->pseudonym;
  VAR_19 = VAR_15->pseudonym_len;
  FUNC_2(VAR_14, VAR_15, VAR_3);
 } else if (VAR_17 != VAR_13) {
  VAR_18 = FUNC_0(VAR_14, &VAR_19);
  if (VAR_18) {
   int VAR_21 = VAR_2 | VAR_3;

   if (VAR_15->pseudonym &&
       FUNC_1(VAR_15->pseudonym,
             VAR_15->pseudonym_len))
    VAR_21 &= ~VAR_2;
   FUNC_2(VAR_14, VAR_15, VAR_21);
  }
 }
 if (VAR_17 != VAR_13)
  FUNC_2(VAR_14, VAR_15, VAR_1);

 FUNC_8(VAR_12, "Generating EAP-SIM Start (id=%d)", VAR_16);
 VAR_20 = FUNC_5(VAR_4, VAR_16,
          VAR_10, VAR_9);
 if (!VAR_15->reauth) {
  FUNC_6(VAR_12, "   AT_NONCE_MT",
       VAR_15->nonce_mt, VAR_8);
  FUNC_3(VAR_20, VAR_6, 0,
    VAR_15->nonce_mt, VAR_8);
  FUNC_8(VAR_12, "   AT_SELECTED_VERSION %d",
      VAR_15->selected_version);
  FUNC_3(VAR_20, VAR_7,
    VAR_15->selected_version, ((void*)0), 0);
 }

 if (VAR_18) {
  FUNC_7(VAR_12, "   AT_IDENTITY",
      VAR_18, VAR_19);
  FUNC_3(VAR_20, VAR_5, VAR_19,
    VAR_18, VAR_19);
 }

 return FUNC_4(VAR_20, VAR_10, ((void*)0), ((void*)0), 0);
}
