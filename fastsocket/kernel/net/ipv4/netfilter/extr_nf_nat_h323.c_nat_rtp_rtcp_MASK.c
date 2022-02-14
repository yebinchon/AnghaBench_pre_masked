
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


typedef int u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {scalar_t__** rtp_port; } ;
struct TYPE_19__ {scalar_t__ port; } ;
struct TYPE_20__ {TYPE_12__ udp; } ;
struct TYPE_18__ {int ip; } ;
struct TYPE_21__ {TYPE_13__ u; TYPE_11__ u3; } ;
struct TYPE_31__ {scalar_t__ port; } ;
struct TYPE_32__ {TYPE_8__ udp; } ;
struct TYPE_30__ {int ip; } ;
struct TYPE_17__ {TYPE_9__ u; TYPE_7__ u3; } ;
struct TYPE_22__ {TYPE_14__ dst; TYPE_10__ src; } ;
struct TYPE_25__ {scalar_t__ port; } ;
struct TYPE_26__ {TYPE_2__ udp; } ;
struct nf_conntrack_expect {int dir; TYPE_15__ tuple; void* expectfn; TYPE_3__ saved_proto; } ;
struct nf_conn {TYPE_6__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
struct TYPE_27__ {int u3; } ;
struct TYPE_28__ {TYPE_4__ dst; } ;
struct TYPE_29__ {TYPE_5__ tuple; } ;
struct TYPE_24__ {struct nf_ct_h323_master ct_h323_info; } ;
struct TYPE_23__ {TYPE_1__ help; } ;
typedef int H245_TransportAddress ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct nf_conntrack_expect*) ;
 int FUNC_4 (struct nf_conntrack_expect*) ;
 void* VAR_1 ;
 TYPE_16__* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int *,int,int *,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,unsigned char**,int,int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_2, struct nf_conn *VAR_3,
   enum ip_conntrack_info VAR_4,
   unsigned char **VAR_5, int VAR_6,
   H245_TransportAddress *VAR_7,
   __be16 VAR_8, __be16 VAR_9,
   struct nf_conntrack_expect *VAR_10,
   struct nf_conntrack_expect *VAR_11)
{
 struct nf_ct_h323_master *VAR_12 = &FUNC_5(VAR_3)->help.ct_h323_info;
 int VAR_13 = FUNC_0(VAR_4);
 int VAR_14;
 u_int16_t VAR_15;


 VAR_10->saved_proto.udp.port = VAR_10->tuple.dst.u.udp.port;
 VAR_10->expectfn = VAR_1;
 VAR_10->dir = !VAR_13;
 VAR_11->saved_proto.udp.port = VAR_11->tuple.dst.u.udp.port;
 VAR_11->expectfn = VAR_1;
 VAR_11->dir = !VAR_13;


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  if (VAR_12->rtp_port[VAR_14][VAR_13] == VAR_9) {




   VAR_10->tuple.dst.u.udp.port = VAR_12->rtp_port[VAR_14][VAR_13];
   VAR_11->tuple.dst.u.udp.port =
       FUNC_1(FUNC_6(VAR_12->rtp_port[VAR_14][VAR_13]) + 1);
   break;
  } else if (VAR_12->rtp_port[VAR_14][VAR_13] == 0) {

   break;
  }
 }


 if (VAR_14 >= VAR_0) {
  if (FUNC_2())
   FUNC_8("nf_nat_h323: out of expectations\n");
  return 0;
 }


 for (VAR_15 = FUNC_6(VAR_10->tuple.dst.u.udp.port);
      VAR_15 != 0; VAR_15 += 2) {
  VAR_10->tuple.dst.u.udp.port = FUNC_1(VAR_15);
  if (FUNC_3(VAR_10) == 0) {
   VAR_11->tuple.dst.u.udp.port =
       FUNC_1(VAR_15 + 1);
   if (FUNC_3(VAR_11) == 0)
    break;
   FUNC_4(VAR_10);
  }
 }

 if (VAR_15 == 0) {
  if (FUNC_2())
   FUNC_8("nf_nat_h323: out of RTP ports\n");
  return 0;
 }


 if (FUNC_9(VAR_2, VAR_5, VAR_6, VAR_7,
     &VAR_3->tuplehash[!VAR_13].tuple.dst.u3,
     FUNC_1((VAR_8 & FUNC_1(1)) ? VAR_15 + 1 :
          VAR_15)) == 0) {

  VAR_12->rtp_port[VAR_14][VAR_13] = VAR_9;
  VAR_12->rtp_port[VAR_14][!VAR_13] = FUNC_1(VAR_15);
 } else {
  FUNC_4(VAR_10);
  FUNC_4(VAR_11);
  return -1;
 }


 FUNC_7("nf_nat_h323: expect RTP %pI4:%hu->%pI4:%hu\n",
   &VAR_10->tuple.src.u3.ip,
   FUNC_6(VAR_10->tuple.src.u.udp.port),
   &VAR_10->tuple.dst.u3.ip,
   FUNC_6(VAR_10->tuple.dst.u.udp.port));
 FUNC_7("nf_nat_h323: expect RTCP %pI4:%hu->%pI4:%hu\n",
   &VAR_11->tuple.src.u3.ip,
   FUNC_6(VAR_11->tuple.src.u.udp.port),
   &VAR_11->tuple.dst.u3.ip,
   FUNC_6(VAR_11->tuple.dst.u.udp.port));

 return 0;
}
