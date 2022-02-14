
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_parse_attr {int any_id_req; int perm_id_req; } ;
struct eap_sake_data {scalar_t__ state; scalar_t__ peerid_len; int peerid; } ;
struct eap_method_ret {int ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wpabuf*,int ,int ,scalar_t__) ;
 struct wpabuf* FUNC_1 (struct eap_sake_data*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int const*,size_t,struct eap_sake_parse_attr*) ;
 int FUNC_3 (struct eap_sake_data*,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_7,
       struct eap_sake_data *VAR_8,
       struct eap_method_ret *VAR_9,
       u8 VAR_10,
       const u8 *VAR_11,
       size_t VAR_12)
{
 struct eap_sake_parse_attr VAR_13;
 struct wpabuf *VAR_14;

 if (VAR_8->state != VAR_3) {
  VAR_9->ignore = VAR_6;
  return ((void*)0);
 }

 FUNC_4(VAR_4, "EAP-SAKE: Received Request/Identity");

 if (FUNC_2(VAR_11, VAR_12, &VAR_13))
  return ((void*)0);

 if (!VAR_13.perm_id_req && !VAR_13.any_id_req) {
  FUNC_4(VAR_5, "EAP-SAKE: No AT_PERM_ID_REQ or "
      "AT_ANY_ID_REQ in Request/Identity");
  return ((void*)0);
 }

 FUNC_4(VAR_4, "EAP-SAKE: Sending Response/Identity");

 VAR_14 = FUNC_1(VAR_8, VAR_10, 2 + VAR_8->peerid_len,
      VAR_2);
 if (VAR_14 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_4, "EAP-SAKE: * AT_PEERID");
 FUNC_0(VAR_14, VAR_1,
     VAR_8->peerid, VAR_8->peerid_len);

 FUNC_3(VAR_8, VAR_0);

 return VAR_14;
}
