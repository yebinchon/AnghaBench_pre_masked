
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {char* identity; size_t identity_len; int update_user; } ;
struct eap_identity_data {void* state; scalar_t__ pick_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_identity_data*,struct wpabuf*) ;
 int FUNC_2 (struct eap_sm*,char*,char*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int const*,size_t) ;
 int FUNC_6 (char*,size_t,int const*,size_t) ;
 int FUNC_7 (int ,char*,int const*,size_t) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_6, void *VAR_7,
     struct wpabuf *VAR_8)
{
 struct eap_identity_data *VAR_9 = VAR_7;
 const u8 *VAR_10;
 size_t VAR_11;
 char *VAR_12;

 if (VAR_9->pick_up) {
  if (FUNC_1(VAR_6, VAR_9, VAR_8)) {
   FUNC_8(VAR_3, "EAP-Identity: failed to pick "
       "up already started negotiation");
   VAR_9->state = VAR_2;
   return;
  }
  VAR_9->pick_up = 0;
 }

 VAR_10 = FUNC_0(VAR_1, VAR_0,
          VAR_8, &VAR_11);
 if (VAR_10 == ((void*)0))
  return;

 FUNC_7(VAR_3, "EAP-Identity: Peer identity", VAR_10, VAR_11);
 VAR_12 = FUNC_4(VAR_11 * 4 + 1);
 if (VAR_12) {
  FUNC_6(VAR_12, VAR_11 * 4 + 1, VAR_10, VAR_11);
  FUNC_2(VAR_6, "EAP-Response/Identity '%s'", VAR_12);
  FUNC_3(VAR_12);
 }
 if (VAR_6->identity)
  VAR_6->update_user = VAR_5;
 FUNC_3(VAR_6->identity);
 VAR_6->identity = FUNC_4(VAR_11 ? VAR_11 : 1);
 if (VAR_6->identity == ((void*)0)) {
  VAR_9->state = VAR_2;
 } else {
  FUNC_5(VAR_6->identity, VAR_10, VAR_11);
  VAR_6->identity_len = VAR_11;
  VAR_9->state = VAR_4;
 }
}
