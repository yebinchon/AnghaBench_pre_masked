
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_24__ {scalar_t__ port; } ;
struct TYPE_25__ {TYPE_16__ udp; } ;
struct TYPE_20__ {scalar_t__ port; } ;
struct TYPE_21__ {TYPE_12__ udp; } ;
struct TYPE_19__ {scalar_t__ ip; } ;
struct TYPE_22__ {TYPE_13__ u; TYPE_11__ u3; } ;
struct TYPE_23__ {TYPE_14__ dst; } ;
struct nf_conntrack_expect {scalar_t__ saved_ip; int dir; TYPE_17__ saved_proto; TYPE_15__ tuple; int expectfn; } ;
struct nf_conn {TYPE_10__* tuplehash; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
typedef scalar_t__ __be32 ;
struct TYPE_31__ {scalar_t__ port; } ;
struct TYPE_32__ {TYPE_6__ udp; } ;
struct TYPE_27__ {scalar_t__ ip; } ;
struct TYPE_33__ {TYPE_7__ u; TYPE_2__ u3; } ;
struct TYPE_28__ {scalar_t__ port; } ;
struct TYPE_29__ {TYPE_3__ udp; } ;
struct TYPE_26__ {scalar_t__ ip; } ;
struct TYPE_30__ {TYPE_4__ u; TYPE_1__ u3; } ;
struct TYPE_34__ {TYPE_8__ dst; TYPE_5__ src; } ;
struct TYPE_18__ {TYPE_9__ tuple; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 scalar_t__ FUNC_3 (struct nf_conntrack_expect*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 unsigned int FUNC_7 (char*,char*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_8(struct sk_buff *VAR_3,
          const char **VAR_4, unsigned int *VAR_5,
          struct nf_conntrack_expect *VAR_6,
          unsigned int VAR_7,
          unsigned int VAR_8)
{
 enum ip_conntrack_info VAR_9;
 struct nf_conn *VAR_10 = FUNC_4(VAR_3, &VAR_9);
 enum ip_conntrack_dir VAR_11 = FUNC_0(VAR_9);
 __be32 VAR_12;
 u_int16_t VAR_13;
 char VAR_14[sizeof("nnn.nnn.nnn.nnn:nnnnn")];
 unsigned VAR_15;


 if (VAR_10->tuplehash[VAR_11].tuple.src.u3.ip == VAR_10->tuplehash[!VAR_11].tuple.dst.u3.ip)
  VAR_12 = VAR_6->tuple.dst.u3.ip;
 else
  VAR_12 = VAR_10->tuplehash[!VAR_11].tuple.dst.u3.ip;




 if (VAR_6->tuple.dst.u.udp.port ==
     VAR_10->tuplehash[VAR_11].tuple.src.u.udp.port)
  VAR_13 = FUNC_6(VAR_10->tuplehash[!VAR_11].tuple.dst.u.udp.port);
 else
  VAR_13 = FUNC_6(VAR_6->tuple.dst.u.udp.port);

 VAR_6->saved_ip = VAR_6->tuple.dst.u3.ip;
 VAR_6->tuple.dst.u3.ip = VAR_12;
 VAR_6->saved_proto.udp.port = VAR_6->tuple.dst.u.udp.port;
 VAR_6->dir = !VAR_11;
 VAR_6->expectfn = VAR_2;

 for (; VAR_13 != 0; VAR_13++) {
  VAR_6->tuple.dst.u.udp.port = FUNC_1(VAR_13);
  if (FUNC_3(VAR_6) == 0)
   break;
 }

 if (VAR_13 == 0)
  return VAR_1;

 if (VAR_6->tuple.dst.u3.ip != VAR_6->saved_ip ||
     VAR_6->tuple.dst.u.udp.port != VAR_6->saved_proto.udp.port) {
  VAR_15 = FUNC_7(VAR_14, "%pI4:%u", &VAR_12, VAR_13);
  if (!FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8,
       VAR_14, VAR_15))
   goto err;
 }
 return VAR_0;

err:
 FUNC_5(VAR_6);
 return VAR_1;
}
