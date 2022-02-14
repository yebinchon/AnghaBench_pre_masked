
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct serviced_query {struct serviced_query* cblist; struct serviced_query* next; void* cb_arg; int * cb; struct serviced_query* zone; struct serviced_query* qbuf; } ;
struct service_callback {struct service_callback* cblist; struct service_callback* next; void* cb_arg; int * cb; struct service_callback* zone; struct service_callback* qbuf; } ;
struct query_info {scalar_t__ qtype; int qclass; int qname_len; int qname; } ;
struct outside_network {int serviced; scalar_t__ do_udp; } ;
struct module_qstate {int edns_opts_back_out; int region; } ;
struct module_env {int dummy; } ;
typedef int socklen_t ;
typedef int sldns_buffer ;
typedef int comm_point_callback_type ;


 int FUNC_0 (struct serviced_query*) ;
 int FUNC_1 (struct module_env*,struct query_info*,int ,struct sockaddr_storage*,int ,int *,size_t,struct module_qstate*,int ) ;
 struct serviced_query* FUNC_2 (struct outside_network*,int *,int,struct sockaddr_storage*,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct serviced_query*) ;
 struct serviced_query* FUNC_5 (struct outside_network*,int *,int,int,int,int,int,char*,struct sockaddr_storage*,int ,int *,size_t,int,int ) ;
 int FUNC_6 (int *,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (struct serviced_query*,int *) ;
 int FUNC_8 (struct serviced_query*,int *) ;

struct serviced_query*
FUNC_9(struct outside_network* VAR_0,
 struct query_info* VAR_1, uint16_t VAR_2, int VAR_3, int VAR_4,
 int VAR_5, int VAR_6, int VAR_7, char* VAR_8,
 struct sockaddr_storage* VAR_9, socklen_t VAR_10, uint8_t* VAR_11,
 size_t VAR_12, struct module_qstate* VAR_13,
 comm_point_callback_type* VAR_14, void* VAR_15, sldns_buffer* VAR_16,
 struct module_env* VAR_17)
{
 struct serviced_query* VAR_18;
 struct service_callback* VAR_19;
 if(!FUNC_1(VAR_17, VAR_1, VAR_2, VAR_9, VAR_10, VAR_11, VAR_12,
  VAR_13, VAR_13->region))
   return ((void*)0);
 FUNC_6(VAR_16, VAR_1->qname, VAR_1->qname_len, VAR_1->qtype,
  VAR_1->qclass, VAR_2);
 VAR_18 = FUNC_2(VAR_0, VAR_16, VAR_3, VAR_9, VAR_10,
  VAR_13->edns_opts_back_out);



 if(!(VAR_19 = (struct service_callback*)FUNC_3(sizeof(*VAR_19))))
  return ((void*)0);
 if(!VAR_18) {

  VAR_18 = FUNC_5(VAR_0, VAR_16, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7, VAR_8, VAR_9,
   VAR_10, VAR_11, VAR_12, (int)VAR_1->qtype,
   VAR_13->edns_opts_back_out);
  if(!VAR_18) {
   FUNC_0(VAR_19);
   return ((void*)0);
  }

  if(VAR_0->do_udp && !(VAR_6 || VAR_7)) {
   if(!FUNC_8(VAR_18, VAR_16)) {
    (void)FUNC_4(VAR_0->serviced, VAR_18);
    FUNC_0(VAR_18->qbuf);
    FUNC_0(VAR_18->zone);
    FUNC_0(VAR_18);
    FUNC_0(VAR_19);
    return ((void*)0);
   }
  } else {
   if(!FUNC_7(VAR_18, VAR_16)) {
    (void)FUNC_4(VAR_0->serviced, VAR_18);
    FUNC_0(VAR_18->qbuf);
    FUNC_0(VAR_18->zone);
    FUNC_0(VAR_18);
    FUNC_0(VAR_19);
    return ((void*)0);
   }
  }
 }

 VAR_19->cb = VAR_14;
 VAR_19->cb_arg = VAR_15;
 VAR_19->next = VAR_18->cblist;
 VAR_18->cblist = VAR_19;
 return VAR_18;
}
