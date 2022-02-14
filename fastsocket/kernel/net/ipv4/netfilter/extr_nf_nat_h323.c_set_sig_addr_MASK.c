
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union nf_inet_addr {scalar_t__ ip; } ;
struct sk_buff {int dummy; } ;
struct nf_ct_h323_master {scalar_t__* sig_port; } ;
struct nf_conn {TYPE_5__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
typedef int TransportAddress ;
struct TYPE_8__ {struct nf_ct_h323_master ct_h323_info; } ;
struct TYPE_14__ {TYPE_1__ help; } ;
struct TYPE_13__ {scalar_t__ ip; } ;
struct TYPE_10__ {TYPE_6__ u3; } ;
struct TYPE_9__ {TYPE_6__ u3; } ;
struct TYPE_11__ {TYPE_3__ src; TYPE_2__ dst; } ;
struct TYPE_12__ {TYPE_4__ tuple; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,scalar_t__*) ;
 TYPE_7__* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,unsigned char**,int ,int *,TYPE_6__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, struct nf_conn *VAR_1,
   enum ip_conntrack_info VAR_2,
   unsigned char **VAR_3,
   TransportAddress *VAR_4, int VAR_5)
{
 const struct nf_ct_h323_master *VAR_6 = &FUNC_2(VAR_1)->help.ct_h323_info;
 int VAR_7 = FUNC_0(VAR_2);
 int VAR_8;
 __be16 VAR_9;
 union nf_inet_addr VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (FUNC_1(VAR_1, *VAR_3, &VAR_4[VAR_8], &VAR_10, &VAR_9)) {
   if (VAR_10.ip == VAR_1->tuplehash[VAR_7].tuple.src.u3.ip &&
       VAR_9 == VAR_6->sig_port[VAR_7]) {



    if (VAR_8 > 0 &&
        FUNC_1(VAR_1, *VAR_3, &VAR_4[0],
        &VAR_10, &VAR_9) &&
        (FUNC_3(VAR_10.ip) & 0xff000000) == 0x7f000000)
     VAR_8 = 0;

    FUNC_4("nf_nat_ras: set signal address %pI4:%hu->%pI4:%hu\n",
      &VAR_10.ip, VAR_9,
      &VAR_1->tuplehash[!VAR_7].tuple.dst.u3.ip,
      VAR_6->sig_port[!VAR_7]);
    return FUNC_5(VAR_0, VAR_3, 0, &VAR_4[VAR_8],
           &VAR_1->tuplehash[!VAR_7].
           tuple.dst.u3,
           VAR_6->sig_port[!VAR_7]);
   } else if (VAR_10.ip == VAR_1->tuplehash[VAR_7].tuple.dst.u3.ip &&
       VAR_9 == VAR_6->sig_port[VAR_7]) {

    FUNC_4("nf_nat_ras: set signal address %pI4:%hu->%pI4:%hu\n",
      &VAR_10.ip, VAR_9,
      &VAR_1->tuplehash[!VAR_7].tuple.src.u3.ip,
      VAR_6->sig_port[!VAR_7]);
    return FUNC_5(VAR_0, VAR_3, 0, &VAR_4[VAR_8],
           &VAR_1->tuplehash[!VAR_7].
           tuple.src.u3,
           VAR_6->sig_port[!VAR_7]);
   }
  }
 }

 return 0;
}
