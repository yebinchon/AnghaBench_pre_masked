
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef struct wpabuf const wpabuf ;
struct eap_sm {int dummy; } ;
struct eap_sim_attrs {int id_req; } ;
struct eap_aka_data {int num_id_req; scalar_t__ prev_id; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct eap_aka_data*,struct wpabuf const*) ;
 struct wpabuf const* FUNC_1 (struct eap_aka_data*,scalar_t__,int ) ;
 struct wpabuf const* FUNC_2 (struct eap_sm*,struct eap_aka_data*,scalar_t__,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_3,
      struct eap_aka_data *VAR_4,
      u8 VAR_5,
      const struct wpabuf *VAR_6,
      struct eap_sim_attrs *VAR_7)
{
 int VAR_8;
 struct wpabuf *VAR_9;

 FUNC_3(VAR_1, "EAP-AKA: subtype Identity");

 VAR_8 = 0;
 switch (VAR_7->id_req) {
 case 129:
  break;
 case 131:
  if (VAR_4->num_id_req > 0)
   VAR_8++;
  VAR_4->num_id_req++;
  break;
 case 130:
  if (VAR_4->num_id_req > 1)
   VAR_8++;
  VAR_4->num_id_req++;
  break;
 case 128:
  if (VAR_4->num_id_req > 2)
   VAR_8++;
  VAR_4->num_id_req++;
  break;
 }
 if (VAR_8) {
  FUNC_3(VAR_2, "EAP-AKA: Too many ID requests "
      "used within one authentication");
  return FUNC_1(VAR_4, VAR_5,
         VAR_0);
 }

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7->id_req);

 if (VAR_4->prev_id != VAR_5) {
  FUNC_0(VAR_4, VAR_6);
  FUNC_0(VAR_4, VAR_9);
  VAR_4->prev_id = VAR_5;
 }

 return VAR_9;
}
