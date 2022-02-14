
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {struct radius_server_data* server; } ;
struct radius_server_data {size_t eap_req_id_text_len; char const* eap_req_id_text; } ;



__attribute__((used)) static const char * FUNC_0(void *VAR_0, size_t *VAR_1)
{
 struct radius_session *VAR_2 = VAR_0;
 struct radius_server_data *VAR_3 = VAR_2->server;
 *VAR_1 = VAR_3->eap_req_id_text_len;
 return VAR_3->eap_req_id_text;
}
