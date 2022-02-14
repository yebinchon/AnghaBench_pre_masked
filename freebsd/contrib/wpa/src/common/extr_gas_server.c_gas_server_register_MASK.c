
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gas_server_handler {struct wpabuf* (* req_cb ) (void*,int const*,int const*,size_t) ;void (* status_cb ) (void*,struct wpabuf*,int) ;int list; struct gas_server* gas; void* ctx; int adv_proto_id_len; int adv_proto_id; } ;
struct gas_server {int handlers; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int const*,int ) ;
 struct gas_server_handler* FUNC_2 (int) ;

int FUNC_3(struct gas_server *VAR_1,
   const u8 *VAR_2, u8 VAR_3,
   struct wpabuf *
   (*VAR_4)(void *VAR_5, const u8 *VAR_6,
      const u8 *VAR_7, size_t VAR_8),
   void (*VAR_9)(void *VAR_10, struct wpabuf *VAR_11,
       int VAR_12),
   void *VAR_13)
{
 struct gas_server_handler *VAR_14;

 if (!VAR_1 || VAR_3 > VAR_0)
  return -1;
 VAR_14 = FUNC_2(sizeof(*VAR_14));
 if (!VAR_14)
  return -1;

 FUNC_1(VAR_14->adv_proto_id, VAR_2, VAR_3);
 VAR_14->adv_proto_id_len = VAR_3;
 VAR_14->req_cb = VAR_4;
 VAR_14->status_cb = VAR_9;
 VAR_14->ctx = VAR_13;
 VAR_14->gas = VAR_1;
 FUNC_0(&VAR_1->handlers, &VAR_14->list);

 return 0;
}
