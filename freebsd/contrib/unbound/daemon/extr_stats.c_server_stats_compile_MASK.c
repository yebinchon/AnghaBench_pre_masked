
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_21__ {TYPE_10__* cfg; TYPE_7__* auth_zones; TYPE_4__* key_cache; TYPE_3__* infra_cache; TYPE_2__* rrset_cache; int * msg_cache; TYPE_13__* mesh; } ;
struct TYPE_22__ {long long ans_secure; long long ans_bogus; long long ans_rcode_nodata; long long* ans_rcode; long long unwanted_replies; long long qtcp_outgoing; long long rrset_bogus; long long queries_ratelimited; long long msg_cache_count; long long rrset_cache_count; long long infra_cache_count; long long key_cache_count; long long num_query_dnscrypt_secret_missed_cache; long long shared_secret_cache_count; long long nonce_cache_count; long long num_query_dnscrypt_replay; long long num_query_authzone_up; long long num_query_authzone_down; long long mem_stream_wait; scalar_t__ tcp_accept_usage; scalar_t__ num_query_subnet_cache; scalar_t__ num_query_subnet; int hist; } ;
struct worker {TYPE_14__ env; TYPE_8__* front; TYPE_6__* daemon; TYPE_1__* back; TYPE_15__ stats; } ;
struct ub_stats_info {long long mesh_num_states; long long mesh_num_reply_states; long long mesh_jostled; long long mesh_dropped; long long mesh_replies_sent; long long mesh_replies_sum_wait_sec; long long mesh_replies_sum_wait_usec; TYPE_15__ svr; int mesh_time_median; } ;
struct listen_list {TYPE_9__* com; struct listen_list* next; } ;
struct TYPE_31__ {scalar_t__ type; scalar_t__ cur_tcp_count; } ;
struct TYPE_30__ {struct listen_list* cps; } ;
struct TYPE_29__ {int lock; scalar_t__ num_query_down; scalar_t__ num_query_up; } ;
struct TYPE_28__ {TYPE_5__* dnscenv; } ;
struct TYPE_27__ {int * nonces_cache; int * shared_secrets_cache; } ;
struct TYPE_26__ {int * slab; } ;
struct TYPE_25__ {int * hosts; } ;
struct TYPE_24__ {int table; } ;
struct TYPE_23__ {scalar_t__ num_tcp_outgoing; scalar_t__ unwanted_replies; } ;
struct TYPE_19__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_18__ {scalar_t__ count; } ;
struct TYPE_20__ {int histogram; scalar_t__* ans_rcode; scalar_t__ ans_nodata; scalar_t__ ans_bogus; scalar_t__ ans_secure; TYPE_12__ replies_sum_wait; scalar_t__ replies_sent; scalar_t__ stats_dropped; scalar_t__ stats_jostled; scalar_t__ num_reply_states; TYPE_11__ all; } ;
struct TYPE_17__ {int stat_cumulative; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct worker*,int) ;
 scalar_t__ FUNC_2 (struct worker*,int) ;
 scalar_t__ FUNC_3 (struct worker*,int) ;
 scalar_t__ FUNC_4 (struct worker*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct worker*,TYPE_15__*,int) ;
 int FUNC_9 (struct worker*,TYPE_15__*,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,double) ;
 int FUNC_13 (struct worker*) ;

void
FUNC_14(struct worker* VAR_2, struct ub_stats_info* VAR_3, int VAR_4)
{
 int VAR_5;
 struct listen_list* VAR_6;

 VAR_3->svr = VAR_2->stats;
 VAR_3->mesh_num_states = (long long)VAR_2->env.mesh->all.count;
 VAR_3->mesh_num_reply_states = (long long)VAR_2->env.mesh->num_reply_states;
 VAR_3->mesh_jostled = (long long)VAR_2->env.mesh->stats_jostled;
 VAR_3->mesh_dropped = (long long)VAR_2->env.mesh->stats_dropped;
 VAR_3->mesh_replies_sent = (long long)VAR_2->env.mesh->replies_sent;
 VAR_3->mesh_replies_sum_wait_sec = (long long)VAR_2->env.mesh->replies_sum_wait.tv_sec;
 VAR_3->mesh_replies_sum_wait_usec = (long long)VAR_2->env.mesh->replies_sum_wait.tv_usec;
 VAR_3->mesh_time_median = FUNC_12(VAR_2->env.mesh->histogram,
  0.50);


 VAR_3->svr.ans_secure += (long long)VAR_2->env.mesh->ans_secure;
 VAR_3->svr.ans_bogus += (long long)VAR_2->env.mesh->ans_bogus;
 VAR_3->svr.ans_rcode_nodata += (long long)VAR_2->env.mesh->ans_nodata;
 for(VAR_5=0; VAR_5<16; VAR_5++)
  VAR_3->svr.ans_rcode[VAR_5] += (long long)VAR_2->env.mesh->ans_rcode[VAR_5];
 FUNC_11(VAR_2->env.mesh->histogram, VAR_3->svr.hist,
  VAR_0);

 VAR_3->svr.unwanted_replies = (long long)VAR_2->back->unwanted_replies;
 VAR_3->svr.qtcp_outgoing = (long long)VAR_2->back->num_tcp_outgoing;


 VAR_3->svr.rrset_bogus = (long long)FUNC_4(VAR_2, VAR_4);


 VAR_3->svr.queries_ratelimited = (long long)FUNC_3(VAR_2, VAR_4);


 VAR_3->svr.msg_cache_count = (long long)FUNC_0(VAR_2->env.msg_cache);
 VAR_3->svr.rrset_cache_count = (long long)FUNC_0(&VAR_2->env.rrset_cache->table);
 VAR_3->svr.infra_cache_count = (long long)FUNC_0(VAR_2->env.infra_cache->hosts);
 if(VAR_2->env.key_cache)
  VAR_3->svr.key_cache_count = (long long)FUNC_0(VAR_2->env.key_cache->slab);
 else VAR_3->svr.key_cache_count = 0;
 VAR_3->svr.num_query_dnscrypt_secret_missed_cache = 0;
 VAR_3->svr.shared_secret_cache_count = 0;
 VAR_3->svr.nonce_cache_count = 0;
 VAR_3->svr.num_query_dnscrypt_replay = 0;

 if(VAR_2->env.auth_zones) {
  if(VAR_4 && !VAR_2->env.cfg->stat_cumulative) {
   FUNC_7(&VAR_2->env.auth_zones->lock);
  } else {
   FUNC_5(&VAR_2->env.auth_zones->lock);
  }
  VAR_3->svr.num_query_authzone_up = (long long)VAR_2->env.
   auth_zones->num_query_up;
  VAR_3->svr.num_query_authzone_down = (long long)VAR_2->env.
   auth_zones->num_query_down;
  if(VAR_4 && !VAR_2->env.cfg->stat_cumulative) {
   VAR_2->env.auth_zones->num_query_up = 0;
   VAR_2->env.auth_zones->num_query_down = 0;
  }
  FUNC_6(&VAR_2->env.auth_zones->lock);
 }
 VAR_3->svr.mem_stream_wait =
  (long long)FUNC_10();


 FUNC_8(VAR_2, &VAR_3->svr, VAR_4);




 VAR_3->svr.num_query_subnet = 0;
 VAR_3->svr.num_query_subnet_cache = 0;



 VAR_3->svr.tcp_accept_usage = 0;
 for(VAR_6 = VAR_2->front->cps; VAR_6; VAR_6 = VAR_6->next) {
  if(VAR_6->com->type == VAR_1)
   VAR_3->svr.tcp_accept_usage += (long long)VAR_6->com->cur_tcp_count;
 }

 if(VAR_4 && !VAR_2->env.cfg->stat_cumulative) {
  FUNC_13(VAR_2);
 }
}
