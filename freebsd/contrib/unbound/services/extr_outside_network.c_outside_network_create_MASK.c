
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_randstate {int dummy; } ;
struct port_if {int dummy; } ;
struct port_comm {struct port_comm* next; int cp; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
struct outside_network {size_t num_tcp; size_t unwanted_threshold; void (* unwanted_action ) (void*) ;int use_caps_for_id; int do_udp; int tcp_mss; int delayclose; scalar_t__ num_ip4; scalar_t__ num_ip6; struct port_if* ip4_ifs; struct port_if* ip6_ifs; struct port_comm* unused_fds; int udp_buff; struct comm_base* base; void* serviced; void* pending; TYPE_1__ delay_tv; void* unwanted_param; scalar_t__ want_to_quit; scalar_t__ svcd_overhead; struct dt_env* dtenv; void* sslctx; struct ub_randstate* rnd; struct infra_cache* infra; scalar_t__ num_tcp_outgoing; int now_tv; int now_secs; } ;
struct infra_cache {int dummy; } ;
struct dt_env {int dummy; } ;
struct comm_base {int dummy; } ;


 int FUNC_0 (char**,int,int,int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct comm_base*,int *,int *) ;
 int FUNC_3 (struct comm_base*,int,int ,int ,struct outside_network*) ;
 int FUNC_4 (struct outside_network*,size_t) ;
 int FUNC_5 (struct port_comm*) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (struct outside_network*) ;
 int VAR_1 ;
 void* FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (struct port_if*,char*,int*,int,size_t) ;
 int FUNC_10 (size_t) ;
 scalar_t__ FUNC_11 (char*) ;

struct outside_network*
FUNC_12(struct comm_base *VAR_3, size_t VAR_4,
 size_t VAR_5, char** VAR_6, int VAR_7, int VAR_8,
 int VAR_9, size_t VAR_10, struct infra_cache* VAR_11,
 struct ub_randstate* VAR_12, int VAR_13, int* VAR_14,
 int VAR_15, size_t VAR_16, int VAR_17,
 void (*VAR_18)(void*), void* VAR_19, int VAR_20,
 void* VAR_21, int VAR_22, struct dt_env* VAR_23)
{
 struct outside_network* VAR_24 = (struct outside_network*)
  FUNC_1(1, sizeof(struct outside_network));
 size_t VAR_25;
 if(!VAR_24) {
  FUNC_6("malloc failed");
  return ((void*)0);
 }
 FUNC_2(VAR_3, &VAR_24->now_secs, &VAR_24->now_tv);
 VAR_24->base = VAR_3;
 VAR_24->num_tcp = VAR_10;
 VAR_24->num_tcp_outgoing = 0;
 VAR_24->infra = VAR_11;
 VAR_24->rnd = VAR_12;
 VAR_24->sslctx = VAR_21;



 (void)VAR_23;

 VAR_24->svcd_overhead = 0;
 VAR_24->want_to_quit = 0;
 VAR_24->unwanted_threshold = VAR_16;
 VAR_24->unwanted_action = VAR_18;
 VAR_24->unwanted_param = VAR_19;
 VAR_24->use_caps_for_id = VAR_13;
 VAR_24->do_udp = VAR_20;
 VAR_24->tcp_mss = VAR_17;

 if(VAR_22) {
  VAR_24->delayclose = 1;
  VAR_24->delay_tv.tv_sec = VAR_22/1000;
  VAR_24->delay_tv.tv_usec = (VAR_22%1000)*1000;
 }

 if(VAR_15 == 0 || VAR_5 == 0) {
  FUNC_6("no outgoing ports available");
  FUNC_7(VAR_24);
  return ((void*)0);
 }

 VAR_9 = 0;

 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9,
  &VAR_24->num_ip4, &VAR_24->num_ip6);
 if(VAR_24->num_ip4 != 0) {
  if(!(VAR_24->ip4_ifs = (struct port_if*)FUNC_1(
   (size_t)VAR_24->num_ip4, sizeof(struct port_if)))) {
   FUNC_6("malloc failed");
   FUNC_7(VAR_24);
   return ((void*)0);
  }
 }
 if(VAR_24->num_ip6 != 0) {
  if(!(VAR_24->ip6_ifs = (struct port_if*)FUNC_1(
   (size_t)VAR_24->num_ip6, sizeof(struct port_if)))) {
   FUNC_6("malloc failed");
   FUNC_7(VAR_24);
   return ((void*)0);
  }
 }
 if( !(VAR_24->udp_buff = FUNC_10(VAR_4)) ||
  !(VAR_24->pending = FUNC_8(VAR_1)) ||
  !(VAR_24->serviced = FUNC_8(VAR_2)) ||
  !FUNC_4(VAR_24, VAR_4)) {
  FUNC_6("malloc failed");
  FUNC_7(VAR_24);
  return ((void*)0);
 }


 for(VAR_25=0; VAR_25<VAR_5; VAR_25++) {
  struct port_comm* VAR_26;
  VAR_26 = (struct port_comm*)FUNC_1(1, sizeof(*VAR_26));
  if(!VAR_26) {
   FUNC_6("malloc failed");
   FUNC_7(VAR_24);
   return ((void*)0);
  }
  VAR_26->cp = FUNC_3(VAR_24->base, -1,
   VAR_24->udp_buff, VAR_0, VAR_24);
  if(!VAR_26->cp) {
   FUNC_6("malloc failed");
   FUNC_5(VAR_26);
   FUNC_7(VAR_24);
   return ((void*)0);
  }
  VAR_26->next = VAR_24->unused_fds;
  VAR_24->unused_fds = VAR_26;
 }


 if(VAR_7 == 0) {
  if(VAR_8 && !FUNC_9(&VAR_24->ip4_ifs[0], "0.0.0.0",
   VAR_14, VAR_15, VAR_5)) {
   FUNC_6("malloc failed");
   FUNC_7(VAR_24);
   return ((void*)0);
  }
  if(VAR_9 && !FUNC_9(&VAR_24->ip6_ifs[0], "::",
   VAR_14, VAR_15, VAR_5)) {
   FUNC_6("malloc failed");
   FUNC_7(VAR_24);
   return ((void*)0);
  }
 } else {
  size_t VAR_27 = 0, VAR_28 = 0;
  int VAR_29;
  for(VAR_29=0; VAR_29<VAR_7; VAR_29++) {
   if(FUNC_11(VAR_6[VAR_29]) && VAR_9) {
    if(!FUNC_9(&VAR_24->ip6_ifs[VAR_28], VAR_6[VAR_29],
     VAR_14, VAR_15, VAR_5)){
     FUNC_6("malloc failed");
     FUNC_7(VAR_24);
     return ((void*)0);
    }
    VAR_28++;
   }
   if(!FUNC_11(VAR_6[VAR_29]) && VAR_8) {
    if(!FUNC_9(&VAR_24->ip4_ifs[VAR_27], VAR_6[VAR_29],
     VAR_14, VAR_15, VAR_5)){
     FUNC_6("malloc failed");
     FUNC_7(VAR_24);
     return ((void*)0);
    }
    VAR_27++;
   }
  }
 }
 return VAR_24;
}
