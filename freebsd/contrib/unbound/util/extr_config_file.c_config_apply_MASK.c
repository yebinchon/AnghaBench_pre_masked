
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef void* time_t ;
struct config_file {int stream_wait_size; int permit_small_holddown; int log_time_ascii; int unknown_server_time_limit; int log_tag_queryreply; int rrset_roundrobin; int minimal_responses; scalar_t__ edns_buffer_size; int infra_cache_min_rtt; scalar_t__ max_negative_ttl; scalar_t__ serve_expired_ttl; scalar_t__ min_ttl; scalar_t__ max_ttl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;

void
FUNC_1(struct config_file* VAR_12)
{
 VAR_3 = (time_t)VAR_12->max_ttl;
 VAR_5 = (time_t)VAR_12->min_ttl;
 VAR_8 = (time_t)VAR_12->serve_expired_ttl;
 VAR_2 = (time_t)VAR_12->max_negative_ttl;
 VAR_7 = VAR_12->infra_cache_min_rtt;
 VAR_0 = (uint16_t)VAR_12->edns_buffer_size;
 VAR_4 = VAR_12->minimal_responses;
 VAR_6 = VAR_12->rrset_roundrobin;
 VAR_1 = VAR_12->log_tag_queryreply;
 VAR_9 = VAR_12->unknown_server_time_limit;
 FUNC_0(VAR_12->log_time_ascii);
 VAR_10 = VAR_12->permit_small_holddown;
 VAR_11 = VAR_12->stream_wait_size;
}
