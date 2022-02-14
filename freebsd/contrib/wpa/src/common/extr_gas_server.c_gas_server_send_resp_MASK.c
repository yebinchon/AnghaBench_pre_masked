
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct gas_server_response {int freq; size_t offset; int list; struct wpabuf* resp; int dialog_token; int dst; struct gas_server_handler* handler; } ;
struct gas_server_handler {int adv_proto_id_len; int adv_proto_id; } ;
struct gas_server {int ctx; int (* tx ) (int ,int,int const*,struct wpabuf*,int) ;int responses; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ,struct gas_server_response*,int *) ;
 struct wpabuf* FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct gas_server_response*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int const*,int ) ;
 struct gas_server_response* FUNC_5 (int) ;
 int FUNC_6 (int ,int,int const*,struct wpabuf*,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 size_t FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*,int ,int) ;
 int FUNC_12 (struct wpabuf*,size_t) ;
 int FUNC_13 (struct wpabuf*,int) ;

__attribute__((used)) static void
FUNC_14(struct gas_server *VAR_6, struct gas_server_handler *VAR_7,
       const u8 *VAR_8, int VAR_9, u8 VAR_10,
       struct wpabuf *VAR_11)
{
 size_t VAR_12 = (VAR_9 > 56160) ? 928 : 1400;
 size_t VAR_13 = 24 + 2 + 5 + 3 + VAR_7->adv_proto_id_len + 2;
 size_t VAR_14;
 struct wpabuf *VAR_15;
 u16 VAR_16;
 struct gas_server_response *VAR_17;

 if (!VAR_11)
  return;

 VAR_17 = FUNC_5(sizeof(*VAR_17));
 if (!VAR_17) {
  FUNC_8(VAR_11);
  return;
 }
 FUNC_7(VAR_2, "DPP: Allocated GAS response @%p", VAR_17);
 VAR_17->freq = VAR_9;
 VAR_17->handler = VAR_7;
 FUNC_4(VAR_17->dst, VAR_8, VAR_0);
 VAR_17->dialog_token = VAR_10;
 if (VAR_13 + FUNC_9(VAR_11) > VAR_12) {

  VAR_16 = 1;
  VAR_14 = 0;
 } else {

  VAR_16 = 0;
  VAR_14 = FUNC_9(VAR_11);
 }

 VAR_15 = FUNC_2(VAR_10, VAR_4,
          VAR_16,
          VAR_7->adv_proto_id_len +
          VAR_14);
 if (!VAR_15) {
  FUNC_8(VAR_11);
  FUNC_3(VAR_17);
  return;
 }


 FUNC_13(VAR_15, VAR_3);
 FUNC_13(VAR_15, 1 + VAR_7->adv_proto_id_len);
 FUNC_13(VAR_15, 0x7f);

 FUNC_11(VAR_15, VAR_7->adv_proto_id, VAR_7->adv_proto_id_len);


 FUNC_12(VAR_15, VAR_14);
 if (!VAR_16)
  FUNC_10(VAR_15, VAR_11);

 if (VAR_16) {
  FUNC_7(VAR_2,
      "GAS: Need to fragment query response");
 } else {
  FUNC_7(VAR_2,
      "GAS: Full query response fits in the GAS Initial Response frame");
 }
 VAR_17->offset = VAR_14;
 VAR_17->resp = VAR_11;
 FUNC_0(&VAR_6->responses, &VAR_17->list);
 VAR_6->tx(VAR_6->ctx, VAR_9, VAR_8, VAR_15, VAR_16 ? 2000 : 0);
 FUNC_8(VAR_15);
 FUNC_1(VAR_1, 0,
          VAR_5, VAR_17, ((void*)0));
}
