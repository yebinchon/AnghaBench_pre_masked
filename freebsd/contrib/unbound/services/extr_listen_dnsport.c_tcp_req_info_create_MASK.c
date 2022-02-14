
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_info {struct sldns_buffer* spool_buffer; } ;
struct sldns_buffer {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct tcp_req_info*,int ,int) ;

struct tcp_req_info*
FUNC_3(struct sldns_buffer* VAR_0)
{
 struct tcp_req_info* VAR_1 = (struct tcp_req_info*)FUNC_1(sizeof(*VAR_1));
 if(!VAR_1) {
  FUNC_0("malloc failure for new stream outoforder processing structure");
  return ((void*)0);
 }
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->spool_buffer = VAR_0;
 return VAR_1;
}
