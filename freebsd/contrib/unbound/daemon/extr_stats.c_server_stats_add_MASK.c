
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_query_list_size; scalar_t__* hist; scalar_t__* ans_rcode; scalar_t__* qopcode; scalar_t__* qclass; scalar_t__* qtype; scalar_t__ tcp_accept_usage; scalar_t__ unwanted_queries; scalar_t__ unwanted_replies; scalar_t__ ans_bogus; scalar_t__ ans_secure; scalar_t__ zero_ttl_responses; scalar_t__ ans_rcode_nodata; scalar_t__ qEDNS_DO; scalar_t__ qEDNS; scalar_t__ qbit_CD; scalar_t__ qbit_AD; scalar_t__ qbit_Z; scalar_t__ qbit_RA; scalar_t__ qbit_RD; scalar_t__ qbit_TC; scalar_t__ qbit_AA; scalar_t__ qbit_QR; scalar_t__ qipv6; scalar_t__ qtls_resume; scalar_t__ qtls; scalar_t__ qtcp_outgoing; scalar_t__ qtcp; scalar_t__ qclass_big; scalar_t__ qtype_big; scalar_t__ extended; scalar_t__ num_query_dnscrypt_crypted_malformed; scalar_t__ num_query_dnscrypt_cleartext; scalar_t__ num_query_dnscrypt_cert; scalar_t__ num_query_dnscrypt_crypted; scalar_t__ sum_query_list_size; scalar_t__ num_queries_prefetch; scalar_t__ num_queries_missed_cache; scalar_t__ num_queries_ip_ratelimited; scalar_t__ num_queries; } ;
struct ub_stats_info {scalar_t__ mesh_time_median; int mesh_replies_sum_wait_usec; int mesh_replies_sum_wait_sec; scalar_t__ mesh_replies_sent; scalar_t__ mesh_dropped; scalar_t__ mesh_jostled; scalar_t__ mesh_num_reply_states; scalar_t__ mesh_num_states; TYPE_1__ svr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ,int ) ;

void FUNC_1(struct ub_stats_info* VAR_5, struct ub_stats_info* VAR_6)
{
 VAR_5->svr.num_queries += VAR_6->svr.num_queries;
 VAR_5->svr.num_queries_ip_ratelimited += VAR_6->svr.num_queries_ip_ratelimited;
 VAR_5->svr.num_queries_missed_cache += VAR_6->svr.num_queries_missed_cache;
 VAR_5->svr.num_queries_prefetch += VAR_6->svr.num_queries_prefetch;
 VAR_5->svr.sum_query_list_size += VAR_6->svr.sum_query_list_size;
 if(VAR_6->svr.max_query_list_size > VAR_5->svr.max_query_list_size)
  VAR_5->svr.max_query_list_size = VAR_6->svr.max_query_list_size;

 if(VAR_6->svr.extended) {
  int VAR_7;
  VAR_5->svr.qtype_big += VAR_6->svr.qtype_big;
  VAR_5->svr.qclass_big += VAR_6->svr.qclass_big;
  VAR_5->svr.qtcp += VAR_6->svr.qtcp;
  VAR_5->svr.qtcp_outgoing += VAR_6->svr.qtcp_outgoing;
  VAR_5->svr.qtls += VAR_6->svr.qtls;
  VAR_5->svr.qtls_resume += VAR_6->svr.qtls_resume;
  VAR_5->svr.qipv6 += VAR_6->svr.qipv6;
  VAR_5->svr.qbit_QR += VAR_6->svr.qbit_QR;
  VAR_5->svr.qbit_AA += VAR_6->svr.qbit_AA;
  VAR_5->svr.qbit_TC += VAR_6->svr.qbit_TC;
  VAR_5->svr.qbit_RD += VAR_6->svr.qbit_RD;
  VAR_5->svr.qbit_RA += VAR_6->svr.qbit_RA;
  VAR_5->svr.qbit_Z += VAR_6->svr.qbit_Z;
  VAR_5->svr.qbit_AD += VAR_6->svr.qbit_AD;
  VAR_5->svr.qbit_CD += VAR_6->svr.qbit_CD;
  VAR_5->svr.qEDNS += VAR_6->svr.qEDNS;
  VAR_5->svr.qEDNS_DO += VAR_6->svr.qEDNS_DO;
  VAR_5->svr.ans_rcode_nodata += VAR_6->svr.ans_rcode_nodata;
  VAR_5->svr.zero_ttl_responses += VAR_6->svr.zero_ttl_responses;
  VAR_5->svr.ans_secure += VAR_6->svr.ans_secure;
  VAR_5->svr.ans_bogus += VAR_6->svr.ans_bogus;
  VAR_5->svr.unwanted_replies += VAR_6->svr.unwanted_replies;
  VAR_5->svr.unwanted_queries += VAR_6->svr.unwanted_queries;
  VAR_5->svr.tcp_accept_usage += VAR_6->svr.tcp_accept_usage;
  for(VAR_7=0; VAR_7<VAR_3; VAR_7++)
   VAR_5->svr.qtype[VAR_7] += VAR_6->svr.qtype[VAR_7];
  for(VAR_7=0; VAR_7<VAR_2; VAR_7++)
   VAR_5->svr.qclass[VAR_7] += VAR_6->svr.qclass[VAR_7];
  for(VAR_7=0; VAR_7<VAR_1; VAR_7++)
   VAR_5->svr.qopcode[VAR_7] += VAR_6->svr.qopcode[VAR_7];
  for(VAR_7=0; VAR_7<VAR_4; VAR_7++)
   VAR_5->svr.ans_rcode[VAR_7] += VAR_6->svr.ans_rcode[VAR_7];
  for(VAR_7=0; VAR_7<VAR_0; VAR_7++)
   VAR_5->svr.hist[VAR_7] += VAR_6->svr.hist[VAR_7];
 }

 VAR_5->mesh_num_states += VAR_6->mesh_num_states;
 VAR_5->mesh_num_reply_states += VAR_6->mesh_num_reply_states;
 VAR_5->mesh_jostled += VAR_6->mesh_jostled;
 VAR_5->mesh_dropped += VAR_6->mesh_dropped;
 VAR_5->mesh_replies_sent += VAR_6->mesh_replies_sent;
 FUNC_0(&VAR_5->mesh_replies_sum_wait_sec, &VAR_5->mesh_replies_sum_wait_usec, VAR_6->mesh_replies_sum_wait_sec, VAR_6->mesh_replies_sum_wait_usec);



 VAR_5->mesh_time_median += VAR_6->mesh_time_median;
}
