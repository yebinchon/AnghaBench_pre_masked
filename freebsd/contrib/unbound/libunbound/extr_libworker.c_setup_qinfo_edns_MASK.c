
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
struct query_info {int * local_alias; int qname; int qname_len; void* qclass; void* qtype; } ;
struct libworker {TYPE_2__* back; } ;
struct edns_data {int edns_present; int udp_size; int * opt_list; int bits; scalar_t__ edns_version; scalar_t__ ext_rcode; } ;
struct ctx_query {TYPE_1__* res; } ;
struct TYPE_4__ {int udp_buff; } ;
struct TYPE_3__ {int qname; scalar_t__ qclass; scalar_t__ qtype; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct libworker* VAR_1, struct ctx_query* VAR_2,
 struct query_info* VAR_3, struct edns_data* VAR_4)
{
 VAR_3->qtype = (uint16_t)VAR_2->res->qtype;
 VAR_3->qclass = (uint16_t)VAR_2->res->qclass;
 VAR_3->local_alias = ((void*)0);
 VAR_3->qname = FUNC_1(VAR_2->res->qname, &VAR_3->qname_len);
 if(!VAR_3->qname) {
  return 0;
 }
 VAR_3->local_alias = ((void*)0);
 VAR_4->edns_present = 1;
 VAR_4->ext_rcode = 0;
 VAR_4->edns_version = 0;
 VAR_4->bits = VAR_0;
 VAR_4->opt_list = ((void*)0);
 if(FUNC_0(VAR_1->back->udp_buff) < 65535)
  VAR_4->udp_size = (uint16_t)FUNC_0(
   VAR_1->back->udp_buff);
 else VAR_4->udp_size = 65535;
 return 1;
}
