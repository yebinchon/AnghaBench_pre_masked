
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_16__ {int port; } ;
struct TYPE_17__ {TYPE_11__ tcp; } ;
struct TYPE_15__ {int ip; } ;
struct TYPE_18__ {TYPE_12__ u; TYPE_10__ u3; } ;
struct TYPE_26__ {int port; } ;
struct TYPE_27__ {TYPE_7__ tcp; } ;
struct TYPE_25__ {int ip; } ;
struct TYPE_28__ {TYPE_8__ u; TYPE_6__ u3; } ;
struct TYPE_19__ {TYPE_13__ dst; TYPE_9__ src; } ;
struct TYPE_20__ {int port; } ;
struct TYPE_21__ {TYPE_1__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_14__ tuple; int expectfn; TYPE_2__ saved_proto; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;
struct TYPE_22__ {int u3; } ;
struct TYPE_23__ {TYPE_3__ dst; } ;
struct TYPE_24__ {TYPE_4__ tuple; } ;
typedef int H245_TransportAddress ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct nf_conntrack_expect*) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,unsigned char**,int,int *,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct nf_conn *VAR_2,
      enum ip_conntrack_info VAR_3,
      unsigned char **VAR_4, int VAR_5,
      H245_TransportAddress *VAR_6, __be16 VAR_7,
      struct nf_conntrack_expect *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_3);
 u_int16_t VAR_10 = FUNC_5(VAR_7);


 VAR_8->saved_proto.tcp.port = VAR_8->tuple.dst.u.tcp.port;
 VAR_8->expectfn = VAR_0;
 VAR_8->dir = !VAR_9;


 for (; VAR_10 != 0; VAR_10++) {
  VAR_8->tuple.dst.u.tcp.port = FUNC_1(VAR_10);
  if (FUNC_3(VAR_8) == 0)
   break;
 }

 if (VAR_10 == 0) {
  if (FUNC_2())
   FUNC_7("nf_nat_h323: out of TCP ports\n");
  return 0;
 }


 if (FUNC_8(VAR_1, VAR_4, VAR_5, VAR_6,
     &VAR_2->tuplehash[!VAR_9].tuple.dst.u3,
     FUNC_1(VAR_10)) < 0) {
  FUNC_4(VAR_8);
  return -1;
 }

 FUNC_6("nf_nat_h323: expect T.120 %pI4:%hu->%pI4:%hu\n",
   &VAR_8->tuple.src.u3.ip,
   FUNC_5(VAR_8->tuple.src.u.tcp.port),
   &VAR_8->tuple.dst.u3.ip,
   FUNC_5(VAR_8->tuple.dst.u.tcp.port));

 return 0;
}
