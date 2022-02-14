
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


union nf_inet_addr {int ip; } ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {void** sig_port; } ;
struct TYPE_19__ {void* port; } ;
struct TYPE_20__ {TYPE_12__ tcp; } ;
struct TYPE_18__ {int ip; } ;
struct TYPE_21__ {TYPE_13__ u; TYPE_11__ u3; } ;
struct TYPE_31__ {void* port; } ;
struct TYPE_32__ {TYPE_8__ tcp; } ;
struct TYPE_30__ {int ip; } ;
struct TYPE_17__ {TYPE_9__ u; TYPE_7__ u3; } ;
struct TYPE_22__ {TYPE_14__ dst; TYPE_10__ src; } ;
struct TYPE_25__ {void* port; } ;
struct TYPE_26__ {TYPE_2__ tcp; } ;
struct nf_conntrack_expect {int dir; TYPE_15__ tuple; int expectfn; TYPE_3__ saved_proto; } ;
struct nf_conn {TYPE_6__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef void* __be16 ;
typedef int TransportAddress ;
struct TYPE_27__ {int u3; } ;
struct TYPE_28__ {TYPE_4__ dst; } ;
struct TYPE_29__ {TYPE_5__ tuple; } ;
struct TYPE_24__ {struct nf_ct_h323_master ct_h323_info; } ;
struct TYPE_23__ {TYPE_1__ help; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,void**) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct nf_conntrack_expect*) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 TYPE_16__* FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (char*,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,unsigned char**,int ,int *,int *,void*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_1, struct nf_conn *VAR_2,
      enum ip_conntrack_info VAR_3,
      unsigned char **VAR_4, TransportAddress *VAR_5, int VAR_6,
      __be16 VAR_7, struct nf_conntrack_expect *VAR_8)
{
 struct nf_ct_h323_master *VAR_9 = &FUNC_6(VAR_2)->help.ct_h323_info;
 int VAR_10 = FUNC_0(VAR_3);
 u_int16_t VAR_11 = FUNC_8(VAR_7);
 union nf_inet_addr VAR_12;


 VAR_8->saved_proto.tcp.port = VAR_8->tuple.dst.u.tcp.port;
 VAR_8->expectfn = VAR_0;
 VAR_8->dir = !VAR_10;


 if (VAR_9->sig_port[VAR_10] == VAR_7)
  VAR_11 = FUNC_8(VAR_9->sig_port[!VAR_10]);


 for (; VAR_11 != 0; VAR_11++) {
  VAR_8->tuple.dst.u.tcp.port = FUNC_2(VAR_11);
  if (FUNC_4(VAR_8) == 0)
   break;
 }

 if (VAR_11 == 0) {
  if (FUNC_3())
   FUNC_10("nf_nat_ras: out of TCP ports\n");
  return 0;
 }


 if (FUNC_11(VAR_1, VAR_4, 0, &VAR_5[VAR_6],
     &VAR_2->tuplehash[!VAR_10].tuple.dst.u3,
     FUNC_2(VAR_11)) == 0) {

  VAR_9->sig_port[VAR_10] = VAR_7;
  VAR_9->sig_port[!VAR_10] = FUNC_2(VAR_11);


  if (VAR_6 > 0 &&
      FUNC_1(VAR_2, *VAR_4, &VAR_5[0], &VAR_12, &VAR_7) &&
      (FUNC_7(VAR_12.ip) & 0xff000000) == 0x7f000000) {
   FUNC_11(VAR_1, VAR_4, 0, &VAR_5[0],
          &VAR_2->tuplehash[!VAR_10].tuple.dst.u3,
          VAR_9->sig_port[!VAR_10]);
  }
 } else {
  FUNC_5(VAR_8);
  return -1;
 }


 FUNC_9("nf_nat_ras: expect Q.931 %pI4:%hu->%pI4:%hu\n",
   &VAR_8->tuple.src.u3.ip,
   FUNC_8(VAR_8->tuple.src.u.tcp.port),
   &VAR_8->tuple.dst.u3.ip,
   FUNC_8(VAR_8->tuple.dst.u.tcp.port));

 return 0;
}
