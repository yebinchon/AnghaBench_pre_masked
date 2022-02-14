
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


union nf_inet_addr {scalar_t__ ip; } ;
typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_16__ {scalar_t__ port; } ;
struct TYPE_17__ {TYPE_12__ udp; } ;
struct TYPE_25__ {scalar_t__ port; } ;
struct TYPE_26__ {TYPE_8__ udp; } ;
struct TYPE_24__ {scalar_t__ ip; } ;
struct TYPE_14__ {TYPE_9__ u; TYPE_7__ u3; } ;
struct TYPE_15__ {TYPE_10__ dst; } ;
struct nf_conntrack_expect {scalar_t__ saved_ip; int dir; TYPE_13__ saved_proto; TYPE_11__ tuple; void* expectfn; } ;
struct nf_conn {TYPE_6__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_20__ {scalar_t__ ip; } ;
struct TYPE_21__ {TYPE_3__ u3; } ;
struct TYPE_18__ {scalar_t__ ip; } ;
struct TYPE_19__ {TYPE_1__ u3; } ;
struct TYPE_22__ {TYPE_4__ dst; TYPE_2__ src; } ;
struct TYPE_23__ {TYPE_5__ tuple; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,scalar_t__) ;
 void* VAR_2 ;
 scalar_t__ FUNC_3 (struct nf_conntrack_expect*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_7(struct sk_buff *VAR_3,
         const char **VAR_4,
         unsigned int *VAR_5,
         struct nf_conntrack_expect *VAR_6,
         struct nf_conntrack_expect *VAR_7,
         unsigned int VAR_8,
         unsigned int VAR_9,
         union nf_inet_addr *VAR_10)
{
 enum ip_conntrack_info VAR_11;
 struct nf_conn *VAR_12 = FUNC_4(VAR_3, &VAR_11);
 enum ip_conntrack_dir VAR_13 = FUNC_0(VAR_11);
 u_int16_t VAR_14;


 if (VAR_12->tuplehash[VAR_13].tuple.src.u3.ip ==
     VAR_12->tuplehash[!VAR_13].tuple.dst.u3.ip)
  VAR_10->ip = VAR_6->tuple.dst.u3.ip;
 else
  VAR_10->ip = VAR_12->tuplehash[!VAR_13].tuple.dst.u3.ip;

 VAR_6->saved_ip = VAR_6->tuple.dst.u3.ip;
 VAR_6->tuple.dst.u3.ip = VAR_10->ip;
 VAR_6->saved_proto.udp.port = VAR_6->tuple.dst.u.udp.port;
 VAR_6->dir = !VAR_13;
 VAR_6->expectfn = VAR_2;

 VAR_7->saved_ip = VAR_7->tuple.dst.u3.ip;
 VAR_7->tuple.dst.u3.ip = VAR_10->ip;
 VAR_7->saved_proto.udp.port = VAR_7->tuple.dst.u.udp.port;
 VAR_7->dir = !VAR_13;
 VAR_7->expectfn = VAR_2;


 for (VAR_14 = FUNC_6(VAR_6->tuple.dst.u.udp.port);
      VAR_14 != 0; VAR_14 += 2) {
  VAR_6->tuple.dst.u.udp.port = FUNC_1(VAR_14);
  if (FUNC_3(VAR_6) != 0)
   continue;
  VAR_7->tuple.dst.u.udp.port = FUNC_1(VAR_14 + 1);
  if (FUNC_3(VAR_7) == 0)
   break;
  FUNC_5(VAR_6);
 }

 if (VAR_14 == 0)
  goto err1;


 if (VAR_6->tuple.dst.u.udp.port != VAR_6->saved_proto.udp.port &&
     !FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9, VAR_14))
  goto err2;

 return VAR_0;

err2:
 FUNC_5(VAR_6);
 FUNC_5(VAR_7);
err1:
 return VAR_1;
}
