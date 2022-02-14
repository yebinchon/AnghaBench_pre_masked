
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
struct tcphdr {scalar_t__ rst; scalar_t__ fin; scalar_t__ ack; scalar_t__ syn; int ack_seq; int seq; int window; } ;
struct sk_buff {int len; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct TYPE_9__ {int state; int last_dir; unsigned int last_index; int last_win; scalar_t__ retrans; TYPE_5__* seen; int last_end; int last_seq; } ;
struct TYPE_7__ {TYPE_4__ tcp; } ;
struct TYPE_6__ {int last_wscale; int last_flags; } ;
struct nf_conn {int status; int lock; TYPE_2__ proto; TYPE_1__ proto_ext; TYPE_3__* tuplehash; } ;
struct net {int dummy; } ;
struct ip_ct_tcp_state {int flags; int td_scale; } ;
typedef enum tcp_conntrack { ____Placeholder_tcp_conntrack } tcp_conntrack ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef int _tcph ;
struct TYPE_10__ {int flags; int td_maxwin; int td_scale; int td_maxack; int td_maxend; int td_end; } ;
struct TYPE_8__ {struct nf_conntrack_tuple tuple; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;

 int VAR_15 ;
 int VAR_16 ;


 int VAR_17 ;

 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (struct tcphdr const*) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (int ,struct nf_conn*) ;
 int FUNC_7 (struct nf_conntrack_tuple*) ;
 int FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*,int,struct sk_buff const*) ;
 struct net* FUNC_10 (struct nf_conn*) ;
 int FUNC_11 (struct nf_conn*,int,struct sk_buff const*,unsigned long) ;
 scalar_t__ VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 int FUNC_12 (int ,int ,struct sk_buff const*,int *,int *,int *,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int ,int ,unsigned int,struct tcphdr const*) ;
 int FUNC_17 (int ,int *) ;
 struct tcphdr* FUNC_18 (struct sk_buff const*,unsigned int,int,struct tcphdr*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int*** VAR_25 ;
 int FUNC_21 (struct nf_conn*,TYPE_4__*,int,unsigned int,struct sk_buff const*,unsigned int,struct tcphdr const*,int ) ;
 int FUNC_22 (struct sk_buff const*,unsigned int,struct tcphdr const*,struct ip_ct_tcp_state*) ;
 unsigned long* VAR_26 ;
 scalar_t__ FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct nf_conn *VAR_27,
        const struct sk_buff *VAR_28,
        unsigned int VAR_29,
        enum ip_conntrack_info VAR_30,
        u_int8_t VAR_31,
        unsigned int VAR_32)
{
 struct net *VAR_33 = FUNC_10(VAR_27);
 struct nf_conntrack_tuple *VAR_34;
 enum tcp_conntrack VAR_35, VAR_36;
 enum ip_conntrack_dir VAR_37;
 const struct tcphdr *VAR_38;
 struct tcphdr VAR_39;
 unsigned long VAR_40;
 unsigned int VAR_41;

 VAR_38 = FUNC_18(VAR_28, VAR_29, sizeof(VAR_39), &VAR_39);
 FUNC_0(VAR_38 == ((void*)0));

 FUNC_19(&VAR_27->lock);
 VAR_36 = VAR_27->proto.tcp.state;
 VAR_37 = FUNC_1(VAR_30);
 VAR_41 = FUNC_4(VAR_38);
 VAR_35 = VAR_25[VAR_37][VAR_41][VAR_36];
 VAR_34 = &VAR_27->tuplehash[VAR_37].tuple;

 switch (VAR_35) {
 case 128:
  if (VAR_36 < VAR_18)
   break;
  if (((VAR_27->proto.tcp.seen[VAR_37].flags
        | VAR_27->proto.tcp.seen[!VAR_37].flags)
       & VAR_6)
      || (VAR_27->proto.tcp.last_dir == VAR_37
          && VAR_27->proto.tcp.last_index == VAR_19)) {


   FUNC_20(&VAR_27->lock);





   if (FUNC_8(VAR_27))
    return -VAR_13;
   return VAR_12;
  }

 case 130:
  if (VAR_41 == VAR_20
      && VAR_27->proto.tcp.last_index == VAR_21
      && VAR_27->proto.tcp.last_dir != VAR_37
      && FUNC_13(VAR_38->ack_seq) == VAR_27->proto.tcp.last_end) {






   VAR_36 = 128;
   VAR_35 = VAR_17;
   VAR_27->proto.tcp.seen[VAR_27->proto.tcp.last_dir].td_end =
    VAR_27->proto.tcp.last_end;
   VAR_27->proto.tcp.seen[VAR_27->proto.tcp.last_dir].td_maxend =
    VAR_27->proto.tcp.last_end;
   VAR_27->proto.tcp.seen[VAR_27->proto.tcp.last_dir].td_maxwin =
    VAR_27->proto.tcp.last_win == 0 ?
     1 : VAR_27->proto.tcp.last_win;
   VAR_27->proto.tcp.seen[VAR_27->proto.tcp.last_dir].td_scale =
    VAR_27->proto_ext.last_wscale;
   VAR_27->proto.tcp.seen[VAR_27->proto.tcp.last_dir].flags =
    VAR_27->proto_ext.last_flags;
   FUNC_5(&VAR_27->proto.tcp.seen[VAR_37], 0,
          sizeof(struct ip_ct_tcp_state));
   break;
  }
  VAR_27->proto.tcp.last_index = VAR_41;
  VAR_27->proto.tcp.last_dir = VAR_37;
  VAR_27->proto.tcp.last_seq = FUNC_13(VAR_38->seq);
  VAR_27->proto.tcp.last_end =
      FUNC_16(FUNC_13(VAR_38->seq), VAR_28->len, VAR_29, VAR_38);
  VAR_27->proto.tcp.last_win = FUNC_14(VAR_38->window);






  if (VAR_41 == VAR_21 && VAR_37 == VAR_5) {
   struct ip_ct_tcp_state VAR_42 = {};

   VAR_27->proto_ext.last_flags =
   VAR_27->proto_ext.last_wscale = 0;
   FUNC_22(VAR_28, VAR_29, VAR_38, &VAR_42);
   if (VAR_42.flags & VAR_10) {
    VAR_27->proto_ext.last_flags |=
     VAR_10;
    VAR_27->proto_ext.last_wscale = VAR_42.td_scale;
   }
   if (VAR_42.flags & VAR_9) {
    VAR_27->proto_ext.last_flags |=
     VAR_9;
   }
  }
  FUNC_20(&VAR_27->lock);
  if (FUNC_2(VAR_33, VAR_2))
   FUNC_12(VAR_31, 0, VAR_28, ((void*)0), ((void*)0), ((void*)0),
      "nf_ct_tcp: invalid packet ignored ");
  return VAR_11;
 case 129:

  FUNC_15("nf_ct_tcp: Invalid dir=%i index=%u ostate=%u\n",
    VAR_37, FUNC_4(VAR_38), VAR_36);
  FUNC_20(&VAR_27->lock);
  if (FUNC_2(VAR_33, VAR_2))
   FUNC_12(VAR_31, 0, VAR_28, ((void*)0), ((void*)0), ((void*)0),
      "nf_ct_tcp: invalid state ");
  return -VAR_11;
 case 131:
  if (VAR_41 == VAR_19
      && (VAR_27->proto.tcp.seen[!VAR_37].flags & VAR_8)
      && FUNC_3(FUNC_13(VAR_38->seq), VAR_27->proto.tcp.seen[!VAR_37].td_maxack)) {

   FUNC_20(&VAR_27->lock);
   if (FUNC_2(VAR_33, VAR_2))
    FUNC_12(VAR_31, 0, VAR_28, ((void*)0), ((void*)0), ((void*)0),
       "nf_ct_tcp: invalid RST ");
   return -VAR_11;
  }
  if (VAR_41 == VAR_19
      && ((FUNC_23(VAR_4, &VAR_27->status)
    && VAR_27->proto.tcp.last_index == VAR_21)
   || (!FUNC_23(VAR_3, &VAR_27->status)
       && VAR_27->proto.tcp.last_index == VAR_14))
      && FUNC_13(VAR_38->ack_seq) == VAR_27->proto.tcp.last_end) {
   goto in_window;
  }

 default:

  break;
 }

 if (!FUNC_21(VAR_27, &VAR_27->proto.tcp, VAR_37, VAR_41,
      VAR_28, VAR_29, VAR_38, VAR_31)) {
  FUNC_20(&VAR_27->lock);
  return -VAR_11;
 }
     in_window:

 VAR_27->proto.tcp.last_index = VAR_41;
 VAR_27->proto.tcp.last_dir = VAR_37;

 FUNC_15("tcp_conntracks: ");
 FUNC_7(VAR_34);
 FUNC_15("syn=%i ack=%i fin=%i rst=%i old=%i new=%i\n",
   (VAR_38->syn ? 1 : 0), (VAR_38->ack ? 1 : 0),
   (VAR_38->fin ? 1 : 0), (VAR_38->rst ? 1 : 0),
   VAR_36, VAR_35);

 VAR_27->proto.tcp.state = VAR_35;
 if (VAR_36 != VAR_35
     && VAR_35 == VAR_16)
  VAR_27->proto.tcp.seen[VAR_37].flags |= VAR_6;

 if (VAR_27->proto.tcp.retrans >= VAR_22 &&
     VAR_26[VAR_35] > VAR_23)
  VAR_40 = VAR_23;
 else if ((VAR_27->proto.tcp.seen[0].flags | VAR_27->proto.tcp.seen[1].flags) &
   VAR_7 &&
   VAR_26[VAR_35] > VAR_24)
  VAR_40 = VAR_24;
 else
  VAR_40 = VAR_26[VAR_35];
 FUNC_20(&VAR_27->lock);

 if (VAR_35 != VAR_36)
  FUNC_6(VAR_0, VAR_27);

 if (!FUNC_23(VAR_4, &VAR_27->status)) {




  if (VAR_38->rst) {
   FUNC_9(VAR_27, VAR_30, VAR_28);
   return VAR_11;
  }
 } else if (!FUNC_23(VAR_3, &VAR_27->status)
     && (VAR_36 == VAR_17
         || VAR_36 == VAR_15)
     && VAR_35 == VAR_15) {



  FUNC_17(VAR_3, &VAR_27->status);
  FUNC_6(VAR_1, VAR_27);
 }
 FUNC_11(VAR_27, VAR_30, VAR_28, VAR_40);

 return VAR_11;
}
