
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* mesh; } ;
struct worker {TYPE_3__ env; } ;
struct ub_server_stats {long long max_query_list_size; int sum_query_list_size; int num_queries_missed_cache; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_5__ {TYPE_1__ all; } ;



void FUNC_0(struct ub_server_stats* VAR_0, struct worker* VAR_1)
{
 VAR_0->num_queries_missed_cache++;
 VAR_0->sum_query_list_size += VAR_1->env.mesh->all.count;
 if((long long)VAR_1->env.mesh->all.count > VAR_0->max_query_list_size)
  VAR_0->max_query_list_size = (long long)VAR_1->env.mesh->all.count;
}
