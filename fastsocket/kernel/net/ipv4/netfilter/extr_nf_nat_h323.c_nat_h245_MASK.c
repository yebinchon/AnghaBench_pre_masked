
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {scalar_t__* sig_port; } ;
struct TYPE_19__ {scalar_t__ port; } ;
struct TYPE_20__ {TYPE_12__ tcp; } ;
struct TYPE_18__ {int ip; } ;
struct TYPE_21__ {TYPE_13__ u; TYPE_11__ u3; } ;
struct TYPE_31__ {scalar_t__ port; } ;
struct TYPE_32__ {TYPE_8__ tcp; } ;
struct TYPE_30__ {int ip; } ;
struct TYPE_17__ {TYPE_9__ u; TYPE_7__ u3; } ;
struct TYPE_22__ {TYPE_14__ dst; TYPE_10__ src; } ;
struct TYPE_25__ {scalar_t__ port; } ;
struct TYPE_26__ {TYPE_2__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_15__ tuple; int expectfn; TYPE_3__ saved_proto; } ;
struct nf_conn {TYPE_6__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
typedef int TransportAddress ;
struct TYPE_27__ {int u3; } ;
struct TYPE_28__ {TYPE_4__ dst; } ;
struct TYPE_29__ {TYPE_5__ tuple; } ;
struct TYPE_24__ {struct nf_ct_h323_master ct_h323_info; } ;
struct TYPE_23__ {TYPE_1__ help; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct nf_conntrack_expect*) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 int VAR_0 ;
 TYPE_16__* FUNC_5 (struct nf_conn*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,unsigned char**,int,int *,int *,void*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_1, struct nf_conn *VAR_2,
      enum ip_conntrack_info VAR_3,
      unsigned char **VAR_4, int VAR_5,
      TransportAddress *VAR_6, __be16 VAR_7,
      struct nf_conntrack_expect *VAR_8)
{
 struct nf_ct_h323_master *VAR_9 = &FUNC_5(VAR_2)->help.ct_h323_info;
 int VAR_10 = FUNC_0(VAR_3);
 u_int16_t VAR_11 = FUNC_6(VAR_7);


 VAR_8->saved_proto.tcp.port = VAR_8->tuple.dst.u.tcp.port;
 VAR_8->expectfn = VAR_0;
 VAR_8->dir = !VAR_10;


 if (VAR_9->sig_port[VAR_10] == VAR_7)
  VAR_11 = FUNC_6(VAR_9->sig_port[!VAR_10]);


 for (; VAR_11 != 0; VAR_11++) {
  VAR_8->tuple.dst.u.tcp.port = FUNC_1(VAR_11);
  if (FUNC_3(VAR_8) == 0)
   break;
 }

 if (VAR_11 == 0) {
  if (FUNC_2())
   FUNC_8("nf_nat_q931: out of TCP ports\n");
  return 0;
 }


 if (FUNC_9(VAR_1, VAR_4, VAR_5, VAR_6,
     &VAR_2->tuplehash[!VAR_10].tuple.dst.u3,
     FUNC_1(VAR_11)) == 0) {

  VAR_9->sig_port[VAR_10] = VAR_7;
  VAR_9->sig_port[!VAR_10] = FUNC_1(VAR_11);
 } else {
  FUNC_4(VAR_8);
  return -1;
 }

 FUNC_7("nf_nat_q931: expect H.245 %pI4:%hu->%pI4:%hu\n",
   &VAR_8->tuple.src.u3.ip,
   FUNC_6(VAR_8->tuple.src.u.tcp.port),
   &VAR_8->tuple.dst.u3.ip,
   FUNC_6(VAR_8->tuple.dst.u.tcp.port));

 return 0;
}
