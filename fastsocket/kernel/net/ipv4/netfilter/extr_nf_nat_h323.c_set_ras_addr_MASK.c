
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


union nf_inet_addr {scalar_t__ ip; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {TYPE_9__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef scalar_t__ __be16 ;
typedef int TransportAddress ;
struct TYPE_16__ {scalar_t__ port; } ;
struct TYPE_17__ {TYPE_5__ udp; } ;
struct TYPE_11__ {int ip; } ;
struct TYPE_18__ {TYPE_6__ u; TYPE_10__ u3; } ;
struct TYPE_13__ {scalar_t__ port; } ;
struct TYPE_14__ {TYPE_2__ udp; } ;
struct TYPE_12__ {scalar_t__ ip; } ;
struct TYPE_15__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct TYPE_19__ {TYPE_7__ dst; TYPE_4__ src; } ;
struct TYPE_20__ {TYPE_8__ tuple; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nf_conn*,unsigned char*,int *,union nf_inet_addr*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__*,int ,int *,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char**,int ,int *,TYPE_10__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct nf_conn *VAR_1,
   enum ip_conntrack_info VAR_2,
   unsigned char **VAR_3,
   TransportAddress *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2);
 int VAR_7;
 __be16 VAR_8;
 union nf_inet_addr VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (FUNC_1(VAR_1, *VAR_3, &VAR_4[VAR_7], &VAR_9, &VAR_8) &&
      VAR_9.ip == VAR_1->tuplehash[VAR_6].tuple.src.u3.ip &&
      VAR_8 == VAR_1->tuplehash[VAR_6].tuple.src.u.udp.port) {
   FUNC_3("nf_nat_ras: set rasAddress %pI4:%hu->%pI4:%hu\n",
     &VAR_9.ip, FUNC_2(VAR_8),
     &VAR_1->tuplehash[!VAR_6].tuple.dst.u3.ip,
     FUNC_2(VAR_1->tuplehash[!VAR_6].tuple.dst.u.udp.port));
   return FUNC_4(VAR_0, VAR_3, 0, &VAR_4[VAR_7],
          &VAR_1->tuplehash[!VAR_6].tuple.dst.u3,
          VAR_1->tuplehash[!VAR_6].tuple.
        dst.u.udp.port);
  }
 }

 return 0;
}
