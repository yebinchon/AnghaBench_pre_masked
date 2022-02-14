
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct gas_server_response {int freq; size_t offset; int dst; int resp; int list; int frag_id; int dialog_token; struct gas_server_handler* handler; } ;
struct gas_server_handler {int adv_proto_id_len; size_t adv_proto_id; struct gas_server* gas; } ;
struct gas_server {int ctx; int (* tx ) (int ,int,int ,struct wpabuf*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct wpabuf* FUNC_1 (int ,int ,int ,int,int ,size_t) ;
 int FUNC_2 (struct gas_server_response*) ;
 int FUNC_3 (int ,int,int ,struct wpabuf*,int) ;
 int FUNC_4 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_5 (struct wpabuf*) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (struct wpabuf*,size_t,size_t) ;
 int FUNC_9 (struct wpabuf*,size_t) ;
 int FUNC_10 (struct wpabuf*,int) ;

__attribute__((used)) static void
FUNC_11(struct gas_server_response *VAR_3)
{
 struct gas_server_handler *VAR_4 = VAR_3->handler;
 struct gas_server *VAR_5 = VAR_4->gas;
 size_t VAR_6 = (VAR_3->freq > 56160) ? 928 : 1400;
 size_t VAR_7 = 24 + 2 + 6 + 3 + VAR_4->adv_proto_id_len + 2;
 size_t VAR_8, VAR_9;
 struct wpabuf *VAR_10;

 VAR_8 = FUNC_7(VAR_3->resp) - VAR_3->offset;
 if (VAR_7 + VAR_8 > VAR_6)
  VAR_9 = VAR_6 - VAR_7;
 else
  VAR_9 = VAR_8;
 FUNC_4(VAR_0,
     "GAS: Sending out %u/%u remaining Query Response octets",
     (unsigned int) VAR_9, (unsigned int) VAR_8);

 VAR_10 = FUNC_1(VAR_3->dialog_token,
           VAR_2,
           VAR_3->frag_id++,
           VAR_9 < VAR_8, 0,
           VAR_4->adv_proto_id_len +
           VAR_9);
 if (!VAR_10) {
  FUNC_0(&VAR_3->list);
  FUNC_2(VAR_3);
  return;
 }


 FUNC_10(VAR_10, VAR_1);
 FUNC_10(VAR_10, 1 + VAR_4->adv_proto_id_len);
 FUNC_10(VAR_10, 0x7f);

 FUNC_8(VAR_10, VAR_4->adv_proto_id, VAR_4->adv_proto_id_len);


 FUNC_9(VAR_10, VAR_9);
 FUNC_8(VAR_10, FUNC_6(VAR_3->resp) + VAR_3->offset,
   VAR_9);

 VAR_3->offset += VAR_9;

 VAR_5->tx(VAR_5->ctx, VAR_3->freq, VAR_3->dst, VAR_10,
  VAR_8 > VAR_9 ? 2000 : 0);
 FUNC_5(VAR_10);
}
