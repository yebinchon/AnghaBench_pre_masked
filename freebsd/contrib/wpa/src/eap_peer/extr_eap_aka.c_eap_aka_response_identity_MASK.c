
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_aka_data {int reauth; size_t reauth_id_len; size_t pseudonym_len; int eap_method; int * pseudonym; int * reauth_id; } ;
typedef enum eap_sim_id_req { ____Placeholder_eap_sim_id_req } eap_sim_id_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct eap_sm*,struct eap_aka_data*,int) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (struct eap_sim_msg*,int ,size_t,int const*,size_t) ;
 struct wpabuf* FUNC_4 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 struct eap_sim_msg* FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_10,
       struct eap_aka_data *VAR_11,
       u8 VAR_12,
       enum eap_sim_id_req VAR_13)
{
 const u8 *VAR_14 = ((void*)0);
 size_t VAR_15 = 0;
 struct eap_sim_msg *VAR_16;

 VAR_11->reauth = 0;
 if (VAR_13 == VAR_0 && VAR_11->reauth_id) {
  VAR_14 = VAR_11->reauth_id;
  VAR_15 = VAR_11->reauth_id_len;
  VAR_11->reauth = 1;
 } else if ((VAR_13 == VAR_0 || VAR_13 == VAR_7) &&
     VAR_11->pseudonym &&
     !FUNC_2(VAR_11->pseudonym,
            VAR_11->pseudonym_len)) {
  VAR_14 = VAR_11->pseudonym;
  VAR_15 = VAR_11->pseudonym_len;
  FUNC_0(VAR_10, VAR_11, VAR_3);
 } else if (VAR_13 != VAR_9) {
  VAR_14 = FUNC_1(VAR_10, &VAR_15);
  if (VAR_14) {
   int VAR_17 = VAR_2 | VAR_3;

   if (VAR_11->pseudonym &&
       FUNC_2(VAR_11->pseudonym,
             VAR_11->pseudonym_len))
    VAR_17 &= ~VAR_2;
   FUNC_0(VAR_10, VAR_11, VAR_17);
  }
 }
 if (VAR_13 != VAR_9)
  FUNC_0(VAR_10, VAR_11, VAR_1);

 FUNC_7(VAR_8, "Generating EAP-AKA Identity (id=%d)", VAR_12);
 VAR_16 = FUNC_5(VAR_5, VAR_12, VAR_11->eap_method,
          VAR_4);

 if (VAR_14) {
  FUNC_6(VAR_8, "   AT_IDENTITY",
      VAR_14, VAR_15);
  FUNC_3(VAR_16, VAR_6, VAR_15,
    VAR_14, VAR_15);
 }

 return FUNC_4(VAR_16, VAR_11->eap_method, ((void*)0), ((void*)0), 0);
}
