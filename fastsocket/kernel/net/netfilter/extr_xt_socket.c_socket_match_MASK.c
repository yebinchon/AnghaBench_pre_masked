
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct xt_socket_mtinfo1 {int flags; } ;
struct xt_match_param {int in; } ;
struct udphdr {int dest; int source; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dev; } ;
struct nf_conn {int status; TYPE_7__* tuplehash; } ;
struct iphdr {scalar_t__ protocol; int daddr; int saddr; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _hdr ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_18__ {scalar_t__ rcv_saddr; scalar_t__ transparent; } ;
struct TYPE_17__ {scalar_t__ tw_transparent; } ;
struct TYPE_12__ {int port; } ;
struct TYPE_11__ {int port; } ;
struct TYPE_13__ {TYPE_3__ udp; TYPE_2__ tcp; } ;
struct TYPE_10__ {int ip; } ;
struct TYPE_14__ {TYPE_4__ u; TYPE_1__ u3; } ;
struct TYPE_15__ {TYPE_5__ src; } ;
struct TYPE_16__ {TYPE_6__ tuple; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff const*,scalar_t__*,int *,int *,int *,int *) ;
 TYPE_9__* FUNC_2 (struct sock*) ;
 TYPE_8__* FUNC_3 (struct sock*) ;
 struct iphdr* FUNC_4 (struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff const*) ;
 struct nf_conn const VAR_11 ;
 struct nf_conn* FUNC_6 (struct sk_buff const*,int*) ;
 struct sock* FUNC_7 (int ,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,scalar_t__,int *,int ,int *,int ,int *,int ,struct sock*) ;
 struct udphdr* FUNC_10 (struct sk_buff const*,int ,int,struct udphdr*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static bool
FUNC_12(const struct sk_buff *VAR_12, const struct xt_match_param *VAR_13,
      const struct xt_socket_mtinfo1 *VAR_14)
{
 const struct iphdr *VAR_15 = FUNC_4(VAR_12);
 struct udphdr VAR_16, *VAR_17 = ((void*)0);
 struct sock *VAR_18;
 __be32 VAR_19, VAR_20;
 __be16 VAR_21, VAR_22;
 u8 VAR_23;





 if (VAR_15->protocol == VAR_2 || VAR_15->protocol == VAR_1) {
  VAR_17 = FUNC_10(VAR_12, FUNC_5(VAR_12),
     sizeof(VAR_16), &VAR_16);
  if (VAR_17 == ((void*)0))
   return 0;

  VAR_23 = VAR_15->protocol;
  VAR_20 = VAR_15->saddr;
  VAR_22 = VAR_17->source;
  VAR_19 = VAR_15->daddr;
  VAR_21 = VAR_17->dest;

 } else if (VAR_15->protocol == VAR_0) {
  if (FUNC_1(VAR_12, &VAR_23, &VAR_20, &VAR_19,
     &VAR_22, &VAR_21))
   return 0;
 } else {
  return 0;
 }
 VAR_18 = FUNC_7(FUNC_0(VAR_12->dev), VAR_23,
       VAR_20, VAR_19, VAR_22, VAR_21, VAR_13->in, VAR_8);
 if (VAR_18 != ((void*)0)) {
  bool VAR_24;
  bool VAR_25 = 1;


  VAR_24 = (VAR_18->sk_state != VAR_9 &&
       FUNC_2(VAR_18)->rcv_saddr == 0);



  if (VAR_14 && VAR_14->flags & VAR_10)
   VAR_25 = ((VAR_18->sk_state != VAR_9 &&
     FUNC_2(VAR_18)->transparent) ||
           (VAR_18->sk_state == VAR_9 &&
     FUNC_3(VAR_18)->tw_transparent));

  FUNC_11(VAR_18);

  if (VAR_24 || !VAR_25)
   VAR_18 = ((void*)0);
 }

 FUNC_9("proto %hhu %pI4:%hu -> %pI4:%hu (orig %pI4:%hu) sock %p\n",
   VAR_23, &VAR_20, FUNC_8(VAR_22),
   &VAR_19, FUNC_8(VAR_21),
   &VAR_15->daddr, VAR_17 ? FUNC_8(VAR_17->dest) : 0, VAR_18);

 return (VAR_18 != ((void*)0));
}
