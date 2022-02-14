
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct eap_eke_data {int serverid_type; struct wpabuf* msgs; } ;


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
 struct wpabuf* FUNC_0 (struct eap_eke_data*,int ,size_t,int ) ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int ,int) ;
 int FUNC_5 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_10,
           struct eap_eke_data *VAR_11,
           u8 VAR_12)
{
 struct wpabuf *VAR_13;
 size_t VAR_14;

 FUNC_1(VAR_9, "EAP-EKE: Request/Identity");

 VAR_14 = 2 + 4 * 4 + 1 + VAR_10->server_id_len;
 VAR_13 = FUNC_0(VAR_11, VAR_12, VAR_14, VAR_4);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 FUNC_5(VAR_13, 4);
 FUNC_5(VAR_13, 0);


 FUNC_5(VAR_13, VAR_2);
 FUNC_5(VAR_13, VAR_3);
 FUNC_5(VAR_13, VAR_8);
 FUNC_5(VAR_13, VAR_6);


 FUNC_5(VAR_13, VAR_1);
 FUNC_5(VAR_13, VAR_3);
 FUNC_5(VAR_13, VAR_8);
 FUNC_5(VAR_13, VAR_6);


 FUNC_5(VAR_13, VAR_0);
 FUNC_5(VAR_13, VAR_3);
 FUNC_5(VAR_13, VAR_8);
 FUNC_5(VAR_13, VAR_6);





 FUNC_5(VAR_13, VAR_0);
 FUNC_5(VAR_13, VAR_3);
 FUNC_5(VAR_13, VAR_7);
 FUNC_5(VAR_13, VAR_5);


 FUNC_5(VAR_13, VAR_11->serverid_type);
 FUNC_4(VAR_13, VAR_10->server_id, VAR_10->server_id_len);

 FUNC_3(VAR_11->msgs);
 VAR_11->msgs = FUNC_2(VAR_13);
 if (VAR_11->msgs == ((void*)0)) {
  FUNC_3(VAR_13);
  return ((void*)0);
 }

 return VAR_13;
}
