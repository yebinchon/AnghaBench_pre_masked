
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mesh; } ;
struct worker {TYPE_2__ env; } ;
struct ub_server_stats {scalar_t__ num_queries_prefetch; scalar_t__ num_queries_missed_cache; scalar_t__ sum_query_list_size; scalar_t__ max_query_list_size; scalar_t__ num_queries_ip_ratelimited; scalar_t__ num_queries; } ;
struct TYPE_3__ {scalar_t__ stats_jostled; scalar_t__ stats_dropped; } ;


 int FUNC_0 (char*,int,unsigned int,double,unsigned int,unsigned int,...) ;

void FUNC_1(struct ub_server_stats* VAR_0, struct worker* VAR_1,
 int VAR_2)
{
 FUNC_0("server stats for thread %d: %u queries, "
  "%u answers from cache, %u recursions, %u prefetch, %u rejected by "
  "ip ratelimiting",
  VAR_2, (unsigned)VAR_0->num_queries,
  (unsigned)(VAR_0->num_queries -
   VAR_0->num_queries_missed_cache),
  (unsigned)VAR_0->num_queries_missed_cache,
  (unsigned)VAR_0->num_queries_prefetch,
  (unsigned)VAR_0->num_queries_ip_ratelimited);
 FUNC_0("server stats for thread %d: requestlist max %u avg %g "
  "exceeded %u jostled %u", VAR_2,
  (unsigned)VAR_0->max_query_list_size,
  (VAR_0->num_queries_missed_cache+VAR_0->num_queries_prefetch)?
   (double)VAR_0->sum_query_list_size/
   (double)(VAR_0->num_queries_missed_cache+
   VAR_0->num_queries_prefetch) : 0.0,
  (unsigned)VAR_1->env.mesh->stats_dropped,
  (unsigned)VAR_1->env.mesh->stats_jostled);
}
