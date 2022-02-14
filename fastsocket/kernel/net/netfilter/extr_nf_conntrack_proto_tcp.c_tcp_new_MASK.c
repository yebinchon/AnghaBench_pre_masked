
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int window; int seq; } ;
struct sk_buff {int len; } ;
struct TYPE_3__ {size_t state; int last_index; struct ip_ct_tcp_state* seen; } ;
struct TYPE_4__ {TYPE_1__ tcp; } ;
struct nf_conn {TYPE_2__ proto; } ;
struct ip_ct_tcp_state {int td_end; int td_maxwin; int td_maxend; int flags; scalar_t__ td_scale; } ;
typedef enum tcp_conntrack { ____Placeholder_tcp_conntrack } tcp_conntrack ;
typedef int _tcph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (struct tcphdr const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 void* FUNC_5 (int ,int ,unsigned int,struct tcphdr const*) ;
 struct tcphdr* FUNC_6 (struct sk_buff const*,unsigned int,int,struct tcphdr*) ;
 int*** VAR_7 ;
 int FUNC_7 (struct sk_buff const*,unsigned int,struct tcphdr const*,struct ip_ct_tcp_state*) ;

__attribute__((used)) static bool FUNC_8(struct nf_conn *VAR_8, const struct sk_buff *VAR_9,
      unsigned int VAR_10)
{
 enum tcp_conntrack VAR_11;
 const struct tcphdr *VAR_12;
 struct tcphdr VAR_13;
 const struct ip_ct_tcp_state *VAR_14 = &VAR_8->proto.tcp.seen[0];
 const struct ip_ct_tcp_state *VAR_15 = &VAR_8->proto.tcp.seen[1];

 VAR_12 = FUNC_6(VAR_9, VAR_10, sizeof(VAR_13), &VAR_13);
 FUNC_0(VAR_12 == ((void*)0));


 VAR_11
  = VAR_7[0][FUNC_1(VAR_12)]
  [VAR_3];


 if (VAR_11 >= VAR_2) {
  FUNC_4("nf_ct_tcp: invalid new deleting.\n");
  return 0;
 }

 if (VAR_11 == VAR_4) {

  VAR_8->proto.tcp.seen[0].td_end =
   FUNC_5(FUNC_2(VAR_12->seq), VAR_9->len,
          VAR_10, VAR_12);
  VAR_8->proto.tcp.seen[0].td_maxwin = FUNC_3(VAR_12->window);
  if (VAR_8->proto.tcp.seen[0].td_maxwin == 0)
   VAR_8->proto.tcp.seen[0].td_maxwin = 1;
  VAR_8->proto.tcp.seen[0].td_maxend =
   VAR_8->proto.tcp.seen[0].td_end;

  FUNC_7(VAR_9, VAR_10, VAR_12, &VAR_8->proto.tcp.seen[0]);
  VAR_8->proto.tcp.seen[1].flags = 0;
 } else if (VAR_6 == 0) {

  return 0;
 } else {





  VAR_8->proto.tcp.seen[0].td_end =
   FUNC_5(FUNC_2(VAR_12->seq), VAR_9->len,
          VAR_10, VAR_12);
  VAR_8->proto.tcp.seen[0].td_maxwin = FUNC_3(VAR_12->window);
  if (VAR_8->proto.tcp.seen[0].td_maxwin == 0)
   VAR_8->proto.tcp.seen[0].td_maxwin = 1;
  VAR_8->proto.tcp.seen[0].td_maxend =
   VAR_8->proto.tcp.seen[0].td_end +
   VAR_8->proto.tcp.seen[0].td_maxwin;
  VAR_8->proto.tcp.seen[0].td_scale = 0;



  VAR_8->proto.tcp.seen[0].flags =
  VAR_8->proto.tcp.seen[1].flags = VAR_1 |
           VAR_0;
 }

 VAR_8->proto.tcp.seen[1].td_end = 0;
 VAR_8->proto.tcp.seen[1].td_maxend = 0;
 VAR_8->proto.tcp.seen[1].td_maxwin = 0;
 VAR_8->proto.tcp.seen[1].td_scale = 0;


 VAR_8->proto.tcp.state = VAR_3;
 VAR_8->proto.tcp.last_index = VAR_5;

 FUNC_4("tcp_new: sender end=%u maxend=%u maxwin=%u scale=%i "
   "receiver end=%u maxend=%u maxwin=%u scale=%i\n",
   VAR_14->td_end, VAR_14->td_maxend, VAR_14->td_maxwin,
   VAR_14->td_scale,
   VAR_15->td_end, VAR_15->td_maxend, VAR_15->td_maxwin,
   VAR_15->td_scale);
 return 1;
}
