
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* time_t ;
struct module_stack {int dummy; } ;
struct module_env {TYPE_2__* cfg; } ;
struct TYPE_3__ {void* tv_usec; void* tv_sec; } ;
struct mesh_area {int max_reply_states; int max_forever_states; TYPE_1__ jostle_max; scalar_t__ stats_dropped; scalar_t__ stats_jostled; scalar_t__ num_forever_states; scalar_t__ num_detached_states; scalar_t__ num_reply_states; scalar_t__ num_reply_addrs; int all; int run; struct module_env* env; struct module_stack mods; int qbuf_bak; int histogram; } ;
struct TYPE_4__ {int num_queries_per_thread; int jostle_time; int msg_buffer_size; } ;


 struct mesh_area* FUNC_0 (int,int) ;
 int FUNC_1 (struct mesh_area*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

struct mesh_area*
FUNC_6(struct module_stack* VAR_1, struct module_env* VAR_2)
{
 struct mesh_area* VAR_3 = FUNC_0(1, sizeof(struct mesh_area));
 if(!VAR_3) {
  FUNC_2("mesh area alloc: out of memory");
  return ((void*)0);
 }
 VAR_3->histogram = FUNC_5();
 VAR_3->qbuf_bak = FUNC_4(VAR_2->cfg->msg_buffer_size);
 if(!VAR_3->histogram || !VAR_3->qbuf_bak) {
  FUNC_1(VAR_3);
  FUNC_2("mesh area alloc: out of memory");
  return ((void*)0);
 }
 VAR_3->mods = *VAR_1;
 VAR_3->env = VAR_2;
 FUNC_3(&VAR_3->run, &VAR_0);
 FUNC_3(&VAR_3->all, &VAR_0);
 VAR_3->num_reply_addrs = 0;
 VAR_3->num_reply_states = 0;
 VAR_3->num_detached_states = 0;
 VAR_3->num_forever_states = 0;
 VAR_3->stats_jostled = 0;
 VAR_3->stats_dropped = 0;
 VAR_3->max_reply_states = VAR_2->cfg->num_queries_per_thread;
 VAR_3->max_forever_states = (VAR_3->max_reply_states+1)/2;

 VAR_3->jostle_max.tv_sec = (time_t)(VAR_2->cfg->jostle_time / 1000);
 VAR_3->jostle_max.tv_usec = (time_t)((VAR_2->cfg->jostle_time % 1000)
  *1000);

 return VAR_3;
}
