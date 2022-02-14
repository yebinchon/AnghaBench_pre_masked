
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct sock {int sk_rcvbuf; scalar_t__ sk_family; } ;
struct sctp_tsnmap {int dummy; } ;
struct TYPE_22__ {int sinit_max_init_timeo; int sinit_max_attempts; int sinit_num_ostreams; int sinit_max_instreams; } ;
struct TYPE_21__ {int srto_min; int srto_max; int srto_initial; } ;
struct TYPE_20__ {int sasoc_cookie_life; int sasoc_asocmaxrxt; } ;
struct sctp_sock {int default_rcv_context; int default_timetolive; int default_context; int default_flags; int default_ppid; int default_stream; scalar_t__ autoclose; TYPE_4__ initmsg; int max_burst; int param_flags; int sackfreq; int sackdelay; int pathmtu; int pathmaxrxt; int hbinterval; TYPE_3__ rtoinfo; TYPE_2__ assocparams; int user_frag; } ;
struct sctp_priv_assoc_stats {int dummy; } ;
struct TYPE_24__ {int port; } ;
struct TYPE_25__ {TYPE_6__ bind_addr; } ;
struct sctp_endpoint {TYPE_13__* auth_chunk_list; TYPE_13__* auth_hmacs_list; int active_key_id; TYPE_7__ base; } ;
struct TYPE_16__ {struct sock* sk; int inqueue; int bind_addr; scalar_t__ malloced; scalar_t__ dead; int refcnt; int type; } ;
struct TYPE_15__ {scalar_t__ auth_random; int auth_chunks; int auth_hmacs; scalar_t__ initial_tsn; int my_port; scalar_t__ peer_ttag; scalar_t__ my_ttag; scalar_t__ peer_vtag; int my_vtag; int sinit_num_ostreams; int sinit_max_instreams; } ;
struct TYPE_23__ {scalar_t__ init_tag; } ;
struct TYPE_26__ {int sack_needed; int sack_generation; int asconf_capable; int ipv4_address; int ipv6_address; int tsn_map; scalar_t__ sack_cnt; scalar_t__ transport_count; int transport_addr_list; TYPE_5__ i; int rwnd; } ;
struct TYPE_19__ {int tv_sec; int tv_usec; } ;
struct sctp_association {int rto_initial; int rto_max; int sackdelay; int* timeouts; int rwnd; int a_rwnd; TYPE_11__ base; struct sctp_endpoint* ep; TYPE_10__ c; scalar_t__ default_hmac_id; int * asoc_shared_key; int active_key_id; int endpoint_shared_keys; int stats; int default_rcv_context; int default_timetolive; int default_context; int default_flags; int default_ppid; int default_stream; scalar_t__ autoclose; int asocs; TYPE_8__ peer; scalar_t__ assoc_id; scalar_t__ need_ecne; int ulpq; int outqueue; int asconf_ack_list; int addip_chunk_list; scalar_t__ addip_serial; scalar_t__ unack_data; scalar_t__ ctsn_ack_point; scalar_t__ last_cwr_tsn; scalar_t__ highest_sacked; scalar_t__ adv_peer_ack_point; scalar_t__ next_tsn; int wait; int rmem_alloc; scalar_t__ sndbuf_used; scalar_t__ rwnd_press; scalar_t__ rwnd_over; int * ssnmap; void* max_init_timeo; int max_init_attempts; int * timers; int max_burst; int param_flags; int sackfreq; int pathmtu; int pathmaxrxt; void* hbinterval; scalar_t__ overall_error_count; void* rto_min; int pf_retrans; int max_retrans; int user_frag; scalar_t__ frag_point; TYPE_1__ cookie_life; int state; } ;
typedef int sctp_scope_t ;
struct TYPE_17__ {int length; int type; } ;
typedef TYPE_12__ sctp_paramhdr_t ;
typedef int gfp_t ;
struct TYPE_27__ {int length; } ;
struct TYPE_18__ {TYPE_9__ param_hdr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_12__*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_13__*,int ) ;
 int FUNC_6 (int *,int ,int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_9 (struct sctp_endpoint const*,struct sctp_association*,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct sctp_endpoint*) ;
 int FUNC_12 (struct sctp_endpoint*) ;
 int FUNC_13 (struct sctp_endpoint const*) ;
 scalar_t__ FUNC_14 (struct sctp_endpoint const*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (struct sctp_association*,int *) ;
 int VAR_21 ;
 struct sctp_sock* FUNC_18 (struct sock*) ;
 int * VAR_22 ;
 int FUNC_19 (int *,struct sctp_association*) ;
 int FUNC_20 (int *,int ,unsigned long) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;

__attribute__((used)) static struct sctp_association *FUNC_23(struct sctp_association *VAR_23,
       const struct sctp_endpoint *VAR_24,
       const struct sock *VAR_25,
       sctp_scope_t VAR_26,
       gfp_t VAR_27)
{
 struct sctp_sock *VAR_28;
 int VAR_29;
 sctp_paramhdr_t *VAR_30;
 int VAR_31;


 VAR_28 = FUNC_18((struct sock *)VAR_25);


 VAR_23->ep = (struct sctp_endpoint *)VAR_24;
 FUNC_11(VAR_23->ep);


 VAR_23->base.sk = (struct sock *)VAR_25;
 FUNC_21(VAR_23->base.sk);


 VAR_23->base.type = VAR_5;


 FUNC_1(&VAR_23->base.refcnt, 1);
 VAR_23->base.dead = 0;
 VAR_23->base.malloced = 0;


 FUNC_10(&VAR_23->base.bind_addr, VAR_24->base.bind_addr.port);

 VAR_23->state = VAR_18;




 VAR_23->cookie_life.tv_sec = VAR_28->assocparams.sasoc_cookie_life / 1000;
 VAR_23->cookie_life.tv_usec = (VAR_28->assocparams.sasoc_cookie_life % 1000)
     * 1000;
 VAR_23->frag_point = 0;
 VAR_23->user_frag = VAR_28->user_frag;




 VAR_23->max_retrans = VAR_28->assocparams.sasoc_asocmaxrxt;
 VAR_23->pf_retrans = VAR_21;

 VAR_23->rto_initial = FUNC_7(VAR_28->rtoinfo.srto_initial);
 VAR_23->rto_max = FUNC_7(VAR_28->rtoinfo.srto_max);
 VAR_23->rto_min = FUNC_7(VAR_28->rtoinfo.srto_min);

 VAR_23->overall_error_count = 0;




 VAR_23->hbinterval = FUNC_7(VAR_28->hbinterval);


 VAR_23->pathmaxrxt = VAR_28->pathmaxrxt;


 VAR_23->pathmtu = VAR_28->pathmtu;


 VAR_23->sackdelay = FUNC_7(VAR_28->sackdelay);
 VAR_23->sackfreq = VAR_28->sackfreq;




 VAR_23->param_flags = VAR_28->param_flags;




 VAR_23->max_burst = VAR_28->max_burst;


 VAR_23->timeouts[VAR_8] = 0;
 VAR_23->timeouts[VAR_10] = VAR_23->rto_initial;
 VAR_23->timeouts[VAR_11] = VAR_23->rto_initial;
 VAR_23->timeouts[VAR_12] = VAR_23->rto_initial;
 VAR_23->timeouts[VAR_13] = 0;
 VAR_23->timeouts[VAR_14] = 0;





 VAR_23->timeouts[VAR_15]
  = 5 * VAR_23->rto_max;

 VAR_23->timeouts[VAR_7] = 0;
 VAR_23->timeouts[VAR_9] = VAR_23->sackdelay;
 VAR_23->timeouts[VAR_6] =
  (unsigned long)VAR_28->autoclose * VAR_0;


 for (VAR_29 = VAR_8; VAR_29 < VAR_16; ++VAR_29)
  FUNC_20(&VAR_23->timers[VAR_29], VAR_22[VAR_29],
    (unsigned long)VAR_23);





 VAR_23->c.sinit_max_instreams = VAR_28->initmsg.sinit_max_instreams;
 VAR_23->c.sinit_num_ostreams = VAR_28->initmsg.sinit_num_ostreams;
 VAR_23->max_init_attempts = VAR_28->initmsg.sinit_max_attempts;

 VAR_23->max_init_timeo =
   FUNC_7(VAR_28->initmsg.sinit_max_init_timeo);




 VAR_23->ssnmap = ((void*)0);






 if ((VAR_25->sk_rcvbuf/2) < VAR_4)
  VAR_23->rwnd = VAR_4;
 else
  VAR_23->rwnd = VAR_25->sk_rcvbuf/2;

 VAR_23->a_rwnd = VAR_23->rwnd;

 VAR_23->rwnd_over = 0;
 VAR_23->rwnd_press = 0;


 VAR_23->peer.rwnd = VAR_3;


 VAR_23->sndbuf_used = 0;


 FUNC_1(&VAR_23->rmem_alloc, 0);

 FUNC_4(&VAR_23->wait);

 VAR_23->c.my_vtag = FUNC_13(VAR_24);
 VAR_23->peer.i.init_tag = 0;
 VAR_23->c.peer_vtag = 0;
 VAR_23->c.my_ttag = 0;
 VAR_23->c.peer_ttag = 0;
 VAR_23->c.my_port = VAR_24->base.bind_addr.port;

 VAR_23->c.initial_tsn = FUNC_14(VAR_24);

 VAR_23->next_tsn = VAR_23->c.initial_tsn;

 VAR_23->ctsn_ack_point = VAR_23->next_tsn - 1;
 VAR_23->adv_peer_ack_point = VAR_23->ctsn_ack_point;
 VAR_23->highest_sacked = VAR_23->ctsn_ack_point;
 VAR_23->last_cwr_tsn = VAR_23->ctsn_ack_point;
 VAR_23->unack_data = 0;
 VAR_23->addip_serial = VAR_23->c.initial_tsn;

 FUNC_0(&VAR_23->addip_chunk_list);
 FUNC_0(&VAR_23->asconf_ack_list);


 FUNC_0(&VAR_23->peer.transport_addr_list);
 VAR_23->peer.transport_count = 0;
 VAR_23->peer.sack_needed = 1;
 VAR_23->peer.sack_cnt = 0;
 VAR_23->peer.sack_generation = 1;






 VAR_23->peer.asconf_capable = 0;
 if (VAR_19)
  VAR_23->peer.asconf_capable = 1;


 FUNC_15(&VAR_23->base.inqueue);
 FUNC_16(&VAR_23->base.inqueue, VAR_20);


 FUNC_17(VAR_23, &VAR_23->outqueue);

 if (!FUNC_19(&VAR_23->ulpq, VAR_23))
  goto fail_init;

 FUNC_6(&VAR_23->peer.tsn_map, 0, sizeof(struct sctp_tsnmap));

 VAR_23->need_ecne = 0;

 VAR_23->assoc_id = 0;




 VAR_23->peer.ipv4_address = 1;
 if (VAR_23->base.sk->sk_family == VAR_1)
  VAR_23->peer.ipv6_address = 1;
 FUNC_0(&VAR_23->asocs);

 VAR_23->autoclose = VAR_28->autoclose;

 VAR_23->default_stream = VAR_28->default_stream;
 VAR_23->default_ppid = VAR_28->default_ppid;
 VAR_23->default_flags = VAR_28->default_flags;
 VAR_23->default_context = VAR_28->default_context;
 VAR_23->default_timetolive = VAR_28->default_timetolive;
 VAR_23->default_rcv_context = VAR_28->default_rcv_context;


 FUNC_6(&VAR_23->stats, 0, sizeof(struct sctp_priv_assoc_stats));


 FUNC_0(&VAR_23->endpoint_shared_keys);
 VAR_31 = FUNC_9(VAR_24, VAR_23, VAR_27);
 if (VAR_31)
  goto fail_init;

 VAR_23->active_key_id = VAR_24->active_key_id;
 VAR_23->asoc_shared_key = ((void*)0);

 VAR_23->default_hmac_id = 0;

 if (VAR_24->auth_hmacs_list)
  FUNC_5(VAR_23->c.auth_hmacs, VAR_24->auth_hmacs_list,
   FUNC_8(VAR_24->auth_hmacs_list->param_hdr.length));
 if (VAR_24->auth_chunk_list)
  FUNC_5(VAR_23->c.auth_chunks, VAR_24->auth_chunk_list,
   FUNC_8(VAR_24->auth_chunk_list->param_hdr.length));


 VAR_30 = (sctp_paramhdr_t *)VAR_23->c.auth_random;
 VAR_30->type = VAR_17;
 VAR_30->length = FUNC_3(sizeof(sctp_paramhdr_t) + VAR_2);
 FUNC_2(VAR_30+1, VAR_2);

 return VAR_23;

fail_init:
 FUNC_12(VAR_23->ep);
 FUNC_22(VAR_23->base.sk);
 return ((void*)0);
}
