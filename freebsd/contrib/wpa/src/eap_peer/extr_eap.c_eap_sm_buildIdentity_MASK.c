
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int eap_method_priv; TYPE_1__* m; } ;
struct eap_peer_config {size_t anonymous_identity_len; size_t identity_len; int * identity; scalar_t__ pcsc; int * anonymous_identity; } ;
struct TYPE_2__ {int * (* get_identity ) (struct eap_sm*,int ,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 struct wpabuf* FUNC_1 (int ,int ,size_t,int ,int) ;
 scalar_t__ FUNC_2 (struct eap_sm*,struct eap_peer_config*) ;
 int FUNC_3 (struct eap_sm*) ;
 scalar_t__ FUNC_4 (struct eap_sm*,struct eap_peer_config*) ;
 int * FUNC_5 (struct eap_sm*,int ,size_t*) ;
 int FUNC_6 (int ,char*,int const*,size_t) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpabuf*,int const*,size_t) ;

struct wpabuf * FUNC_9(struct eap_sm *VAR_5, int VAR_6, int VAR_7)
{
 struct eap_peer_config *VAR_8 = FUNC_0(VAR_5);
 struct wpabuf *VAR_9;
 const u8 *VAR_10;
 size_t VAR_11;

 if (VAR_8 == ((void*)0)) {
  FUNC_7(VAR_4, "EAP: buildIdentity: configuration "
      "was not available");
  return ((void*)0);
 }

 if (VAR_5->m && VAR_5->m->get_identity &&
     (VAR_10 = VAR_5->m->get_identity(VAR_5, VAR_5->eap_method_priv,
         &VAR_11)) != ((void*)0)) {
  FUNC_6(VAR_3, "EAP: using method re-auth "
      "identity", VAR_10, VAR_11);
 } else if (!VAR_7 && VAR_8->anonymous_identity) {
  VAR_10 = VAR_8->anonymous_identity;
  VAR_11 = VAR_8->anonymous_identity_len;
  FUNC_6(VAR_3, "EAP: using anonymous identity",
      VAR_10, VAR_11);
 } else {
  VAR_10 = VAR_8->identity;
  VAR_11 = VAR_8->identity_len;
  FUNC_6(VAR_3, "EAP: using real identity",
      VAR_10, VAR_11);
 }

 if (VAR_8->pcsc) {
  return ((void*)0);

 } else if (!VAR_10) {
  FUNC_7(VAR_4,
   "EAP: buildIdentity: identity configuration was not available");
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_9 = FUNC_1(VAR_2, VAR_1, VAR_11,
        VAR_0, VAR_6);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 FUNC_8(VAR_9, VAR_10, VAR_11);

 return VAR_9;
}
