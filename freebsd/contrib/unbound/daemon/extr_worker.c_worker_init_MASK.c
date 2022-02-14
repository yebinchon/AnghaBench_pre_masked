
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cfg; int scratch_buffer; int mesh; scalar_t__ auth_zones; void* probe_timer; int anchors; int hints; int fwds; int * detect_cycle; int * kill_sub; int * add_sub; int * attach_sub; int * detach_subs; void* scratch; int rnd; int outnet; int * alloc; int * send_query; scalar_t__ worker_base; struct worker* worker; int now_tv; int now; int infra_cache; } ;
struct dt_env {int dummy; } ;
struct worker {scalar_t__ thread_num; TYPE_3__ env; scalar_t__ base; TYPE_2__* daemon; int rndstate; int back; int alloc; int stats; void* scratchpad; void* stat_timer; int cmd; int numports; int ports; int front; int * comsig; scalar_t__ need_to_exit; struct dt_env dtenv; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct listen_port {int dummy; } ;
struct config_file {int msg_buffer_size; int delay_close; scalar_t__ udp_upstream_without_downstream; scalar_t__ do_udp; int outgoing_tcp_mss; int unwanted_threshold; int use_caps_bits_for_id; int outgoing_num_tcp; scalar_t__ do_tcp; int do_ip6; int do_ip4; int num_out_ifs; int out_ifs; scalar_t__ outgoing_num_ports; int tcp_idle_timeout; int tcp_keepalive_timeout; scalar_t__ do_tcp_keepalive; scalar_t__ incoming_num_tcp; } ;
struct TYPE_6__ {int mods; TYPE_3__* env; int superalloc; int connect_sslctx; int listen_sslctx; int tcl; int rc_ports; int rc; } ;
struct TYPE_5__ {scalar_t__ stat_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int *,struct worker*) ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int *,int *,struct worker*) ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (scalar_t__,int ,struct worker*) ;
 void* FUNC_9 (scalar_t__,int ,struct worker*) ;
 int FUNC_10 (void*,struct timeval*) ;
 int FUNC_11 (int ,int ,struct worker*) ;
 int FUNC_12 (int ,struct config_file*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,struct config_file*) ;
 int FUNC_15 () ;
 int FUNC_16 (scalar_t__,struct listen_port*,int ,int,int ,int ,int ,void*,int ,struct worker*) ;
 int FUNC_17 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (int *,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_19 (scalar_t__,int ,size_t,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,struct worker*,int,int ,int ,void*) ;
 void* FUNC_20 (int ) ;
 int FUNC_21 (int *,struct config_file*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,scalar_t__,int *,struct worker*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_26 (struct worker*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_27 (struct worker*,int *) ;
 int VAR_13 ;
 int FUNC_28 (struct worker*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_29 (struct worker*) ;

int
FUNC_30(struct worker* VAR_19, struct config_file *VAR_20,
 struct listen_port* VAR_21, int VAR_22)
{



 void* VAR_23 = ((void*)0);

 VAR_19->need_to_exit = 0;
 VAR_19->base = FUNC_4(VAR_22);
 if(!VAR_19->base) {
  FUNC_17("could not create event handling base");
  FUNC_26(VAR_19);
  return 0;
 }
 FUNC_5(VAR_19->base, &VAR_18,
  &VAR_16, VAR_19);
 if(VAR_22) {



  FUNC_24(VAR_1);



  FUNC_24(VAR_3);

  VAR_19->comsig = FUNC_8(VAR_19->base,
   VAR_15, VAR_19);
  if(!VAR_19->comsig






   || !FUNC_7(VAR_19->comsig, VAR_3)
   || !FUNC_7(VAR_19->comsig, VAR_1)) {
   FUNC_17("could not create signal handlers");
   FUNC_26(VAR_19);
   return 0;
  }

  if(!FUNC_11(VAR_19->daemon->rc,
   VAR_19->daemon->rc_ports, VAR_19)) {
   FUNC_26(VAR_19);
   return 0;
  }



 } else {
  VAR_19->comsig = ((void*)0);
 }
 VAR_19->front = FUNC_16(VAR_19->base, VAR_21,
  VAR_20->msg_buffer_size, (int)VAR_20->incoming_num_tcp,
  VAR_20->do_tcp_keepalive
   ? VAR_20->tcp_keepalive_timeout
   : VAR_20->tcp_idle_timeout,
   VAR_19->daemon->tcl,
  VAR_19->daemon->listen_sslctx,
  VAR_23, VAR_12, VAR_19);
 if(!VAR_19->front) {
  FUNC_17("could not create listening sockets");
  FUNC_26(VAR_19);
  return 0;
 }
 VAR_19->back = FUNC_19(VAR_19->base,
  VAR_20->msg_buffer_size, (size_t)VAR_20->outgoing_num_ports,
  VAR_20->out_ifs, VAR_20->num_out_ifs, VAR_20->do_ip4, VAR_20->do_ip6,
  VAR_20->do_tcp?VAR_20->outgoing_num_tcp:0,
  VAR_19->daemon->env->infra_cache, VAR_19->rndstate,
  VAR_20->use_caps_bits_for_id, VAR_19->ports, VAR_19->numports,
  VAR_20->unwanted_threshold, VAR_20->outgoing_tcp_mss,
  &VAR_10, VAR_19,
  VAR_20->do_udp || VAR_20->udp_upstream_without_downstream,
  VAR_19->daemon->connect_sslctx, VAR_20->delay_close,
  VAR_23);
 if(!VAR_19->back) {
  FUNC_17("could not create outgoing sockets");
  FUNC_26(VAR_19);
  return 0;
 }

 if(!FUNC_23(VAR_19->cmd, VAR_19->base,
  &VAR_11, VAR_19)) {
  FUNC_17("could not create control compt.");
  FUNC_26(VAR_19);
  return 0;
 }
 VAR_19->stat_timer = FUNC_9(VAR_19->base,
  VAR_17, VAR_19);
 if(!VAR_19->stat_timer) {
  FUNC_17("could not create statistics timer");
 }



 VAR_19->scratchpad = FUNC_20(VAR_20->msg_buffer_size);
 if(!VAR_19->scratchpad) {
  FUNC_17("malloc failure");
  FUNC_26(VAR_19);
  return 0;
 }

 FUNC_21(&VAR_19->stats, VAR_20);
 FUNC_0(&VAR_19->alloc, &VAR_19->daemon->superalloc,
  VAR_19->thread_num);
 FUNC_1(&VAR_19->alloc, &VAR_10, VAR_19);
 VAR_19->env = *VAR_19->daemon->env;
 FUNC_6(VAR_19->base, &VAR_19->env.now, &VAR_19->env.now_tv);
 VAR_19->env.worker = VAR_19;
 VAR_19->env.worker_base = VAR_19->base;
 VAR_19->env.send_query = &VAR_14;
 VAR_19->env.alloc = &VAR_19->alloc;
 VAR_19->env.outnet = VAR_19->back;
 VAR_19->env.rnd = VAR_19->rndstate;





 VAR_19->env.scratch = FUNC_20(VAR_20->msg_buffer_size);
 if(!VAR_19->env.scratch) {
  FUNC_17("malloc failure");
  FUNC_26(VAR_19);
  return 0;
 }
 VAR_19->env.mesh = FUNC_18(&VAR_19->daemon->mods, &VAR_19->env);
 VAR_19->env.detach_subs = &VAR_7;
 VAR_19->env.attach_sub = &VAR_6;
 VAR_19->env.add_sub = &VAR_5;
 VAR_19->env.kill_sub = &VAR_9;
 VAR_19->env.detect_cycle = &VAR_8;
 VAR_19->env.scratch_buffer = FUNC_22(VAR_20->msg_buffer_size);
 if(!(VAR_19->env.fwds = FUNC_13()) ||
  !FUNC_12(VAR_19->env.fwds, VAR_20)) {
  FUNC_17("Could not set forward zones");
  FUNC_26(VAR_19);
  return 0;
 }
 if(!(VAR_19->env.hints = FUNC_15()) ||
  !FUNC_14(VAR_19->env.hints, VAR_20)) {
  FUNC_17("Could not set root or stub hints");
  FUNC_26(VAR_19);
  return 0;
 }

 if(FUNC_3(VAR_19->env.anchors) > 0

  && VAR_19->thread_num == 0

  ) {
  struct timeval VAR_24;
  VAR_24.tv_sec = 0;
  VAR_24.tv_usec = 0;
  VAR_19->env.probe_timer = FUNC_9(VAR_19->base,
   VAR_13, VAR_19);
  if(!VAR_19->env.probe_timer) {
   FUNC_17("could not create 5011-probe timer");
  } else {

   FUNC_10(VAR_19->env.probe_timer, &VAR_24);
  }
 }

 if(VAR_19->env.auth_zones

  && VAR_19->thread_num == 0

  ) {
  FUNC_2(VAR_19->env.auth_zones, &VAR_19->env);
 }
 if(!VAR_19->env.mesh || !VAR_19->env.scratch_buffer) {
  FUNC_26(VAR_19);
  return 0;
 }
 FUNC_27(VAR_19, ((void*)0));

 if(VAR_19->env.cfg->stat_interval > 0) {
  FUNC_25(VAR_4, "set statistics interval %d secs",
   VAR_19->env.cfg->stat_interval);
  FUNC_28(VAR_19);
 }
 return 1;
}
